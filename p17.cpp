#include<iostream>
using namespace std ;

class shape{
	public:
		void area(){
			cout<<"shape area function called"<<endl;
		}
};
class sqaure : public shape{
	public:
		void area(){
				cout<<"sqaure area function called"<<endl;

		}
};

int main()
{

 sqaure s;
 s.area();
}