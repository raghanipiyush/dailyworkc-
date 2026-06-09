#include<iostream>
using namespace std;

class Car{
	private:
		int a, b;
		
		public:
			void setdata(int a, int b){
				this->a = a;
				this->b = b;
			}
			void getdata()
			{
				 cout<<"Value of a is: "<<this->a<<" & b is: "<<this->b<<endl;
			}
		void sayHello(){
			cout<<"Hello world "<<a<<endl;
			
		}	
};
 int main()
 {
 	Car c1, c2, c3;
 	
 	c1.setdata(101,202);
 	c1.getdata();
 	
 	c2.setdata(301,402);
 	c2.getdata();
 	
    c3.setdata(501,602);
 	c3.getdata();
 	
 }
 /*output
 Value of a is: 101 & b is: 202
Value of a is: 301 & b is: 402
Value of a is: 501 & b is: 602

 */
 	