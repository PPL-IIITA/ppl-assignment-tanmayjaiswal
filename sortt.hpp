#ifndef SORTT_HPP
#define SORTT_HPP
#include"couples.hpp" 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class sortt	/*! \brief Class sortt*/
{
	
		public:
		int i ;	//!< used as a counter
		int j ; //!< used as a counter
		couples temp; //!< to store the temporary couples object  	
		void sorting( couples c[] );   /**It is a method which sorts the couples' array on the basis of happiness and compatibility. */
		
};
#endif

