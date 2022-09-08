#include<iostream>
#include<string.h>
using namespace std;

class student{
	string name;
	int roll_no;
	float percent;
	
	public:
		Student(){
			name="NULL";
			roll_no=0;
			percent=0.0;
		}
		
		void get_details(){
			cout<<"Enter Student Details"<<endl;
			cout<<"Name: ";
			cin>>name;
			cout<<"Roll No: ";
			cin>>roll_no;
			cout<<"Percent: ";
			cout<<endl;
		}
		
		void show_details(){
			cout<<"Student Details: "<<endl;
			cout<<name<<" "<<roll_no<<" "<<percent<<endl;
		}
		
		float get_attendance(){
			return percent;
		}
		
		~student(){
			cout<<"Objects destroyed sucessfully!"<<endl;
	    }
};

int main(){
	int i, j, n;
	cout<<"Enter the Number of Students: ";
	cin>>n;
	student s[n];
	for(i=0; i<n; i++){
		s[i].get_details();
	}
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if (s[j].get_attendance()<s[j+1].get_attendance()){
				student temp;
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	for(i=0; i<3; i++){
		s[i].show_details();
	}
	return 0;
}
