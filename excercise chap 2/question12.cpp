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
    //QUESTION NO 12
    float decpounds;
    int pounds;
    float decfrac;
    float decshillings;
    int shillings;
    float decpenes;
    float decfrac2;
    int penes;

    cout<<"Enter decimal pounds "<<endl;
    cin>>decpounds;

    pounds = static_cast<int>(decpounds);
    decfrac = decpounds-pounds;
    decshillings = decfrac * 20;
    shillings = static_cast<int>(decshillings);
    decfrac2 = decshillings-shillings;
    decpenes = decfrac2*12;
    penes = static_cast<int>(decpenes);
    char a = 156;

    cout<<"Equivalent in old notation = "<<a<<pounds<<"."<<shillings<<"."<<penes;
    
    
    return 0;

    
}