#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,quant,quantViu; cin >> N;
    string line;

    for (int i=0;i<N;i++) {
        cin >> line;

        quant = 0;
        quantViu = 0;

        for (auto it = line.begin(); it != line.end(); it++) {
            if (*it=='<') {
                quantViu++;
            }
            if (*it=='>' && quantViu>0) {
                quant++;
                quantViu--;
            }
        }
        
        cout << quant << "\n";        
    }
}