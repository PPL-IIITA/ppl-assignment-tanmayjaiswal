/**
* class GIRL
* containing attributes of the girl
*/
#ifndef GIRL_HPP
#define GIRL_HPP
using namespace std;
class girl 	/*! \brief Class girls
		*/
{
	public:
		int name;		//!< Name of the GIRL (taken as Integer)
		int attract;		//!< Attraction level of the GIRL (out of 10)
		int maintain;		//!< Maintainence Cost of the GIRL (Max - 10000)
		int intell;		//!< Intelligence level of the GIRL (out of 10)
 		int status;		//!< Status of the GIRL ( Single=0 or Committed=1 ) 
		int bf;			//!< Name of the BOY+3 (taken as Integer)
		int type;		//!< Type of GIRL (1) The CHOOSY (2) The NORMAL (3) The DESPERATE
};
#endif
