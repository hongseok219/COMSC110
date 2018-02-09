// Lab12
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode
#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

struct Student
{
	string name;
	string address;
	string city;
	string state;
	int zip;
	char gender;
	int studentId;
	double gpa;
};

Student getStudent(int i)
{
	cout << "Enter for Student " << i+1 << endl;
	Student result;
	cout << " name: ";
	cin >> result.name;
	cin.ignore(1000, 10);
	cout << " address: ";
	cin >> result.address;
	cin.ignore(1000, 10);
	cout << " city: ";
	cin >> result.city;
	cin.ignore(1000, 10);
	cout << " state: ";
	cin >> result.state;
	cin.ignore(1000, 10);
	cout << " zip: ";
	cin >> result.zip;
	cin.ignore(1000, 10);
	cout << " gender: ";
	cin >> result.gender;
	cin.ignore(1000, 10);
	cout << " student id: ";
	cin >> result.studentId;
	cin.ignore(1000, 10);
	cout << " gpa: ";
	cin >> result.gpa;
	cin.ignore(1000, 10);
	cout << endl;

	return result;
}

void outputStudent(int i, Student& s)
{
	cout << "Output for Student " << i+1 << endl;
	cout << " name: " << s.name << endl;
	cout << " address: " << s.address << endl;
	cout << " city: " << s.city << endl;
	cout << " state: " << s.state << endl;
	cout << " zip: " << s.zip << endl;
	cout << " gender: " << s.gender << endl;
	cout << " student id: " << s.studentId << endl;
	cout << " gpa: " << s.gpa << endl << endl;
}
 
int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
	cout << "Description: Write a program to manage the records of students" << endl << endl;

	Student a[3];

	for (int i = 0; i < 3; i++)
 		a[i] = getStudent(i);
	for (int i = 0; i < 3; i++)
		outputStudent(i, a[i]);

	cout << endl;
}