#include <iostream>
using namespace std;

int main(){
    int numero,unidad,decena,centena,millar;
    cout<<"Digite un numero: ";
    cin>>numero;
    
    
    cout<<numero<<endl;
    unidad=numero/1000;
    numero/=10;
    cout<<numero<<endl;
    
    decena=numero/100;
    numero/=10;
    cout<<numero<<endl;
    
    
    centena=numero/10;
    numero/=10;
    cout<<numero<<endl;
    
    switch(millar){
        case 1: cout<<"M"; break;
        case 2: cout<<"MM";  break;
        case 3: cout<<"MMM"; break;
        case 4: cout<<"__IV"; break;
        case 5: cout<<"__v"; break;
        case 6: cout<<"__VI"; break;
        case 7: cout<<"__VII"; break;
        case 8: cout<<"__VIII"; break;
        case 9: cout<<"__IX"; break;
        case 0: cout<<""; break;
    }
    
    switch(centena){
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
        case 0: cout<<""; break;
    }
    
    switch(decena){
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
        case 0: cout<<""; break;
    }
    
    
    switch(numero){
        case 1: cout<<"I"; break;
        case 2: cout<<"III"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IV"; break;
        case 0: cout<<""; break;
    }
    
    
    
    
    
            
           
    return 0;
}

