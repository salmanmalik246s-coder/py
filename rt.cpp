#include<iostream>
using namespace std;

class person{
	private:
	int age;
	float cgpa;
	string name;
	public:
		person(string n,int a,float cg){
			name=n;
			age=a;
			cgpa=cg;
		}
	void getterresult(){
		cout<<"YOUR NAME IS "<<name<<endl;
		 cout<<"YOUR AGE IS "<<age<<endl;
		cout<<"YOUR CGPA IS "<<cgpa<<endl;
		
	
}
	};
	class student:public person{
		private:
			int id;
		public:
			student(string n, int a , float cg,int ides):person( n,a ,cg){
				id = ides;
				
			}
			void displayresult(){
			
		getterresult();
		cout<<" YOUR ID IS  "<<id<<endl;
	
			}
			
		
	};
	
	int main(){
		student s1("MALIK",20,3.2,12);
		s1.displayresult();
		
		return 0;
	}
