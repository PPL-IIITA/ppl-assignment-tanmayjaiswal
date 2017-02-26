#ifndef INPUT_HPP
#define INPUT_HPP
#include <iostream>
#include <stdio.h>
#include "girlboy.hpp"
#include "calculate.hpp"
using namespace std;
class input	/*! \brief Class input
*
* It is a class that contains a method build1().
*/
{
	public :
	int nb;		//!< used to store number of boys.
	int ng;		//!< used to store number of girls.
	boy b[100];	//!< An object array of class boy to store the attributes of all the boys.
	girl g[100];	//!< An object array of class girl to store the attributes of all the girls.
	int i;		//!< used as a counter
	void build1();		/**It is a method which reads the values from a file "input.txt" and stores the attributes in the girl and boy 					array.*/
};
#endif

