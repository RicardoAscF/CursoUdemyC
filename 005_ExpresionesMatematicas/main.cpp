#include <iostream>
using namespace std;


int main(){
    float a,b;
    
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    
    cout.precision(2);
    cout<<"("<<a<<"/"<<b<<")"<<"+1="<<(a/b)+1<<endl;

    return 0;
}