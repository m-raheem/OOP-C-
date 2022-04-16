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
        //Question no 11 
    setiosflags(ios::left);
    cout<<setiosflags(ios::left)<<setw(13)<<"Last Name"<<setw(13)<<"First Name"<<setw(19)<<"Street address"<<setw(12)<<"Town"<<setw(5)<<"State"<<endl
    <<setw(58)<<setfill('-')<<""<<endl<<setfill(' ')
    <<setiosflags(ios::left)<<setw(13)<<"JONES"<<setw(13)<<"BERNAD"<<setw(19)<<"109 PINE LANE"<<setw(12)<<"LITTLETOWN"<<setw(15)<<"MI"<<endl
    <<setiosflags(ios::left)<<setw(13)<<"O'BRAIN"<<setw(13)<<"COLEEN"<<setw(19)<<"42 E 99TH AVE"<<setw(12)<<"BIGCITY"<<setw(15)<<"NY"<<endl
    <<setiosflags(ios::left)<<setw(13)<<"WONG"<<setw(13)<<"HARRY"<<setw(19)<<"121-A ALABAMA ST."<<setw(12)<<"LAKEVILLE"<<setw(15)<<"IL"<<endl;


    

    return 0;

    
}