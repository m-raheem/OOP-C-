#include <iostream>
using namespace std;

class sales{     
    public:
        static const int size = 4;
        int arr[size];
        int count;
        int temp=0;
        int high=0;
        sales(){
            count=0;
        }
        void addelm(int v ){
            if (count==size){
                return;
            }
            arr[count] = v;
            count++;
        }

        void maxint(){
            for (int i = 0;i<count;i++){
                if (temp<arr[i]){
                    temp = arr[i];
                    high = i;
                    
                }
                
            }

        }

};

int main(){
    sales s;
    s.addelm(10);
    s.addelm(12);
    s.addelm(13);
    s.addelm(11);
    s.addelm(16);
    s.addelm(18);
    s.maxint();
    cout<<s.temp<<" highest element \n"<<s.high<<"  highest index"<<endl;


    return 0;
}