#include <bits/stdc++.h>
#include "gifts.hpp"
#include "happiness.hpp"
#include "calculate1.hpp" 
using namespace std;
	void calculate1::calc1( couples couple[] , gifts g[] , int e , int l , int u )	/**It is a method which allocates the gifts to the girl on the basis of boy's budget and type of girl. It stores the total	sum, total value, number and type of gifts.   */
	{	
		total = e + l + u;
		for (i=0;i< total ;i++)						/**Sorts the attributes of gifts on the basis of it's cost. */
		{
			for ( j=0; j< total ;j++)
			{
				if (g[j].cost < g[j+1].cost )
				{
					temp = g[j];
					g[j]= g[j+1];
					g[j+1] = temp;
				}
			}
		}
		for ( i=0 ; i < 15 ; i++ )
		{
			j=0;			
			couple[i].sum=0;
			couple[i].gifts = 0;
			if ( couple[i].typeb == 1 )
			{
				while ( couple[i].sum < (couple[i].maintain + (couple[i].budget-couple[i].maintain)/5))
				{
					couple[i].sum = couple[i].sum + g[total-j].cost;
					couple[i].value = couple[i].value + g[total-j].value;
					couple[i].trr[couple[i].gifts] = g[total-j].type;					
					if ( couple[i].typeg == 1 && g[total-j].type == 2 )
						couple[i].crr[couple[i].gifts] = 2*g[total-j].value;
					else				
						couple[i].crr[couple[i].gifts] = g[total-j].value;
					couple[i].gifts++;
					j++; 
				}					
			}
			if ( couple[i].typeb == 2 )
			{
				while ( couple[i].sum < couple[i].budget )
				{
					couple[i].sum = couple[i].sum + g[j].cost;
					couple[i].value = couple[i].value + g[j].value;
					couple[i].trr[couple[i].gifts] = g[j].type;
					if ( couple[i].typeg == 1 && g[j].type == 2 )
						couple[i].crr[couple[i].gifts] = 2*g[j].value;
					else				
						couple[i].crr[couple[i].gifts] = g[j].value;
					couple[i].gifts++;
					j++; 
				}
			}
			if ( couple[i].typeb == 3 )
			{
				while ( couple[i].sum < couple[i].maintain )
				{
					couple[i].sum = couple[i].sum + g[total-j].cost;
					couple[i].value = couple[i].value + g[total-j].value;
					couple[i].trr[couple[i].gifts] = g[total-j].type;					
					if ( couple[i].typeg == 1 && g[total-j].type == 2 )
						couple[i].crr[couple[i].gifts] = 2*g[total-j].value;
					else				
						couple[i].crr[couple[i].gifts] = g[total-j].value;
					couple[i].gifts++;
					j++; 
				}	
					if ( g[j].cost < (couple[i].budget - couple[i].sum ))					
					{
						couple[i].sum = couple[i].sum + g[j].cost;
						couple[i].value = couple[i].value + g[total-j].value;
						couple[i].trr[couple[i].gifts] = g[total-j].type;
						couple[i].gifts++;
					}
			}
		}
		happy.build5(couple);
	}
