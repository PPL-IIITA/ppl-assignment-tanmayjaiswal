#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "happiness.hpp"
#include <bits/stdc++.h>
#include <time.h>
#include "sortt.hpp"
using namespace std;
	void happiness::build5( couples c[] )   /**It is a method which calculates the happiness and compatibility of a couple according to 							the type of boyfriend and girlfriend. */
	{
		for ( i=0 ; i< 15 ; i++ )
		{
			if ( c[i].typeb == 1 )
				if ( c[i].typeg == 1 )
				{	
					if ( c[i].sum > 0 )
						c[i].hap = log(c[i].sum)+  c[i].budget - c[i].sum;	
					else 
						c[i].hap = c[i].budget - c[i].sum;				
				}
				else if ( c[i].typeg == 2 )
				{
					c[i].hap = c[i].sum + c[i].budget - c[i].sum;					 
				}
				else if ( c[i].typeg == 3 )
				{
					c[i].hap = exp((c[i].sum)%10) + c[i].budget - c[i].sum;					 
				}	
			else if ( c[i].typeb == 2 )
				if ( c[i].typeg == 1 )
				{
					if ( c[i].sum > 0 )
						c[i].hap = 1+2*log(c[i].sum) ;	
					else 
						c[i].hap = 2*(c[i].budget - c[i].sum); 									
				}
				else if ( c[i].typeg == 2 )
				{
					c[i].hap = 2*c[i].sum;					
				}
				else if ( c[i].typeg == 3 )
				{	
					c[i].hap = 2*exp((c[i].sum)%10);			 
				}
			else 
				if ( c[i].typeg == 1 )
				{
					if ( c[i].sum > 0 )
						c[i].hap = log(c[i].sum)+ c[i].budget - c[i].sum;	
					else 
						c[i].hap = c[i].intellg;					 
				}
				else if ( c[i].typeg == 2 )
				{
					c[i].hap = c[i].sum + c[i].intellg;					 
				}
				else if ( c[i].typeg == 3 )
				{
					c[i].hap = 2*exp((c[i].sum)%10) + c[i].intellg;					
				}
			c[i].com = (c[i].budget - c[i].maintain) + abs(c[i].attractb - c[i].attractg) + abs(c[i].intellb - c[i].intellg); 
		}
		object1.sorting(c);
	}

