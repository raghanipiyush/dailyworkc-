//static member
#include<iostream>
using namespace std;

class student{
	private:
	  int rollno;
	  char name[50];
	  char course[50];
	  
	public:
	  static char branch[50];
	  void setdata(int r, char n[], char c[]){
	  	 rollno = r;
	  	 strcpy(name, n);
	  	 strcpy(course, c);
	  	 
	  } 
	  
	  void getdata(){
	  	cout<<"roll no: "<<this->rollno<<endl
	  	<<"name: "<<this->name<<endl
	  	<<"course: "<<this->course<<endl;
	  	
	  } 
};

char student :: branch[] = "mota varachha";

int main()
{

      cout<<"your branch is: "<<student :: branch<<endl;
      student s1, s2;
      
      s1.setdata(101 ,"het", "python");
      s2.setdata(102 ,"om", "java");
      s1.getdata();
      s2.getdata();
      
      strcpy(student::branch, "sarthana");
      cout<<"your branch is: "<<student :: branch<<endl;
}
/*output
your branch is: mota varachha
roll no: 101
name: het
course: python
roll no: 102
name: om
course: java
your branch is: sarthana

*/

