#include "girl.hpp"
#include <bits/stdc++.h>
#include "boy.hpp"
#include "calculate.hpp"
using namespace std;
	void calculate::calc ( boy b1[], girl g1[],int nb ,int ng )	/**It is a method which allocates a boyfriend to the girls on the basis of 									   attraction level, his budget or intelligence level. */
	{
		max=0;
		flag=1;
		for (i=0;i<ng;i++)
		{
			if ( g1[i].status == 0)
			{
				for (j=0 ; j<nb ; j++)
				{
					if ( b1[j].status == 0 && b1[j].attract > max)
						{	
						max = b1[j].attract;
						index = j;
						}
				}
					if ( b1[index].req < g1[i].attract )
					{	
						g1[i].bf = index + 1 ;
						b1[index].status=1;
					}
					else 
						flag = 1;	
				max = 0;
				if ( flag == 1) 
				for (j=0 ; j<nb ; j++)
				{
					if ( b1[j].status == 0 && b1[j].budget > max)
						{	
						max = b1[j].budget;
						index = j;
						}
				}
					if ( b1[index].budget < g1[i].maintain )
					{
						g1[i].bf = index + 1 ;
						b1[index].status=1;		
					}
					else 
						flag = 2;
				max=0;
				if ( flag == 2) 
				for (j=0 ; j<nb ; j++)
				{
					if ( b1[j].status == 0 && b1[j].intell > max )
						{	
						max = b1[j].intell;
						index = j;
						}
				}
						g1[i].bf = index + 1 ;
						b1[index].status=1;	
			}
		}
	}
