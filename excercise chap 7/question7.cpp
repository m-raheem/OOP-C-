#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;

class money
{
    public : 
        string amount;
        
        long double mstold()
        {
            long double am;
            string a = "";
            for (int i = 0 ; i<amount.length();i++){
                if (amount[i]==','||amount[i]=='$'){}
                else{
                    a+=amount[i];
                }
            }
            cout<<a<<endl;
            am = stold(a);
            return am;

        }

};

int main (){
    money m;
    m.amount = "$1,234,567,890,123.99";
    
    cout<<m.mstold()<<endl;
}