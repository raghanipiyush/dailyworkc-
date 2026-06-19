#include<iostream>
using namespace std;

class parent{
	public:
		int a = 10;
		void sayHello(){
			cout<<"Good Morning..."<<endl;
		}
};


int main()
{
	parent p, *q;
	
	q = &p;
	cout<<"value of a is: "<<q->a<<endl;
	q->sayHello();
	
}
/*output
value of a is: 10
Good Morning...
*/