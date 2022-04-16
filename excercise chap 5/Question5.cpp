#include <iostream>
using namespace std;

long hmstosec(int hour,int mint,int sec){
    sec += (hour *60*60)+(mint*60);
    return sec;
}

int main(){
    int a,b,c;
    char e,d,f;
    cout<<"please enter time in format HH:MM:SS "<<endl;
    cin>>a>>e>>b>>d>>c;
    cout<<"Time  = "<<hmstosec(a,b,c)<<" sec";
    return 0;
}