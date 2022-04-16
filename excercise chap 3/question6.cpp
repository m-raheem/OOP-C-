#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int factorial(int i ){
    // if (i==0){
    //     return 1;
    // }
    // return i*factorial(i-1);
    int num=1;

    while (i!=0){
        num = num*i;
        i--;
    }
    return num;
}


int main(){
    //Question no 6
    int num;
    do
    {
        cout<<"please enter a number to gain factorial "<<endl;
        cin >>num;
        
        cout<<num<<"! = "<<factorial(num)<<endl;
    }
    while(num!=0);


    
}