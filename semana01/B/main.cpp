#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,maior=0;

    while(cin>>num && num!=0) {
        maior = max(maior,num);
    }

    cout << maior << "\n";
}