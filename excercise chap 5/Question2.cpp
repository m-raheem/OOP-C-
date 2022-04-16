#include <iostream>
using namespace std;

double power(double n ,int p){
    double sum = n;
    for (int i = 1;i<p;i++){
        sum = sum * n;
    }
    return sum;
}

int main(){
    double a;
    cout<<"please enter a number "<<endl;
    cin>>a;
    
    cout<<"the square is "<<power(a,2);

}