#include <iostream> // for cout and endl
#include <cstdlib>  // for srand, rand and atoi
#include <ctime>    // for time
#include "Tree.h"
#include "Student.h"
using namespace std;
using namespace czx_project;

/**
 * This is an example program that shows how to seed a random number generator
 * using a number provided from the command line and then access those random numbers.
 *
 * It will use a number provided on the command line (e.g. test_random.exe 12321) if one exists
 * otherwise it will seed the random nmber using the current time in seconds
 *
 * @param argc the number of arguments provided to the main function (this includes the program name itself)
 * @param argv an array of strings containing each of the arguments
 *
 * @author Trent Houliston
 */
 
int main(int argc, char *argv[]) 
{
	// Make sure we have at least two arguments
    // The first argument will be the program name e.g. myCode.exe
    // The second argument will be the seed for the random number generator
    if (argc >= 2)
    {
		// Step 1
        // Use atoi (ascii to integer) to convert our argument to a number
        // note that if the user enters an invalid number this will be 0
        int seed = atoi(argv[1]);

        // Use that number to seed the random number generator
        srand(seed);
    }
    // If we don't have at least two arguments seed the random number generator using the current time
    else
    {
        // Get the current time as an integer
        int seed = time(NULL);

        // Use that number to seed the random number generator
        srand(seed);
    }
	
	// Demo program
	
	Tree<Student> *tree = new Tree<Student>();
	
	// Step 2
	string name[] = {"Adam", "Adrian", "Alexander", "Andrew", "Ashley",
					 "Benjamin", "Bradley", "Brobie", "Callan", "Callum",
					 "Cameron", "Chris", "Damian", "David", "Dillon",
					 "Dylan", "Ethan", "Frederik", "Hong", "Hugh",
					 "Jackson", "Jacob", "James", "Jared", "Jodi",
					 "Jonathan", "Joshua", "Julius", "Kelly", "Kenias",
					 "KiSoon", "Lance", "Liam", "Madison", "Magdalena",
					 "Magdalena", "Mark", "Melanie", "Min", "Mitchell",
					 "Nicholas", "Ryan", "Sang", "Shane", "Simon",
					 "Thomas", "Timothy", "Trent", "Troy", "Zaanif"};
	int size = sizeof(name)/sizeof(string);
	
	// Shuffle name list
	int shuffleRandom = 0;
	for (int i = size - 1; i >= 1; i --)
	{
		shuffleRandom = rand() % i;
		string temp = name[shuffleRandom];
		name[shuffleRandom] = name[i];
		name[i] = temp;
	}
	
	// Add data into tree
	for (int i = 0; i < size; i ++)
	{
		float random =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/100.0));
		tree -> insert (new Student (name[i], random));
	}
	
	// Step 3
	tree -> printInOrder();
	
	// Step 4
	cout << endl << "HDs: " <<tree -> getNumOfHD() << endl;
	
	// Step 5
	cout << "Average: " <<tree -> getAverage() << endl;
	
	// Step 6
    tree -> deleteAllFailStudents();
	
	// Step 7
	cout << endl;
	tree -> printInOrder();
	cout << endl << "HDs: " <<tree -> getNumOfHD() << endl;
	cout << "Average: " <<tree -> getAverage() << endl;
	
	// Delete tree, avoid memory leak
	delete tree;
	return 0;
}
