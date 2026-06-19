#include<iostream>
using namespace std;

class Parent{
	public:
		Parent(int a){
			cout<<"Value of a is: "<<a<<endl;
		}
		
		void sayHello(){
			cout<<"Good Morning..."<<endl;
		}
};


int main()
{
	Parent *q;
	
	q = new Parent(100);
	q->sayHello();
	
	delete q;
	q->sayHello();
}
	
	