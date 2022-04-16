#include <iostream>
using namespace std;
int global = 0;

void counter(){
    global++;
    cout<<"i am called "<<global<<"times"<<endl;
}
void counter2(){
    static int x = 0 ;
    cout<<"i am called "<<++x<<"times"<<endl;
}

int main(){
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter2();
    counter2();
    counter2();
    counter2();
}

