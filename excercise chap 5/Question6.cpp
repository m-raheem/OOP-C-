#include <iostream>
using namespace std;

long hmstosec(int hour,int mint,int sec){
    sec += (hour *60*60)+(mint*60);
    return sec;
}

void sectohms(long sec){
    int hours = sec/3600;
    sec %= 3600;
    int mints = sec/60;
    sec %=60;
    int second = static_cast <int> (sec);
    cout<<" TIME IS "<<hours<<":"<<mints<<":"<<sec<<endl;

}

int main(){
    int a,b,c;
    char e,d,f;
    cout<<"please enter time in format HH:MM:SS "<<endl;
    cin>>a>>e>>b>>d>>c;
    cout<<"Time  = "<<hmstosec(a,b,c)<<" sec"<<endl;
    sectohms(hmstosec(a,b,c));
    return 0;
}