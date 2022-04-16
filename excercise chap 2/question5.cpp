#include <iostream>
using namespace std;
# include <stdlib.h>
# include <iomanip>
# include <ios>
# include <sstream>
# include <string>
# include <stdio.h>
# include <string.h>

int library(char a){
    if (islower(a)){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){

    //Question 5 
    cout<<"please enter the letter "<<endl;
    char a ;
    cin>>a;

    cout<<library(a)<<endl;

    
    return 0;

    
}