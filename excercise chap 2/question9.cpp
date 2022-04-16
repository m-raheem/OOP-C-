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
    //Question no 9 
    int a1,b1,c1,d1,new1,new2;
    char dummyChar;

    cout<<"enter the fraction "<<endl;
    cin>>a1>>dummyChar>>b1;
    cout<<"enter the fraction "<<endl;
    cin>>c1>>dummyChar>>d1;
    new1 = (a1*d1)+(b1*c1);
    new2 = (b1*d1);

    cout<<"sum is "<<new1<<"/"<<new2;

    
    
    return 0;

    
}