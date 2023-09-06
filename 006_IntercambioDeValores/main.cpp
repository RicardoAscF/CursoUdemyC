#include <iostream>
using namespace std;

int main(){
    float a,b,aux;
    
    cout<<"Valor de A: ";
    cin>>a;
    
    cout<<"Valor de B: ";
    cin>>b;
    
    
    aux=a;
    a=b;
    b=aux;
    
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    
    return 0;
}


