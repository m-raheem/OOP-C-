#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void star_display(){
    int n = 20;
    for (int i = 1;i<=n;i++){
        for(int j = i;j<n;j++){
            cout<<" ";
        }
        for(int s = 1;s<=(2*i-1);s++){
            cout<<"*";
        }
        
        cout<<"\n";
    }




}


int main(){
    //Question no 5 
    star_display();

}