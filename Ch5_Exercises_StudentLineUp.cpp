// Ch5_Exercises_StudentLineUp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chapter 5 Exercise 14
// This program reads the student names from the file LineUp.txt., then outputs the first and last in line.
//
//Programmer: Aslihan Aria Celik

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string firstInLine;
	string currentName;
	string lastInLine;

	ifstream infile("LineUp.txt");  // Open the file for reading

	// check if the file opened successfully to avoid runtime errors.
	if (!infile) {
		cerr << "Error opening file" << endl;
		return 1; // Exit if the file cannot be opened
	}
	bool firstEntry = true;

	//as it can read
	while (infile >> currentName) {
		//check for the first entry
		if (firstEntry) { 
			firstInLine = currentName; 
			lastInLine = currentName; 
			firstEntry = false; }
		//if not first entry
		else { 
			//compare and update first in line
			if (currentName < firstInLine) { 
				firstInLine = currentName; 
			}
			//compare and update last in line
			if (currentName > lastInLine) { 
				lastInLine = currentName; 
			}
		}
		// Ignore any extra newline or spaces after the name 
		infile.ignore(); 
	}

	// Close the file after reading
	infile.close();

	//Output the result
	cout << "The student at the front of the line is: " << firstInLine << endl;
	cout << "The student at the end of the line is: " << lastInLine << endl;

	return 0;
  
}

