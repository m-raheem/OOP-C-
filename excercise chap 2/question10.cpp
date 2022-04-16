#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>



int main(){
    //Question no 10 
    int a;
    float b,c;
    cout<<"Enter pounds "<<endl;
    cin>>a;
    cout<<"Enter shillings "<<endl;
    cin>>b;
    cout<<"Enter pence "<<endl;
    cin>>c;

    float pounds = a+(b/20)+((c/12)/20);
    char d = 156;
    cout<<d<<a<<"."<<b<<"."<<c<<" = "<<d<<pounds<<endl;


    
    
    return 0;

    
}