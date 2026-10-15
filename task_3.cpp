#include <iostream>
#include <string>
using namespace std;
int main(){
	string name;
	string department;
	int age;
	float gpa;
	cout <<"enter name:";
	cin>> name;
	
	cout <<"enter department:";
	cin >> department;
	
	cout <<"enter age:";
	cin >> age;
	
	cout <<"enter gpa:";
	cin >> gpa;
	 cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}
