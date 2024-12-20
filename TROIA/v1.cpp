#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

bool check (char p1[], char p2[]) {
    if (strcmp(p1, p2) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {

    cout << endl;
    cout << "player 1: ";
    char p1[30];
    cin.getline(p1, 30);

    cout<<endl;
    cout << "X or O: ";
    char type[2];
    cin >> type;
    cin.ignore();

    char type1[2];
    while (true) {
        if (type[0] == 'X' || type[0] == 'O') {
            break;
        } else {
            cout << "TIPO INVALIDO: INFORME NOVAMENTE: ";
            cin >> type;
            cin.ignore();
        }
    }
    type1[0] = type[0];
    char type2[2];
    if (type1[0] == 'X' ){
        type2[0] = 'O';
    } else{ 
        type2[0] = 'X';
    }
    
    cout << endl;
    cout << "player 2: ";
    char p2[30];
    cin.getline(p2, 30);

    bool checkname = check(p1, p2);

    if ( checkname == 1 ) { 

        while ( true ){
        
        cout<<"informe o segundo nome novamente: "<<endl;
        cout << "player 2: ";
        char p2[30];
        cin.getline(p2, 30);

        if (strcmp(p1, p2) == 0) {
            continue;
            } else {
                break;
            }
        } 

    }

    cout<<"                              CONFIRMING PLAYERS"<<endl;
        cout<<"PLAYER 1 : "<<p1<<" ( "<<type1[0]<<" )"<<"                 |                "<<"PLAYER 2: "<<p2<<" ( "<<type2[0]<<" )"<<endl<<endl;

    return 0;
}
