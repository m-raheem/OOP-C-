#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>

void converter(double amount){
    cout<<"$ "<<amount<<" = "<<"PND "<<amount*1.487<<endl;
    cout<<"$ "<<amount<<" = "<<"FRC "<<amount*0.172<<endl;
    cout<<"$ "<<amount<<" = "<<"GDS "<<amount*0.584<<endl;
    cout<<"$ "<<amount<<" = "<<"YEN "<<amount*0.00955<<endl;

}

int main(){

    //QUESTION NO 6 
    double dollar;
    cout<<"please enter amount "<<endl;
    cin>>dollar;
    converter(dollar);

    
    return 0;

    
}