#include<iostream>
using namespace std;

class Mobile{
      protected:
            int battery;
            int camera;
            
      public:
             void getdata(){
                cout<<"Battery and Camera";
                cin>>battery;
                cin>>camera;
            }
            
            void putdata(){
                 cout<<"\n Battery is:"<<battery;
                 cout<<"\n Camera is:"<<camera;
            }
 };

class Apple: public Mobile{
        protected:
              int RAM;
              int ROM;
        
        public:
               void getdata(){
                    cout<<"Ram and ROM";
                    cin>>RAM;
                    cin>>ROM;
               }
            
               void showdata(){
                    cout<<"\n Ram is:"<<RAM;
                    cout<<"\n Rom is:"<<ROM;
               }
};

class iphone: public Apple{
        protected:
              char releasedate[20];
              float price;
        
        public:
               void takedata(){
                    Mobile::getdata();
                    Apple::getdata();
                    cout<<"Release and Price";
                    cin>>releasedate;
                    cin>>price;
               }
            
               void display(){
                    putdata();
                    showdata();
                    cout<<"\n Release Date is:"<<releasedate;
                    cout<<"\n Price:"<<price;
               }
};

int main ()
{
iphone x;
x.takedata();
x.display();
return 0;
}

