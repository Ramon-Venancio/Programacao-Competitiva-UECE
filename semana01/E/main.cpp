#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,H,L; cin >> A >> B >> C >> H >> L;
    vector<int> colchao = {A,B,C};
    vector<int> porta = {H,L};
    
    sort(colchao.begin(), colchao.end());
    sort(porta.begin(), porta.end());

    if ((colchao[0] <= porta[0]) && (colchao[1] <= porta[1])) {
        cout << 'S' << "\n";
    } else {
        cout << 'N' << "\n";
    }
}