#ifndef CALCULATE_HPP
#define CALCULATE_HPP
#include "girl.hpp"
#include "boy.hpp"
using namespace std;
class calculate		/*! \brief Class inputcouples
*
* It is a class that contains a method calc() to allocate the boyfriend.
*/
{
	public:
	int max;	//!< used to calculate the maximum attraction level or intelligence level.
	int i;		//!< used as a counter.			
	int j;		//!< used as a counter.
	int index;	//!< used to store index of the boyfriend.
	int flag; 	//!< used as a flag variable.
	void calc ( boy b1[], girl g1[],int nb ,int ng  );	/**It is a method which allocates a boyfriend to the girls on the basis of 									   attraction level, his budget or intelligence level. */

};
#endif
