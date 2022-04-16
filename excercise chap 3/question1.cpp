#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void generate_table(int a ){

    for(int i = 1;i<=200;i++){
        cout<<setw(5)<< a*i << " ";
        if (i%10==0){
            cout<<"\n";
        
    }
}
}
int main(){

    //QUESTION NO 1 
    generate_table(7);
}