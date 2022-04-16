#include <iostream>
using namespace std;

string reversit(string torev){
    int count = 0;
    string rev = torev;
    for (int i = torev.length();i>=0;i--,count++){
        rev[count] = torev[i-1];
        
    }
    return rev;

}

int main(){
    string a;
    cout<<"please enter a sentence to reverse : "<<endl;
    getline(cin,a);
    string reverse = reversit(a);
    cout<<reverse<<endl;
    return 0;
}