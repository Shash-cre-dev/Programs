#include<iostream>
using namespace std;
int main(){
	int y[10]={11,22,33,44,55,66,77,88,99,110};
	int *ptr= &y[6];
	cout<<"The Sixth element is "<<*ptr;
	return 0;
}
