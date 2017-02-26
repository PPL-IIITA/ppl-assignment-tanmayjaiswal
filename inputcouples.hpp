#ifndef INPUTCOUPLES_HPP
#define INPUTCOUPLES_HPP
#include "calculate1.hpp"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class inputcouples /*! \brief Class inputcouples
*
* It is a class that contains a method build3().
*/
{
	public:
		char str[15]; //!< used to store the strings from a file.
		int i; //!< used as a counter
		int p;	//!< used as a counter 
		int j;	//!< used as a counter
		couples couple[20]; //!< An object array of class couples to store the attributes of all the couples.
		gifts g[200]; 	//!< An object array of class gifts to store the attributes of all the gifts.
		calculate1 object;	//!< Object to call the calc1() function from class calculate1.
		int essential,luxury,utility;		
		void build3(); /**It is a method which reads the values from a file and	 stores it in the couples type array. It also reads 					the type, cost and value of a gift from a file and stores it in the gifts array. */
		
};
#endif
