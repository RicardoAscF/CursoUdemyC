#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float catetoO,catetoA,hipotenusa=0;
    cout<<"Cateto Opuestol:";
    cin>>catetoO;
    catetoO=catetoO*catetoO;
    
    cout<<"Cateto Adyacente: ";
    cin>>catetoA;
    catetoA*=catetoA;
    
    cout<<"La hipotenusa es:"<<sqrt(catetoO+catetoA);

    return 0;
}