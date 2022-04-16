
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

void years_to_investment(double amount,double final_amount){
    int years;
    
    while(final_amount>=amount){
        double temp = final_amount*0.055;
        final_amount = final_amount-temp;
        years++;
    }
    cout<<years<<" yeara" <<endl;
}

int main(){
    
   //Question no 10
    years_to_investment(3000,5124.43);

   
}


