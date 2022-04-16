#include <iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;

        }
        Distance(int ft,float in){
            feet = ft;
            inches = in;
        }
        void getdist(){
            cout<<"\nEnter feet: ";
            cin>>feet;
            cout<<"\nEnter inches: ";
            cin>>inches;
        }
        void showdist(){
            cout<<"feet: "<<feet<<" | inches: "<<inches<<endl;
        }

        void add_dist(Distance d1,Distance d2){
            inches = d1.inches + d2.inches;
            feet = 0;
            if (inches>=12){
                inches -=12;
                feet++;
            }
            feet+=d2.feet+d1.feet;
        }

        void div_dist(Distance d,int divisor){
            float fltfeet = d.feet+ d.inches/12;
            fltfeet/=divisor;
            feet = int(fltfeet);
            inches = (fltfeet-feet)*12;
        }


};

int main(){
    Distance distarr[100];
    Distance total(0,0),average;
    int count = 0;
    char ch;
    do{
        cout<<"\n Enter a Distance : ";
        distarr[count++].getdist();
        cout<<"DO another one Y|N "<<endl;
        cin>>ch;

    }while(ch!='n');

    for (int i = 0;i<count;i++){
        total.add_dist(total,distarr[i]);
    }
    average.div_dist(total,count);

    cout<<"the average is : "<<endl;
    average.showdist();
    cout<<endl;


    return 0;

}