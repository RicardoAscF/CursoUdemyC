#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"Cual es tu edad?: ";
    cin>>edad;
    
    if(edad>18 && edad<25){
        cout<<"Tu eedad esta en el rango";
    }else{
        cout<<"Tu edad no esta en el rango";
    }
    
    
    return 0;
}