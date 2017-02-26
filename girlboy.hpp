#ifndef GIRLBOY_HPP
#define GIRLBOY_HPP
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class girlboy	/*! \brief Class girlboy
*
* It is a class that contains a method build() which generates a file with random attributes of the boys and girls.
*/
{
	public :	
	int i;		//!< used as a counter.
	int temp1;	//!< used to store the random values.
	void build ();	/**It is a method which generates a file with random attributes of the boys and girls and stores in a text file 
			   "input.txt" */	
};
#endif
