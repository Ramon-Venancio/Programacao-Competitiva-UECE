#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, vector<int>> passos = {
        {1,{1,2}},
        {2,{2,1}},
        {3,{2,-1}},
        {4,{1,-2}},
        {5,{-1,-2}},
        {6,{-2,-1}},
        {7,{-2,1}},
        {8,{-1,2}}
    };
    vector<vector<int>> buracos = {
        {1,3},
        {2,3},
        {2,5},
        {5,4}
    };
    vector<int> posicaoCavalo = {4,3};
    int N,M, quantPassos=0;
    char passou='v';

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> M;
        vector<int> passo = passos[M];
        posicaoCavalo[0] += passo[0];
        posicaoCavalo[1] += passo[1];
        
        quantPassos++;
        for (size_t j=0; j<buracos.size(); j++) {
            if (posicaoCavalo[0] == buracos[j][0] && posicaoCavalo[1] == buracos[j][1]) {
                passou='f';
            }
        }
        if (passou=='f') break;

    }
    cout << quantPassos << "\n";
}