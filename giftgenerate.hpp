#ifndef GIFTGENERATE_HPP
#define GIFTGENERATE_HPP
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "inputcouples.hpp"
using namespace std;
class giftgenerate	/*! \brief Class giftgenerate
*
* It is a class that contains a method build2().
*/ 
{
	public :
	inputcouples op; 	//!< An object of class inputcouples to call the build3() function.
	void build2();		/**It is a method which generates the type, cost and value of a gift and stores it in a file "gift.txt" */
	
};
#endif				
