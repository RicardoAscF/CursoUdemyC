#include <iostream>
using namespace std;


int main(){
    float precio,iva;
    cout<<"Ingrese precio"<<endl;
    cin>>precio;
    iva=precio*0.16;
    precio+=iva;
    cout<<"El precio con iva es"<<precio<<endl;

    return 0;
}