#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	int age;
	float gpa;
	
	cout <<"enter name:";
	cin >> name;
	
	cout <<"enter age:";
	cin >> age;
	
	cout <<"enter gpa:";
	cin >> gpa;
	
	   cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}
