#include <iostream>
using namespace std;

void swap (int& a ,int& b){
     a = a+b;
     b = a-b;
     a = a-b; 
}

int main(){
    int a = 10,b = 20;
    cout<<"before swapping a = "<<a <<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping a = "<<a <<" and b = "<<b<<endl;

}