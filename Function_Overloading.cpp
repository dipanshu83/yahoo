#include<iostream>
using namespace std;

class MyClass{
	public:
		void sum(int a,int b){
			cout<<"Sum of Ints = "<<a+b<<endl;
		}
		void sum(float a,float b){
			cout<<"Sum of Floats = "<<a+b<<endl;
		}
		void sum(double a,double b){
			cout<<"Sum of Doubles = "<<a+b<<endl;
		}
		void sum(int a){
			cout<<"Sum with itself = "<<a+a<<endl;
		}
};

main(){
	MyClass obj;
	cout<<"Name = Bhuwan Tekriwal\nRoll no. = 19001011017"<<endl;
	obj.sum(7,8);
	obj.sum(7.1f,8.4f);
	obj.sum(7.7,8.9);
	obj.sum(7);
}
