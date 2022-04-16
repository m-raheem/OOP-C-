#include <iostream>
using namespace std;
const double PI = 3.416;

double circarea(double radius){
    return PI*radius*radius;


}
int main(){
    double a;
    cout<<"Please enter radius "<<endl;
    cin>>a;
    cout<<"Area is "<<circarea(a);
    return 0;
}