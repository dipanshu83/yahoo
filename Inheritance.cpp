#include<iostream>
using namespace std;
class Apple{
	public:
		void display(){
			cout<<"Display fuction of Apple Class is called."<<endl;
		}
		Apple(){
			cout<<"Constructor of Apple Class(Base Class 1) is called."<<endl;
		}
};
class Mango{
	public:
		Mango(){
			cout<<"Constructor of Mango Class(Base Class 2) is called."<<endl;
		}
};
class Fruits: public Apple,public Mango{
	public:
		Fruits(){
			cout<<"Constructor os Fruits Class(child Class) is called."<<endl;
		}
};
main(){
	cout<<"Name = Bhuwan Tekriwal\nRoll no. = 19001011017"<<endl;
	Fruits fr;
	fr.display();
}
