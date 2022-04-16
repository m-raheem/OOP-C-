#include <iostream>
#include <stdlib.h>
using namespace std;


struct fraction{
    int numenator;
    int denominator;
    char dummychar;
};
fraction fadd(fraction frac,fraction frac2)
{
    fraction fadd;
    fadd.numenator  = (frac.numenator*frac2.denominator )+ (frac.denominator*frac2.numenator);
    fadd.denominator  = frac.denominator*frac2.denominator;
    fadd.dummychar = frac.dummychar;
    return fadd;
    
}
fraction fsub(fraction frac,fraction frac2)
{
    fraction fadd;
    fadd.numenator  = (frac.numenator*frac2.denominator )- (frac.denominator*frac2.numenator);
    fadd.denominator  = frac.denominator*frac2.denominator;
    fadd.dummychar = frac.dummychar;
    return fadd;
    
}

fraction fmul(fraction frac,fraction frac2)
{
    fraction fadd;
    fadd.numenator  = (frac.numenator*frac2.numenator);
    fadd.denominator  = frac.denominator*frac2.denominator;
    fadd.dummychar = frac.dummychar;
    return fadd;
    
}
fraction fdiv(fraction frac,fraction frac2)
{
    fraction fadd;
    fadd.numenator  = (frac.numenator*frac2.denominator);
    fadd.denominator  = frac.denominator*frac2.numenator;
    fadd.dummychar = frac.dummychar;
    return fadd;
}

int main(){
    fraction frac,frac2,fracc;
    int i ;
    frac = {12,13,'/'};
    frac2 = {13,14,'/'};
    cout<<"Please chosse the operation you want to perform with fraction \n 1. + \n 2. - \n 3. * \n 4. / "<<endl;
    cin >> i;
    cout<<"Now please enter the first fraction "<<endl;
    cin>>frac.numenator>>frac.dummychar>>frac.denominator;
    cout<<"Now please enter the second fraction "<<endl;
    cin>>frac2.numenator>>frac2.dummychar>>frac2.denominator;


    switch( i ){
        case 1:
            fracc = fadd(frac,frac2);
            cout<<fracc.numenator<<fracc.dummychar<<fracc.denominator<<endl;
            break;
        case 2:
            fracc = fsub(frac,frac2);
            cout<<fracc.numenator<<fracc.dummychar<<fracc.denominator<<endl;
            break;
        case 3:
            fracc = fmul(frac,frac2);
            cout<<fracc.numenator<<fracc.dummychar<<fracc.denominator<<endl;
            break;
        case 4:
            fracc = fdiv(frac,frac2);
            cout<<fracc.numenator<<fracc.dummychar<<fracc.denominator<<endl;
            break;
        default:
            cout<<"you didnt chossed the right option "<<endl;
            break;

    }
    
    return 0;


}