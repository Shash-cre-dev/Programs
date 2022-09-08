#include<iostream>
using namespace std;

class cuboid{

    int length;
    int width;
    int height;

    public:
    cuboid(){
        length=0;
        height = 0;
        width = 0;
    }

    cuboid(int x , int y){
        length = width = x;
        height = y;
    }

    cuboid(int a , int b , int c){
        length = a;
        width = b;
        height = c;
    }

    int volume(){
        int v = length*width*height;
        cout<<v<<endl;
    }
};

int main(){
    cuboid c1;
    cuboid c2(5,6);
    c2.volume();
    cuboid c3(3 , 5 ,6);
    c3.volume();
}