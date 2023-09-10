#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;
    
    if(int(x>y)){
    cout<<x<<" es mayor que "<<y<<endl;
    }else{
        cout<<y<<" es mayor que "<<x<<endl;
    }
    
    switch((int)x>y){
        case true: cout<<x<<" es mayor que "<<y<<endl; break;
        case false: cout<<y<<" es mayor que " <<x<<endl; break;
        default: "Ningún numero"; break;
    }
    
    
    return 0;
}