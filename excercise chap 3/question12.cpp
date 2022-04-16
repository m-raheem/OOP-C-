
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void calculator_edited(){
    char c1,c2,c3;
    char check;
    int a,b,c,d;
    int numenator,denominator;
    do {
    cout<<"Enter first fraction"<<endl;
    cin>>a>>c1>>b;
    cout<<"Please select a operation\n'+' ADDITION\n'-' SUBSTRACTION\n'*' MULTIPICATION\n'/' DIVISION"<<endl;
    cin>>c2;
    cout<<"Enter second fraction"<<endl;
    cin>>c>>c3>>d;

    switch(c2){
        case '+':
            numenator = (a*d)+(b*c);
            denominator = (b*d);
            break;
        case '-':
            numenator = (a*d)-(b*c);
            denominator = (b*d);
            break;
        case '*':
            numenator = (a*c);
            denominator = (b*d);
            break;
        case '/':
            numenator = (a*d);
            denominator = (b*c);
            break;
        default:
            cout<<"MATH ERROR ! "<<endl; 
            break; 


    }
   
        
        cout<<numenator<<"/"<<denominator<<endl;
        cout<<"Do you want to continue Y|N "<<endl;
        cin>>check;

    }
    while(check!='n');


}


int main(){
    //Question no 12
    calculator_edited(); 
  

   
}


