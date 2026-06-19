#include<iosteram>
using namespace std;

class shape{
	public:
		void area(){
			cout<<"area function called"<<endl;
		}
		void area(){
			cout<<"area of square is: "<< a * <<endl;
		}
		void area(){
			cout<<"area of rectangle is: "<< l * b<<endl;
		}
};
int main()
{
	shape s;
	s.area(10,20);
}