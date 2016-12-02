/*
 * Name: Zixin Cheng
 * Course: SENG1120
 * Student number: 3218124
*/

#ifndef CZX_STUDENT
#define CZX_STUDENT
#include <cstdlib>
#include <iostream>
using namespace std;

namespace czx_project
{
	class Student
	{
		public:			
			// Constructors
			Student();
			Student(string initialName, float initialGrade);
			
			// 
			
			/*
			 * Mutator:       Set name
			 * Precondition:  A valid name had been provided
			 * Postcondition: name get a value
			 */
			void setName(const string newName);
			
			/*
			 * Mutator:       Set grade
			 * Precondition:  A valid grade had been provided
			 * Postcondition: grade get a value
			 */
			void setGrade(const float newGrade);
			
			/*
			* Accessors:     Get name
			* Precondition:  name has a valid value
			* Postcondition: Returned the value of variable "name"
			*/
			string getName() const;
			
			/*
			* Accessors:     Get grade
			* Precondition:  grade has a valid value
			* Postcondition: Returned the value of variable "grade"
			*/
			float getGrade() const;
			
		private:
			string name;  // Stuent name
			float grade;  // Student grade
	};	
	ostream& operator << (ostream& out, const Student& student);  // Overriding cout operator
	bool operator == (const Student& s1, const Student& s2);      // Overriding equals operator
	bool operator < (const Student& s1, const Student& s2);       // Overriding smaller than operator
	bool operator > (const Student& s1, const Student& s2);       // Overriding larger than operator
}
#endif