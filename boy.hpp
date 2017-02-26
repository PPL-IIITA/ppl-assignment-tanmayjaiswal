#ifndef BOY_HPP
#define BOY_HPP
/**
* class BOY
* containing attributes of the boy
*/
using namespace std;
class boy 	/*! \brief Class boy
		*/
{
	public:
		int name;		//!< Name of the boy (taken as Integer)
		int attract;		//!< Attraction level of the boy (out of 10)
		int budget;		//!< Budget of the boy (Max - 10000)
		int intell;		//!< Intelligence level of the boy (out of 10)
 		int status;		//!< Status of the boy ( Single=0 or Committed=1 ) 
		int req;		//!< Requirement level of the BOY (out of 10)
		int type;		//!< Type of BOY (1) The MISER (2) The GENEROUS (3) The GEEK
};
#endif
