#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void calculator(int a , char b , int c ){
    switch (b)
    {
    case '/':
        cout<<"Answer is "<<(double) a/c<<endl;
        break;
    case '+':
        cout<<"Answer is "<< a+c<<endl;
        break;    
    case '*':
        cout<<"Answer is "<< a*c<<endl;
        break;
    case '-':
        cout<<"Answer is "<< a-c<<endl;
        break;    
    default:
        cout<<"MATH ERROR "<<endl;
        break;
    }

}

int main(){
    //Question no 4
    int a;
    int b;
    char dummychar;
    char c;
    while (true){
    cout<<"ENTER FIRST NUMBER ,OPERATOR,SECOND NUMBER  "<<endl;
    cin>>a>>dummychar>>b;
    calculator(a,dummychar,b);
    cout<<"do you solve another one Y|N"<<endl;
    cin>>c;
    if (c=='n'|| c=='N'){
        break;
    }
    }



}