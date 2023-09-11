#include <iostream>
#include <memory>
using namespace std;

int main(){
    int a,b,c,comparacion;
    
    cout<<"Ingrese numero 1: ";
    cin>>a;
    
    cout<<"Ingrese numero 2: ";
    cin>>b;
    
    cout<<"Ingrese numero 3: ";
    cin>>c;
    
    cout<<"Ingrese numero 4 y te digo si ya lo escribiste: ";
    cin>>comparacion;
    
    if(comparacion==a || comparacion==b || comparacion==c){
        cout<<"Ya has ingresado este numero";
    }

    return 0;
}