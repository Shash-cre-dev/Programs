#include <iostream>
#include <string>
using namespace std;

class student{
	string name;
	int roll_no;
	float percent;

	public:
		student(){
		name ="NULL";
		roll_no=0;
		percent=0.0;
		}
	 
		void get_details(){
			cin>>name;
			cin>>roll_no;
			cin>>percent;
		}
		
		void attendence(){
			int att[10], i;
			int(i=0; i<3; i++){
				cin<<att.[i];
			}
			for()
		}
		
				
		void show_details(){
			cout<<name<<endl;
			cout<<roll_no<<endl;
			cout<<percent<<endl;
		}
};

int main(){
	student obj[3];
	cout<<"STUDENT DETAILS";
	int i=0;
	for(i=0; i<=3; i++){
		obj[i].get_details();
	}
	obj[3].attendence;
	obj[3].show_details;
	return 0;	
}

