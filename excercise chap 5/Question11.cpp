#include <iostream>
using namespace std;

double add_amounts(){
    int a,b,c,d,e,f;
    char a1,b1,c1,d1,e1,f1;
    cout<<"Enter first amount "<<endl;
    cin>>a>>a1>>b>>b1>>c;
    cout<<"Enter second amount "<<endl;
    cin>>d>>d1>>e>>e1>>f;
    int pound,shilling,pence;
    pound = a+d;
    shilling = b+e;
    pence = c+f;

    shilling +=pence/12;

    pound += shilling/20;

    return pound;
    
}
double add_amounts(double sterling,double sterling2){
    return sterling+sterling2;
}
void display(double sterling)
{
    cout<<sterling<<endl;

}
int main (){
    cout<<add_amounts()<<" sterling "<<endl;
    cout<<add_amounts(12,13)<<" sterling "<<endl;
    display(12);

}