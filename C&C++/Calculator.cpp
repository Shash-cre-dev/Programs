#include<iostream>
using namespace std;

class calculator{
	float op1;
	float op2;
	char op;
	int result;
	
	public:
		void get_data(){
			cout<<"Enter The Two Operands: ";
			cin>>op1>>op2;
			cin>>op;
		}
		
		void show_result(){
			cout<<"The Result is: ";
			switch(op){
				case '+':
					result=op1+op2;
					cout<<result;
					break;
				
				case '-':
					result=op1-op2;
					cout<<result;
					break;
				
				case '*':
					result=op1*op2;
					cout<<result;
					break;
				
				case '/':
					result=op1/op2;
					cout<<result;
					break;			
			}
	}
};

int main(){
	calculator ob;
	ob.get_data();
	ob.show_result();
	return 0;
}
