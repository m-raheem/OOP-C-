#include <iostream>
using namespace std;

class fraction {
        int denominator ;
        int numenator;
        char dumchar;
        public:
        fraction(){
            denominator = 0;
            numenator = 0;
            dumchar = 0;
        }
        void getfract(fraction f,fraction f1){
            cout<<"please enter your fraction "<<endl;
            cin>>f.numenator>>dumchar>>f1.denominator;
        }
        void add(fraction f1,fraction f2){
            numenator = f1.numenator+f2.numenator;
        }
    

};

int main(){
    fraction frac[100];
    fraction frac2[100];
    fraction nume;
    int count=0;
    int sum1;
    int sum2;
    char n;

    do {
        
        cout<<"do want to add another fraction : "<<endl;
        

        cin>>n;

    }while(n!='n');

    for (int i=0;i<count;i++){
        nume.add(nume,frac[i]);
        dume.add(dume,frac[i+1]);
        
        
    }
    sum2*=count;
    cout<<sum1/sum2<<endl;

}