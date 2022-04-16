#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void add_amounts(){
    char value ;
    int a,b,c,d,e,f;
    char a1,b1,c1,d1,e1,f1;
    do{
    cout<<"Enter first amount "<<endl;
    cin>>a>>a1>>b>>b1>>c;
    cout<<"Enter second amount "<<endl;
    cin>>d>>d1>>e>>e1>>f;
    int pound,shilling,pence;
    pound = a+d;
    shilling = b+e;
    pence = c+f;

    
    if (pence>=12){
        shilling+=pence/12;
        pence %=12;
        
    }
    if (shilling>=20){
        pound+=shilling/20;
        shilling%=20;
    }

    cout<<pound<<"."<<shilling<<"."<<pence<<endl;
    cout<<"Do you wish to continue (Y/N)"<<endl;
    
    cin>>value;
    }
    while(value!='n');

}

int main(){
    //Question no 8 
    add_amounts();
}