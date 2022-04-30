#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>

bool isNumber(string s){
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == 0)
            return false;
 
    return true;
}
double convert_gallons(double e){
    return e / 7.481;
}


int main(){
    string val;
    // question no 1 
    while (true){
    cout<<"please enter the values of gallons you want to convert "<<endl;
    cin>>val;
    if (isNumber(val)){
          break;
    }
    else{
    }
    }
    double x ;                    //to check 
    istringstream(val)>>x; 
    cout <<val << " gallons = "<<convert_gallons(x)<<" cubic foot ";

    return 0;

    
}