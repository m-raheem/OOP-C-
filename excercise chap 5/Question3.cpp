#include <iostream>
using namespace std;

void zerosmaller(int& a, int& b){
    if (a<b){
        a = 0;
    }
    else{
        b = 0;
    }
}

int main(){
    int a,b,c,d;
    a= 10;b=20;c=30,d = 40;
    cout<<"before "<<"a is now "<<a<<" and b is now "<<b;
    zerosmaller(a,b);
    cout<<"\nafter "<<"a is now "<<a<<" and b is now "<<b;

}