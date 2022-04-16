#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

double interest(double amount,int years,double interest_rate){
    for(int i = 1;i<=years;i++){
        amount = amount +((amount*interest_rate)/100);
    }
    return amount;

}

int main(){
    //Question no 7 
    int a;
    double b,c;
    cout<<"Enter initial amount :";
    cin>>b;
    cout<<"Enter number of years : ";
    cin>>a;
    cout<<"Enter interest rate (percent per year) :";
    cin>>c;
    cout<<"At the end of "<<a<<" years you will have "<<interest(b,a,c)<<" dollars "<<endl;
   
}