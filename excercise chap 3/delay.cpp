#include <iostream>
using namespace std;

void delay(){
    for(unsigned int i = 0;i<=2290000000/5;i++){

    }
}
int main(){
    //cout<<sizeof(unsigned int);

    for (int i = 1;i<=60;i++){
        delay();
        cout<<i;

    }

}