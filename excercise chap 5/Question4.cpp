#include <iostream>
using namespace std;

void islarger(int a,int b){
    if (a>b){
        cout<<a<<" > "<<b<<endl;
    }
    else if (a==b){
        cout<<b<<" = "<<a<<endl;
    }
    else{
        cout<<b<<" > "<<a<<endl;
    }
}

int main(){
    double a ,b;
    cout<<"please enter the distance 1 "<<endl;
    cin >> a;
    cout<<"please enter the distance 2 "<<endl;
    cin >> b;
    islarger(a,b);
    
}