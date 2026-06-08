#include<iostream>
using namespace std;

class animal{
	private:
	int a, b, c;
	
	public:
		int sayHelloworld(){
				cout<<"Hello world:" <<endl;
		}
		
		
		
		
};
int main()
{
	animal x, y;
	
	x.sayHelloworld();
	y.sayHelloworld();
}