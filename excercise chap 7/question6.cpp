#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs,diamonds,hearts,spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
    private:
        int number;
        Suit suit;
    public:
        card(){ }
        void set(int n,Suit s){
            suit = s;number = n;
        }
        void display(){
            if (number>=2 && number<=10) 
                 cout<<number;
            else 
                switch (number)
                {
                case jack:  cout<<"J" ; break;
                case queen: cout<<"Q" ; break;
                case king:  cout<<"K" ; break;
                case ace:   cout<<"A" ; break;
                }
            switch(suit){
                case clubs:    cout<<static_cast<char>(5);break;
                case diamonds: cout<<static_cast<char>(4);break;
                case hearts:   cout<<static_cast<char>(3);break;
                case spades:   cout<<static_cast<char>(6);break;
            }

        }
};

int main(){
 card deck[52];
            card hand1[13];
            card hand2[13];
            card hand3[13];
            card hand4[13];
            int j;

            cout<<endl;

            for (j=0;j<52;j++){
                int num = (j%13)+2;
                Suit su = Suit(j/13);
                deck[j].set(num,su);
            }

            cout<<"\nOrdered deck :\n";
            for (j=0;j<52;j++){
                deck[j].display();
                cout<<" ";
                if (!(j+1)%13){
                    cout<< endl;
                }

            }
            srand(time( NULL));

            for(j = 0 ; j<52 ;j++){
                int k = rand()%52;
                card temp = deck[j];
                deck[j] = deck[k];
                deck[k] = temp; 
            }

            cout<< "\nShuffled deck : \n";
            int count = 0;

            for (j = 0;j<52;j++){
                if (count == 12){count = 0;}
                if (j<13)
                    hand1[count++] = deck[j];
                else if (j>=13 && j<13*2)
                    hand2[count++] = deck[j];
                else if (j>=26 && j<13*3)
                    hand3[count++] = deck[j];
                else if (j>=39 && j<13*4)
                    hand4[count++] = deck[j];        
            }

              for (j = 0;j<52;j++){
                if (count == 12){count = 0;}
                if ((!(j+1)%13)){cout<<endl;}
                if (j<13)
                {
                    if (j==0){cout<<"\nHAND 1"<<endl;}
                    hand1[count++].display();
                    cout<<" ";
                }
                else if (j<13*2)
                {
                    if (j==13){cout<<"\nHAND 2"<<endl;}
                    hand2[count++].display();
                    cout<<" ";
                }
                    
                else if (j<13*3)
                {
                    if (j==26){cout<<"\nHAND 3"<<endl;}
                    hand3[count++].display();
                    cout<<" ";

                }
                   
                else if (j<13*4)
                {
                    if (j==39){cout<<"\nHAND 4"<<endl;}
                    hand4[count++].display();
                    cout<<" ";
                }

                
             }

}
             
