#include<iostream>
using namespace std;

class shape{
	private:
		int a = 5 , b = 10;
	protected:
	    int c = 20;
	public: 
	  void area(){
	  	cout<<"shape area function called"<<endl;
	  }		
};

class square : private shape{
	public:
		void data(){
			area();
			cout<<"value of c is: "<<c<<endl;
		}
};
/*outputshape area function called
value of c is: 20
*/

int main()
{
	square s;
	s.data();
}