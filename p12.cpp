
//multiple inheritance
#include<iostream>
using namespace std;

class parent{
	public:
		int a = 10;
		void sayHello(){
		cout<<"good morning..."<<endl;
		}
};
class child : public parent {
	public:
		void square(){
			cout<<"square is: "<< a * a <<endl;
			
		}
};

class ABC : public parent{
	int b = 55;
	public:
		void addition(){
			cout<<"addition: "<<a + b <<endl;
		}
};

int main()
{
	ABC x;
	x.addition();
	
	child ch;
	ch.square();
}
/*
output
addition: 65
square is: 100
*/