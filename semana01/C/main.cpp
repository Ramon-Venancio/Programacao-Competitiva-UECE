#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,num,maior=0,count=0; cin >> N;
    stack<int> pilha;
    pilha.push(0);

    for (int i=0;i<N;i++) {
        cin >> num;
        
        if (pilha.top() != num) {
            maior = max(maior, count);
            count = 0;
        }
        
        pilha.push(num);
        count++;
    }
    maior = max(maior, count);

    cout << maior << "\n";
}