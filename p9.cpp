//inheritance
#include<iostream>
using namespace std;

class parent{
	public:
		int a = 10;
		void sayHello(){
			cout<<"good morning..."<<endl;
		}
};

class child : public parent{
	public:
		int b = 20;
		void addition(){
			cout<<"addition is: " << a + b<<endl;
		}
};
int main()
{
	child c1;
	cout<<c1.a<<endl;
	c1.sayHello();
	c1.addition();
}
/*output
10
good morning...
addition is: 30
*/