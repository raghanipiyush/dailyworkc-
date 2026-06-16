
//multiple inheritance
#include<iostream>
using namespace std;

class parent1{
	public:
		int a = 10;
		void sayHello(){
		cout<<"good morning..."<<endl;
		}
};
class parent2{
	public:
		int b = 20;
};

class ABC : public parent1, public parent2{
	public:
		void addition(){
			cout<<"addition: "<<a + b <<endl;
		}
};

int main()
{
	ABC x;
	x.addition();
}
/*
output
addition: 30
*/