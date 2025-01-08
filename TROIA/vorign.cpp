#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

bool check(char p1[], char p2[]) {
    if (strcmp(p1, p2) == 0) {
        return true;
    } else {
        return false;
    }
}

void game ( char p1[], char type1, char p2[], char type2 ){ 

    // trabalhando com matrizes
    // marcar a posicao ja utilizada com uma matriz bool = 1 ou 0 - feito ( verificando se é != '\0' )
    // verificacao de acertou ou não ( if else )

    // o jogador nao precisa ser obrigado a preencher na ordem - ele deve escolher qual casa ele quer preencher
    // vez de um jogador -> vez de outro jogador : i = 1 - soma 1 = player 1 : i - 1 = 0 - player 2 ( laço de repetição )
    // preenchimento pela localização do índice : 11 , 12, 21, 31..

        // TRABALHANDO DE FORMA MAIS IMBECIL POSSÍVEL SÔ
        // ou se o espaço for diferente de '\0' = ja estando sendo ocupado - feito

    char mat[3][3];
    for(  int i = 0; i < 3; i++ ) { 
        for ( int j = 0 ; j < 3 ; j++ ){
            mat[i][j] = '\0';
        }
    }
   for(  int i = 0; i < 3; i++ ) { 
        cout << endl;
        for ( int j = 0 ; j < 3 ; j++ ){
            cout << i << j <<" | ";
        }
    }

    cout << endl << endl;
    int vez = 0; 
    int l;
    int c;

    for( int game = 0; game < 9 ; game++ )
    { 
        if ( vez == 0 ) {
            cout<<"player: "<<p1<<" "<<" ( "<<type1<<" ) "<<endl;
            cin >> l >> c; 
            
                while(true)
            { 
                if (( l < 0 || l > 3 || c < 0 || c > 3 || mat[l][c] != '\0')){
                    cout<<"posicao invalida.  Tente novamente: "<<endl;
                    cin >> l >> c ;
                } else { 
                    mat[l][c] = 'X';
                    vez++;
                    break;
                } 
            }   
    for(  int i = 0; i < 3; i++ ) { 
        cout << endl;
        for ( int j = 0 ; j < 3 ; j++ ){
            cout << mat[i][j] << " | ";
        }
    }
   cout << endl;
     for(  int i = 0; i < 3; i++ ) { 
        cout << endl;
        for ( int j = 0 ; j < 3 ; j++ ){
            cout << i << j <<" | ";
        }
    }
    
    cout << endl << endl;
         if ( vez == 1 ) {
            cout<<"player: "<<p2<<" "<<" ( "<<type2<<" ) "<<endl;
            cin >> l >> c; 
            
                while(true)
            { 
                if (( l < 0 || l > 3 || c < 0 || c > 3  || mat[l][c] != '\0')){
                    cout<<"posicao invalida.  Tente novamente: "<<endl;
                    cin >> l >> c ;
                } else { 
                    mat[l][c] = 'O';
                    vez--;
                    break;
                } 
            }  

        for(  int i = 0; i < 3; i++ ) { 
           cout << endl;
            for ( int j = 0 ; j < 3 ; j++ ){
                cout << mat[i][j] << " | ";
            }
        }
            cout << endl;
        }
        cout << endl;
        for(  int i = 0; i < 3; i++ ) { 
            cout << endl;
            for ( int j = 0 ; j < 3 ; j++ ){
                cout << i << j <<" | ";
        }
    }
    cout << endl << endl;
    }

  }
    
}
int main() {

    cout << endl;
    cout << "player 1: ";
    char p1[30];
    cin.getline(p1, 30);

    cout << endl;
    cout << "X or O: ";
    char type;  
    cin >> type;
    cin.ignore();

    while (true) {
        if (type == 'X' || type == 'O') {
            break;
        } else {
            cout << "TIPO INVALIDO: INFORME NOVAMENTE: ";
            cin >> type;
            cin.ignore();
        }
    }

    char type1 = type; 
    char type2;
    if (type1 == 'X') {
        type2 = 'O';
    } else {
        type2 = 'X';
    }
    
    cout << endl;
    cout << "player 2: ";
    char p2[30];
    cin.getline(p2, 30);

    bool checkname = check(p1, p2);

    if (checkname == 1) { 
        // Enquanto os nomes forem iguais, pede novamente
        while (true) { 
            cout << "informe o segundo nome novamente: " << endl;
            cout << "player 2: ";
            cin.getline(p2, 30);

            if (strcmp(p1, p2) == 0) {
                continue; 
            } else {
                break;  
            }
        }
    }

    cout << setw(48) << "CONFIRMING PLAYERS" << endl;
    cout << "PLAYER 1 : " << p1 << " ( " << type1 << " )" << "                 |                "
         << "PLAYER 2: " << p2 << " ( " << type2 << " )" << endl << endl;

    cout << setw(45) << "STARTING GAME" << endl << endl;
    game ( p1, type1, p2, type2 );

    return 0;
}
