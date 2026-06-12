//constructor
#include<iostream>
using namespace std;

class student{
	private:
		int rollno;
		char name[50];
		char course[50];
		
		public:
			student(){
				cout<<"default constructor is called..."<<endl;
				
			}
			student(int r, char n[], char c[]){
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

int main()
{
	student s1(102, "het", "sql"), s2(101, "smit", "java");
	
	s1.getdata();
	s2.getdata();
}
/*output
roll no: 102
name: het
course: sql
roll no: 101
name: smit
course: java
*/
