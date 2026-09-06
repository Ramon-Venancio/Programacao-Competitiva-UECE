#include <bits/stdc++.h>
using namespace std;

int main() {
    int Cv,Ce,Cs,Fv,Fe,Fs,pointsC,pointsF; cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    pointsC = Cv*3+Ce;
    pointsF = Fv*3+Fe;

    if (pointsC > pointsF) {
        cout << 'C' << "\n";
    } else if (pointsC < pointsF) {
        cout << 'F' << "\n";
    } else {
        if (Cs > Fs) {
            cout << 'C' << "\n";
        } else if (Cs < Fs) {
            cout << 'F' << "\n";
        } else {
            cout << '=' << "\n";
        }
    }
}