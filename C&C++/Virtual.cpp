#include<iostream>
using namespace std;

class Reverse{
	public:
		int i, x;
		int num(){
			cin>>x;
		}
};

class R1: virtual public Reverse{
};

class R2: virtual public Reverse{
}; 

class Display: public R1, public R2{
	public:
		int dis_rev(){
			Reverse::num();
			cout<<"The Reverse Number is: ";
			for(i=0; i<x; x=x/10){
				cout<<x%10;
			}
		}
};

int main(){
	Display r;
	r.dis_rev();
	return 0;
}
