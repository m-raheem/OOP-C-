#include <iostream>
using namespace std;
#include <iomanip>
#include <string>


void generating_number(){
    char a = 1;
    long sum;
    int b;
    int c;
    int check = 1;
    
    while (true){
        cout<<"enter any number other than N (N to exit)"<<endl;
        a = getchar();
        if (a == 10){
            continue;
        }
        //cout<<a<<" this is integer "<<endl;
        if (a=='n'){
            break;
        }
        c = a;
        //cout<<c<<" this is char aski "<<endl;

        b = c-48; // char to int 
        cout<<b<<" this is integer "<<endl;
        sum = sum*10 + b;
    }
    cout<<"the digit is "<<sum<<endl;
}



int main(){

    //Question no 3 
    generating_number();
}
