#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"X: ";
    cin>>x;
    
    switch(int(x>0)){
        case true: cout<<"Es positvo"; break;
        case false: cout<<"Es negativo";
    }

    return 0;
}