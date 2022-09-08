#include<iostream>
using namespace std;
int main(){
	const int districts=4;
	const int months=3;
	int d,m;
	double sales[districts][months];
	for(d=0; d<districts; d++)
	{
		 for(m=0; m<months; m++)
		 {
             cout<<"Enter The Sales Of District="<<d+1<<" ";
    		 cout<<",Month"<<m+1<<"=";
			 cin>>sales[d][m];
	}
		
	for(d=0; d<districts; d++)
	{
		 for(m=0; m<months; m++)
		 {
             cout<<"Enter The Sales Of District="<<d+1<<" ";
    		 cout<<",Month"<<m+1<<"=";
			 cin>>sales[d][m];
		 }
 	}
 			
 	cout<<"\n\n\n";
	cout<<"\n\nThe Sale Of Districts Is \n";

	for(d=0; d<districts; d++)
	{
		   cout<<"\n District # "<<d+1<<" sales :";
		    for(m=0; m<months; m++)
		    {
		      cout<<sales[d][m]<<"\t";
                  }
	}
	cout<<endl; 
	return 0;
}



