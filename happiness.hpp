#ifndef HAPPINESS_HPP
#define HAPPINESS_HPP
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "sortt.hpp"
using namespace std;
class happiness		/*! \brief Class happiness
*
* It is a class that contains a method build5().
*/
{
	public :
	sortt object1; 	//!< Object of class sort to call the sorting() function.
	int i ;		//!< used as a counter
	int j ; 	//!< used as a counter
	void build5( couples c[] );   /**It is a method which calculates the happiness and compatibility of a couple according to the type 
					of boyfriend and girlfriend. */
	
};
#endif

