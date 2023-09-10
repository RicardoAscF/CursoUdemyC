#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Numero: ";
    cin>>a;
    if(a%2==0){
        cout<<"Es par";
    }
    
    if(a%2!=0){
        cout<<"Es impar";
    }
    
    return 0;
}