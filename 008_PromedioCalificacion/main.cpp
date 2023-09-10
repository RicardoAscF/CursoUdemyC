#include <iostream>
using namespace std;

int main(){

    float calif, total=0;
    cout <<"Calificacion de Practicas: ";
    cin>>calif;
    total=calif*0.3;
    
    cout<<"Calificación del Examen: ";
    cin>>calif;
    total=total+(calif*0.6);
    
    cout<<"Pareticipaciones: ";
    cin>>calif;
    total=total+(calif*0.1);
    
    cout<<"La calificaciión final es: "<<total;
    


    return 0;
}