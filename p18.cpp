#include<iostream>
using namespace std;

class student{

     private:
     	int a, b;
     	
     	public:
     		void setdata(int x, int y){
     			a = x, b = y;
			 }
			 
	  void getdata(){
	  	cout<<"addition of a and b is: "<<a+b<<endl;
	  }
	  
	  student operator+(student &n){
	  	student t;
	  	 t.a = a + n.a;
	  	 t.b = b + n.b;
	  	 return t;
	  		
	  }
	  
	  student operator++(){
	  	a++;
	  	b++;
	  }
};

int main()
{
    student s1, s2;
    
    s1.setdata(11, 12);
    s1.getdata();
    
    s2.setdata(21, 22);
    s2.getdata();
    
    student s3;
    s3 = s1 + s2;
    s3.getdata();
    
    ++s2;
    s2.getdata();
    
}
/*output
addition of a and b is: 23
addition of a and b is: 43
addition of a and b is: 66
addition of a and b is: 45

*/