#include <iostream>
using namespace std;

class safearray{
    public:
        static const int limit = 12;
        int arr[limit];
        void putel(int ele,int ind){
            if (ind<0 || ind>limit-1){
                return;
            }
            else{
            arr[ind] = ele;}
        }
        int getel(int ind){
            if (ind<0 || ind>limit-1){
                return -1;
                
            }
            
            return arr[ind];
        }

};

int main(){
    safearray sa;
    int temp = 12345;
    sa.putel(temp,14);
    temp = sa.getel(14);
    cout<<temp;
}