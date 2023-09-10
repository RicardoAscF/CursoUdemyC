#include <iostream>
#include <math.h>

using namespace std;


int main(){
    float a,b,c;
    
    cout<<"A:";
    cin>>a;
    
    cout<<"B: ";
    cin>>b;
    
    cout<<"C: ";
    cin>>c;
    
    cout<<"X1 = "<<(-b+(  sqrt( (pow(b,2)) - 4*a*c   ) ))/(2*a)<<endl;
    cout<<"X2 = "<<(-b-(  sqrt( (pow(b,2)) - 4*a*c   ) ))/(2*a);    


    return 0;
}