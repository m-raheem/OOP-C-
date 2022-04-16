#include <iostream>
#include <sstream>
using namespace std;

void swap(string& a, string& b){
    string temp = a;
    a = b;
    b = temp; 

}

int main(){
    string hms = "14:15:16";
    int sec = 55555;
    stringstream ss;
    ss<<sec;
    string s;
    ss>>s;
    string sec_s = s;
    cout<<"before swapping a = "<<hms <<" and b = "<<sec_s<<endl;
    swap(hms,sec_s);
    cout<<"After swapping a = "<<hms <<" and b = "<<sec_s<<endl;
}
    
    

