#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>


double to_fahrenheit(double a ){
    return (a*9/5)+32;
}


int main(){
    
//QUESTION NO 7 
    //celcius to farhenhite 
    double temp;
    cout<<"please enter temp (floating point number) in celcius "<<endl;
    cin>>temp;
    cout<<temp<<" C = "<<to_fahrenheit(temp)<<" F"<<endl;
    
    return 0;

    
}



