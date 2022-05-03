#include <iostream>

using namespace std;

int Perimetro(int base, int altezza){
    return  ( 2 * ( base + altezza ));
}

int Area(int altezza, int base){
    return base*altezza;
}

float Media (int somma, int valori){
    somma = 0;
    for(int i = 0; i < 5; i++){
     cout << "inserisci i valori degli interi: ";
     cin >> valori;
     somma = somma + valori;
   }
    
   return somma/5;
}

int scambia(int a, int b){
    
}

int main()
{
   int base, altezza, area, perimetro, valori, somma, media;
   
   cout << "inserisci la base: ";
   cin >> base;
   
   cout << "inserisci l'altezza: ";
   cin >> altezza; 
   
   area = Area (altezza, base);
   
   perimetro = Perimetro (base, altezza);
   
   
   cout<<"il perimtro è: "<<perimetro<<endl;
   
   cout<<"l'area è "<<area<<endl;
   
   media = Media (somma, valori);
   
   cout << "la media è: " << media << endl;
   
   
    return 0;
}