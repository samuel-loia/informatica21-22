//direttive
#include<iostream>
using namespace std;

int power (int base, int exp) {
    int p;
    //se l'esponente è minore di 0 restituisco -1
    if(exp<0){
        p = -1;
    }
    //se l'esponente è uguale a 0 restituisco 0
    else if(exp==0){
        p = 1;
    }
    //se l'esponente è maggiore di 0 restituisco la potenza
    else{
        p=1;
        for(int i = 0; i < exp; i++){
            p=p*base;
        }
        
        }
        return p;
}

int main(){
    int a,b;
    cout << "Inserisci la base: ";
    cin >> a;
    cout << "Inserisci l'esponente: ";
    cin >> b;
    cout << "La potenza é: " << power (a, b) << endl;

    return 0;
}
