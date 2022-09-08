#include<iostream>
using namespace std;
class Cuboid{
	private:
		float length, breadth, height, volume;
	public: 
			void get(){
				cout<<"Cuboid Details";
				cin>>length;
				cin>>breadth;
				cin>>height;
			}
			
			void area();
			void TSA(){
					float TA = 2*(length*breadth + breadth*height* + height* length);
					cout<<"The Total Surface Area of Cuboid is: "<<TA<<endl;
			}
		
			friend void Volume(Cuboid &);			
};
inline void Cuboid::area(){
	float area = length*breadth;
	cout<<"The Area of the Cuboid is: "<<area<<endl;
}
void Volume(Cuboid &s){
	s.volume = s.length*s.breadth*s.height;
	cout<<"The Volume of Cuboid is: "<<s.volume<<endl;
	cout<<"The Liters of Liquid stored per meter cube: ";
	cout<<s.volume/100<<endl;
}

int main(){
	Cuboid s;
	s.get();
	s.area();
	s.TSA();
	Volume(s);
	return 0;
}
