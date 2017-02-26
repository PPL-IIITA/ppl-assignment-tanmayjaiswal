#include <bits/stdc++.h>
#include "sortt.hpp"
#include"couples.hpp" 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std; 	
		void sortt::sorting( couples c[] )   /**It is a method which sorts the couples' array on the basis of happiness and compatibility. */
		{
			for ( i = 0 ; i < 15 ; i++ )
				for ( j = 0 ; j < 14; j++)
					if ( c[j].hap < c[j+1].hap )
					{
						temp = c[j];
						c[j] = c[j+1];	
						c[j+1] = temp;
					}
			freopen("output1.txt","w",stdout);
			for ( i = 0 ; i < 5 ; i++ )
				cout<< "girl " << c[i].gf << " and boy "<< c[i].bf << " with happiness = "<< c[i].hap <<endl;
			for ( i = 0 ; i < 15 ; i++ )
				for ( j = 0 ; j < 14; j++)
					if ( c[j].com < c[j+1].com )
					{
						temp = c[j];
						c[j] = c[j+1];	
						c[j+1] = temp;
					}
			for ( i = 0 ; i < 5 ; i++ )
				cout<< "girl " << c[i].gf << " and boy "<< c[i].bf << " with compatibility = "<< c[i].com <<endl;
		}

