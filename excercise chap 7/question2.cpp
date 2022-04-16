#include <iostream>
using namespace std;

class employee{
    string name;
    long number;
    public:
        void getdata(){
            cout<<"\nEnter the name of employee ";
            cin>>name;
            cout<<"Enter the number of employee ";
            cin>>number;
        }
        void putdata(){
            cout<<"\nName :"<<name<<endl;;
            cout<<"Number :"<<number<<endl;
        }
};

int main(){
    employee employeearr[100];
    int n = -1;
    char ch;
    do{
        cout<<"Enter data of Employee number "<<n+1;
        employeearr[n++].getdata();
        cout<<"enter another one Y|N ";
        cin>>ch;
    }while(ch!='n');

    for (int j = 0;j<n;j++){
        cout<<"Employee number : "<<j+1<<endl;;
        employeearr[j].putdata();
    }
    


    return 0;
}