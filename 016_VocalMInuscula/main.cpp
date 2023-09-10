#include <iostream>
using namespace std;


int main(){
    char caracter;
    cout<<"Ingresa un caracter: ";
    cin>>caracter;
    switch(caracter){
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o':
        case 'u': cout<<caracter<<" es una vocal minuscula"; break;
        
        default: cout<<'No es una vocal minmuscula'; break;
    }

    return 0;
}