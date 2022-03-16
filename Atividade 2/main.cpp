#include <iostream>
#include <Stdlib.h>
#include "backoffice.h"

void menu() {
    cout << "Menu do vetor" << endl;
    cout << "1-Exibir vetor informado" << endl;
    cout << "2-Exibir elementos impares armazenados no vetor" << endl;
    cout << "3-Exibir elementos pares no vetor" << endl;
    cout << "4-Encerrar o programa" << endl;
}

int main() {

    int op;
    int* vet2;
    int i = 0;
    int valorvet2 = 10;
    vet2 = criavet(valorvet2);
    for (i = 0; i < valorvet2; i++) {
        vet2[i] = (rand() % 10) + 1;
    }

    do {
        menu();
        cout << "-";
        cin >> op;
        
        switch (op) {
        case 1:
            for (i = 0; i < valorvet2; i++) {
                cout << vet2[i] << endl;
            }
            cout << endl;
            break;
        case 2:
            for (i = 0; i < valorvet2; i++) {
                if (vet2[i] % 2 > 0) {
                    cout << vet2[i] << endl;
                }
            }
            cout << endl;
            break;
        case 3:
            for (i = 0; i < valorvet2; i++) {
                if (vet2[i] % 2 == 0) {
                    cout << vet2[i] << endl;
                }
            }
            cout << endl;
            break;
        default:
            cout << "Opcao invalida" << endl<<endl;
        }
        cout<<endl;
        } while (op < 4);
    }