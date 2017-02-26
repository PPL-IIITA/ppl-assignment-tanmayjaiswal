#ifndef CALCULATE1_HPP
#define CALCULATE1_HPP
#include "gifts.hpp"
#include "happiness.hpp"
using namespace std;
class calculate1	/*! \brief Class calculate1
*
* It is a class that contains a method calc1() to allocate gifts.
*/
{
	public:
	int i; 		//!< used as a counter.
	int j;		//!< used as a counter.
	int x;		//!< used as a counter.
	int total;	//!< stores the total number of gifts.
	happiness happy; 	//!< an object of class happiness to call the build5() function.
	gifts temp;		//!< an object of class gifts to store the particular index of g[] array.
	void calc1( couples couple[] , gifts g[] , int e , int l , int u );	/**It is a method which allocates the giftd to the girl on the 											basis of boy's budget and type of girl. It stores the total 											sum, total value, number and type of gifts.   */
	
};
#endif
