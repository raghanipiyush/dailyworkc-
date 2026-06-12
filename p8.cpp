//copy constructor & reference variable
#include<iostream>
using namespace std;

class Car{
	private:
		int a, b;
		
		public:
			Car(){
				cout<<"constructor is called...."<<endl;
				}
			Car(int n, int m){
				a = m, b = n;
				}
				void addition(){
					cout<<"addition is: "<<a + b<<endl;
				}
			Car(Car &t){
				a = t.a;
				b = t.b;
			}		
};

int main()
{
	Car c1(11,15), c2(22, 33);
	
	c1.addition();
	c2.addition();
	
	Car c3 = c2;
	c3.addition();
}
/*output
addition is: 26
addition is: 55
addition is: 55
*/