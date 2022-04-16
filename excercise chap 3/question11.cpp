
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void calculator(){
    char value ;
    int a,b,c,d,e,f,g;
    int pound,shilling,pence;
    char a1,b1,c1,d1,e1,f1;
    do{
    cout<<"Enter first amount "<<endl;
    cin>>a>>a1>>b>>b1>>c;
    cout<<"Enter second amount "<<endl;
    cin>>d>>d1>>e>>e1>>f;
    cout<<"Please select a operation\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPICATION "<<endl;
    cin>>g;
    switch (g)
    {
    case 1:
        pound = a+d;
        shilling = b+e;
        pence = c+f;
        
        break;
    case 2:
        pound = a-d;
        shilling = b-e;
        pence = c-f;
        
        break;    
    case 3:
        pound = a*d;
        shilling = b*e;
        pence = c*f;
        
        break;
    default:
        cout<<"Wrong entry "<<endl;
        break;
    }

    
    

    
    if (pence>11){
        shilling+=pence/12;
        pence %=12;
        
    }
    if (shilling>19){
        pound+=shilling/19;
        shilling%=19;
    }

    cout<<pound<<"."<<shilling<<"."<<pence<<endl;
    cout<<"Do you wish to continue (Y/N)"<<endl;
    
    cin>>value;
    }
    while(value!='n');

}


int main(){
    
   calculator();
   
}


