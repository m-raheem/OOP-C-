#include <iostream>
using namespace std;

double power(double n ,int p){
    double sum = n;
    for (int i = 1;i<p;i++){
        sum = sum * n;
    }
    return sum;
}
long power(long n ,int p){
    long sum = n;
    for (int i = 1;i<p;i++){
        sum = sum * n;
    }
    return sum;
}
int power(int n ,int p){
    int sum = n;
    for (int i = 1;i<p;i++){
        sum = sum * n;
    }
    return sum;
}
int power(char n ,int p){
    int num = n-48;
    //cout<<num<<endl;
    int sum = n-48;
    for (int i = 1;i<p;i++){
        sum = sum * num;
    }
    return sum;
}
float power(float n ,int p){
    float sum = n;
    for (int i = 1;i<p;i++){
        sum = sum * n;
    }
    return sum;
}

int main(){
    double a = 5;
    int b = 5;
    long c = 5;
    char d = '5';
    float e = 5;
    
    cout<<"the square is "<<power(a,2)<<endl;
    cout<<"the square is "<<power(b,2)<<endl;
    cout<<"the square is "<<power(c,2)<<endl;
    cout<<"the square is "<<power(d,2)<<endl;
    cout<<"the square is "<<power(e,2)<<endl;

}