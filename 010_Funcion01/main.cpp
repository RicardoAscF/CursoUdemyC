#include <iostream>  
#include <math.h>
using namespace std;

int main(){
    float x,y;
    
    cout<<"X: ";
    cin>>x;
    
    cout<<"Y: ";
    cin>>y;
    
    cout<<"La funcion da como resultado"<<(sqrt(x))/( (pow(y,2))-1 );
   
    return 0;
}

