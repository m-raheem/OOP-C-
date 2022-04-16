#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == 0)
            return false;
 
    return true;
}


void temp_conversion(){
    //Question 2
    double temp;
    string choice;
    int check = 1;
    while (check!=0){
        cout<<"Type 1 to convert Fahrenheit to celcius\n   2 to convert celcius to Fahrenheit "<<endl;
        cin>>choice;
        if (isNumber(choice)){
            
        }
        else{
            cout<<"please enter correct input "<<endl;
            continue;
        }        
        int x ;            //to check 
        istringstream(choice)>>x; 
        switch (x)
    {
        case 1:
            cout<<"Enter temprature in Fahrenheit "<<endl;
            cin>>temp;
            cout<<" In celcius thats "<< ((temp-32)*5)/9<<endl;
            check=0;
            break;

        case 2:
            cout<<"Enter temprature in Celcius "<<endl;
            cin>>temp;
            cout<<" In Fahrenheit thats "<< ((temp)*(9/5)+32)<<endl;
            check = 0;
            break;    
        
        default:
            cout << "please enter correct choice"<<endl;
            check = 1;
            break;
    }

    
    }
}


int main(){

    //Question no 2
    temp_conversion();


    
}