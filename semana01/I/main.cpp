#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    queue<int> fila;
    vector<int> descartados;
    while(true) {
        cin >> num;
        if (num==0) {
            break;
        }

        for (int i=1; i<=num; i++) {
            fila.push(i);
        }
    
        while (fila.size() >=2)
        {
            descartados.push_back(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
        
        cout << "Discarded cards: " << descartados[0];
        for (size_t i = 1; i < descartados.size(); i++)
        {
            cout << ", " << descartados[i];
        }
        cout << "\nRemaining card: " << fila.front() << "\n";
        descartados.clear();
        fila.pop();
    }
}