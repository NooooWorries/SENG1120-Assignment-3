/*
 * Name: Zixin Cheng
 * Course: SENG1120
 * Student number: 3218124
*/

#ifndef CZX_NODE
#define CZX_NODE

#include <cstdlib>
using namespace std;

namespace czx_project
{
	template <typename Item>
	class Node
	{
		public:
			// Constructors
			Node();
			Node(Item* initialData = Item(), Node<Item>* initialParent = NULL, Node<Item>* initialLeft = NULL, Node<Item>* initialRight = NULL);
			
			// Destructor
			~Node();
			
			// Mutators
			
			/*
			 * Mutator:       Set data
			 * Precondition:  A valid value had been provided
			 * Postcondition: Data get a value
			 */
			void setData(Item* newData);
			
			/*
			 * Mutator:       Set left
			 * Precondition:  A valid left Node had been provided
			 * Postcondition: Left get a Node
			 */
			void setLeft(Node<Item>* newLeft);
			
			/*
			 * Mutator:       Set right
			 * Precondition:  A valid right Node had been provided
			 * Postcondition: Right get a Node
			 */
			void setRight(Node<Item>* newRight);
			
			/*
			 * Mutator:       Set parent
			 * Precondition:  A valid parent Node had been provided
			 * Postcondition: Parent get a Node
			 */
			void setParent(Node<Item>* newParent);
			
			// Accessors
			/*
			 * Accessors:     Get data
			 * Precondition:  Data has a valid value
			 * Postcondition: Returned the value of variable "data"
			 */
			Item* getData() const;
			
			/*
			 * Accessors:     Get right (const)
			 * Precondition:  Right has a valid value
			 * Postcondition: Returned the value of variable "right"
			 */
			Node<Item>* getRight() const;
			
			/*
			 * Accessors:     Get right
			 * Precondition:  Right has a valid value
			 * Postcondition: Returned the value of variable "right"
			 */
			Node<Item>* getRight();
			
			/*
			 * Accessors:     Get left (const)
			 * Precondition:  Left has a valid value
			 * Postcondition: Returned the value of variable "left"
			 */
			Node<Item>* getLeft() const;
			
			/*
			 * Accessors:     Get left
			 * Precondition:  Left has a valid value
			 * Postcondition: Returned the value of variable "left"
			 */
			Node<Item>* getLeft();
			
			/*
			 * Accessors:     Get parent (const)
			 * Precondition:  Parent has a valid value
			 * Postcondition: Returned the value of variable "parent"
			 */
			Node<Item>* getParent() const;
			
			/*
			 * Accessors:     Get parent
			 * Precondition:  Parent has a valid value
			 * Postcondition: Returned the value of variable "parent"
			 */
			Node<Item>* getParent();
			
			
		private:
			Item* data;			// Variable to store the data
			Node<Item>* left;   // Variable to store the left node pointer
			Node<Item>* right;  // Variable to store the right node pointer
			Node<Item>* parent; // Variable to store the parent node pointer
	};
}
#include "Node.template"
#endif