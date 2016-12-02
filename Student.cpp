/*
 * Name: Zixin Cheng
 * Course: SENG1120
 * Student number: 3218124
*/

#include "Student.h"

namespace czx_project
{
	Student::Student()
	{
		// Accept empty value but do nothing
	}
	
	Student::Student(string initialName, float initialGrade)
	{
		name = initialName;    // Set the initial value of name
		grade = initialGrade;  // Set the initial value of grade
	}
	
	void Student::setName(const string newName)
	{
		name = newName;  // Set the new value of name
	}
	
	void Student::setGrade(const float newGrade)
	{
		grade = newGrade;  // Set the new value of grade
	}
	
	string Student::getName() const
	{
		return name;  // Return the value of name
	}
	
	float Student::getGrade() const
	{
		return grade;  // Return the value of grade
	}
	
	ostream& operator << (ostream& out, const Student& student)
	{
		// Define the cout output
		out << "(" << student.getName() << ", " << student.getGrade() << ")";
		return out;
	}
	
	bool operator == (const Student& s1, const Student& s2)
	{
		// Define how equals operate
		return (s1.getGrade() == s2.getGrade());
	}
	
	bool operator < (const Student& s1, const Student& s2)
	{
		// Define how smaller than operate
		return (s1.getGrade() < s2.getGrade());
	}
	
	bool operator > (const Student& s1, const Student& s2)
	{
		// Define how lagrer than operate
		return (s1.getGrade() > s2.getGrade());
	}
}