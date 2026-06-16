
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

class XYZ : public child, public ABC{
};

int main()
{
     XYZ x;
     x.addition();
     x.square();
     x.child::sayHello();
}
/*
output
addition: 65
square is: 100
good morning...

*/