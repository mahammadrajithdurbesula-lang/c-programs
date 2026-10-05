#include<iostream>
using namespace std;

class Student{
	int id;

  public:
        Student(int i){
        	id = i;
        	
		}	
		
		student(const Student &s){
			id = s.id;
		}
		
		void display(){
			cout << "student ID:" <<id<<endl;
			
		}
};

int main(){
	Student s1(101);
	Student s2 = s1;
	
	cout << "Original Objects: " << endl;
	s1.display();
	return 0;
}
