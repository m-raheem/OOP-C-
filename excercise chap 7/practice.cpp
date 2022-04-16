#include <iostream>
using namespace std;

class Student{
    int rollno ;
    
    public:
    Student(int arollno){
       
        rollno = arollno ;
    }
    int getRollNo(){
        return rollno;
    }

};

int main(){
    char a;
    Student ali(cin.get());
    int roll = ali.getRollNo();
    cout<<roll<<endl;
}