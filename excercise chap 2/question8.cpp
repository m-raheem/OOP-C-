#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>

void Width(string n , string f ){
    
    cout<<n
    <<setfill('.')
    <<setw(19);
    cout<<f<<endl;
   
}


int main(){
    //QUESTION NO 8
    Width("porticity","1234456");
    
    
    return 0;

    
}

