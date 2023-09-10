#include <iostream>
using namespace std;

int main(){
    char caracter;
    cout<<"Ingrese una letra";
    cin>>caracter;
    
    switch(caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<caracter<<" es una vocal minuscula"; break;
        
        
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<caracter<<" es una vocal mayuscula"; break;
        
        default: cout<<"No es una vocal";
        
    }
    
    return 0;
}