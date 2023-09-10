#include <iostream>
using namespace std;


int main(){
    float a,b,c;
    
    cout<<"NUmero 1: ";
    cin>>a;
    
    cout<<"NUmero 2: ";
    cin>>b;
    
    cout<<"NUmero 3: ";
    cin>>c;
    
    if(a>b && a>c){
        cout<<"El mayor es "<<a; 
    }
    
    if(b>a && b>c){
        cout<<"El mayor es "<<b; 
    }
            
         
    if(c>a && c>b){
        cout<<"El mayor es "<<c;
    }

    return 0;
}