#include <iostream>
using namespace std;

class fraction {
        public:
        int denominator ;
        int numenator;
        char dumchar;
        fraction(){
            denominator = 0;
            numenator = 0;
            dumchar = '/';
        }
        fraction(int n, int s){
            denominator = n;
            numenator = s;
            dumchar = 0;
        }
        
        void getfract(){
            cout<<"please enter your fraction "<<endl;
            cin>>numenator>>dumchar>>denominator;
        }
        void add(fraction f,fraction f1){
            numenator = (f.numenator*f1.denominator)+(f.denominator*f1.numenator);
            denominator = (f1.denominator*f.denominator);
        }
    

};

int main(){
    fraction frac[100];
    fraction total(1,0);
    int count=0;
    int sum1;
    int sum2;
    char n;

    do {
        frac[count++].getfract();
        cout<<"do want to add another fraction : "<<endl;
        cin>>n;

    }while(n!='n');

    for (int i=0;i<count;i++){
        total.add(total,frac[i]);        
    }
    total.denominator*=count;
    cout<<"the average is "<<total.numenator<<"/"<<total.denominator<<endl;

}