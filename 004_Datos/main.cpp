

#include <iostream>
using namespace std;

int main(){
    int edad;
    char sexo;
    double altura;
    
    cout<<"Ingrese los siguientes datos:"<<endl;
    cout<<"Edad: ";
    cin>>edad;
    
    cout<<"Sexo (Un caracter): ";
    cin>>sexo;
    
    cout<<"Altura: ";
    cin>>altura;
    
    cout<<"---------"<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;
    
    return 0;
}