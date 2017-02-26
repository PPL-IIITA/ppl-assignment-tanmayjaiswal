#ifndef COUPLES_HPP
#define COUPLES_HPP
/**
* class COUPLES
* containing attributes of the couple
*/
using namespace std;	
class couples	/*! \brief Class couples
		*/
{
	public:
		int gf;			//!< Type of GIRL (1) The CHOOSY (2) The NORMAL (3) The DESPERATE
		int bf;			//!< Name of the boy (taken as Integer)
		int typeg;		//!< Type of GIRL (1) The CHOOSY (2) The NORMAL (3) The DESPERATE
		int typeb;		//!< Type of BOY (1) The MISER (2) The GENEROUS (3) The GEEK 
		int maintain;		//!< Maintainence Cost of the GIRL (Max - 10000)
		int budget;		//!< Budget of the BOY (Max - 10000)
		int attractg;		//!< Attraction level of the GIRL (out of 10)
		int attractb;		//!< Attraction level of the BOY (out of 10)
		int intellg;		//!< Intelligence level of the GIRL (out of 10)
		int intellb; 		//!< Intelligence level of the BOY (out of 10)
		int sum;		//!< stores the sum of cost of the gifts
		int value;		//!< stores the total value of the gifts
		double hap;		//!< stores the happiness of the couple
		double com;		//!< stores the compatibility of the couple
		int crr[50];		//!< stores the cost of each gift
		int trr[50];		//!< stores the type of each gift
		int gt[50];		//!< stores the gift number
		int gifts;		//!< stores total number of gifts
};
#endif
