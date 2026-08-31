#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<long long> pilha;
    long long N, X, resultado=0; cin >> N;
    for (int i=0;i<N;i++) {
        cin >> X;
        if (X==0 and !pilha.empty()) {
            resultado -= pilha.top();
            pilha.pop();
        } else {
            pilha.push(X);
            resultado += X;
        }
    }
    cout << resultado << "\n";
}