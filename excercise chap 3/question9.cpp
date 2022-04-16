#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void arrangements(int a ,int b){
    int multi=1;
    int multi2=1;
    for (int i=a;i>0;i--){
        multi*=i;
    }
    for (int j=(a-b);j>=1;j--){
        multi2=multi2*j;
        
    }
    cout<<(multi/multi2)<<endl;

}

int main(){
    //Question no 9 
    int chairs,guests;
    cout<<"Enter number of chairs"<<endl;
    cin>>chairs;
    cout<<"Enter number of guests"<<endl;
    cin>>guests;

    arrangements(guests,chairs);
}