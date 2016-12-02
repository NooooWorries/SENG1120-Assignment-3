/*
 * Name: Zixin Cheng
 * Course: SENG1120
 * Student number: 3218124
*/

#ifndef CZX_TREE
#define CZX_TREE

#include "Node.h"
#include <cstdlib>
#include <iostream>
using namespace std;

namespace czx_project
{
	template <typename Item>
	class Tree
	{
		public:
			// Constructors
			Tree();
			Tree(Node<Item>* data);
				
			// Destructor
			~Tree();
			
			// Member function
			/*
			 * Member function: size
			 * Precondition:    None
			 * Postcondition:   Size of the tree returned back
			 */
			std::size_t size();
			
			/*
			 * Member function: insert
			 * Precondition:    A valid data had been provided
			 * Postcondition:   Data had been added into the binary search tree
			 */
			void insert(Item* data);
			
			/* Member function: printInOrder 
			 * Preconidtion:    At least one node exist in the binary search tree
			 * Postcondition:   The content of tree had been printed on the screen
			 */
			void printInOrder();
			
			/*
			 * Member function: search
			 * Precondition:    A valid data had been provided
			 * Postcondition:   Return the data if found 
			 */
			Item search (const Item target);
			
			/*
			 * Member function: getNumOfHD
			 * Precondition:    At least one node exist in the binary search tree
			 * Postcondition:   The number of HD student had been returned back
			 */
			int getNumOfHD();
			
			/*
			 * Member function: getAverage
			 * Precondition:    At least one node exist in the binary search tree
			 * Postcondition:   The average mark of all students had been returned back
			 */
			float getAverage();
			
			/*
			 * Mumber function: deleteAllFailStudents
			 * Precondition:    None
			 * Postcondition:   The students with marks lower than 50 had been removed from binary search tree
			 */
			void deleteAllFailStudents();
			
		private:
			// Member variables
			Node<Item>* rootNode;  // Root node of the tree
			size_t nodes;          // Number of trees
			
			// Private functions
			
			/* Private function: inOrder 
			 * Preconidtion:     At least one node exist in the binary search tree
			 * Postcondition:    The content of tree had been printed on the screen
			 */
			void inOrder(Node<Item>* node);
			
			/*
			 * Private function: compare
			 * Precondition:     Two items had been provided
			 * Postcondition:    The result of comparison had been returned
			 */
			int compare(const Item* a, const Item* b);
			
			/*
			 * Private function: search
			 * Precondition:     Root node and a valid data had been provided
			 * Postcondition:    Return the data if found 
			 */
			Item find(const Node<Item>* node, const Item target) const;
			
			/*
			 * Private function: calcNumOfHD
			 * Precondition:    At least one node exist in the binary search tree
			 * Postcondition:   The number of HD student had been returned back
			 */
			int calcNumOfHD(Node<Item>* node);
			
			/*
			 * Private function: calcTotal
			 * Precondition:     At least one node exist in the binary search tree 
			 * Postcondition:    The total number of marks had been returned back		 
			 */
			float calcTotal(Node<Item>* node);
			
			/*
			 * Private function: deleteFromTree
			 * Precondition:     None
			 * Postcondition:    The node had been already removed from binary search tree			 
			 */
			void deleteFromTree(Node<Item>* node);
			
			/*
			 * Private function: deleteFailStudents
			 * Precondition:     None
			 * Postcondition:    The students with marks lower than 50 had been removed from binary search tree
			 */
			void deleteFailStudents(Node<Item>* deleteStudent);	
	};
}
#include "Tree.template"
#endif