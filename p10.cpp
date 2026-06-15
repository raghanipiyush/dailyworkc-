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

class ABC : public child{
	
};

int main()
{
	ABC x;
	cout<<x.a<<endl;
	x.addition();
	
}
/*output
10
addition is: 30

*/