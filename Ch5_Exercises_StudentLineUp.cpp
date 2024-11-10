// Ch5_Exercises_StudentLineUp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chapter 5 Exercise 14
// This program prompts the user to enter the number of students in the class, then loops to read that many names.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numberOfStudents;
	string firstInLine;
	string currentName;
	string lastInLine;

	//User prompted to enter the number of students in the class
	//Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
	do {
		cout << "Please enter the number of the students in the class." << endl;
		cin >> numberOfStudents;

		if (numberOfStudents < 1 || numberOfStudents>25) {
			cout << "The number of students can not be less than 1 and can not be greater than 25." << endl;
		}
	} while (numberOfStudents < 1 || numberOfStudents>25);

	cout << "Please enter the names of the students with a space in between the names , in example: Sally Leo Theodore" << endl;

	// Initialize firstInLine and lastInLine with the first student's name 
	cin >> firstInLine;
	lastInLine = firstInLine;

	for (int i = 1; i < numberOfStudents; i++) {
		cin >> currentName;
		if (currentName < firstInLine) {
			firstInLine = currentName;
		}
		if (currentName > lastInLine) {
			lastInLine = currentName;
		}
	}

	cout << "The student at the front of the line is: " << firstInLine << endl;
	cout << "The student at the end of the line is: " << lastInLine << endl;

	return 0;
  
}

