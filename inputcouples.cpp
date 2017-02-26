#include "calculate1.hpp"
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "inputcouples.hpp"
using namespace std;		
		void inputcouples::build3() /**It is a method which reads the values from a file and stores it in the couples type array. It 							also reads the type, cost and value of a gift from a file and stores it in the gifts array. */
		{
			freopen("output.txt","r",stdin);		
			for (i=0;i<15;i++)
			{
				cin>> couple[i].gf;
				cin>> str ;
				cin>> couple[i].bf;
				cin>> couple[i].maintain;
				cin>> couple[i].attractg;
				cin>> couple[i].intellg;
				cin>> couple[i].typeg;
				cin>> couple[i].budget;
				cin>> couple[i].attractb;
				cin>> couple[i].intellb;
				cin>> couple[i].typeb;
			}
			fclose(stdin);
			freopen("gift.txt","r",stdin);
			cin>>essential;
			for (i=0;i<essential;i++)
			{
				cin>> g[i].type;	
				cin>> g[i].cost;
				cin>> g[i].value;
			}
			cin>>luxury;
			for (i=essential;i<essential+luxury;i++)
			{
				cin>> g[i].type;	
				cin>> g[i].cost;
				cin>> g[i].value;
			}
			cin>>utility;
			for (i=essential+luxury;i<utility+essential+luxury;i++)
			{
				cin>> g[i].type;	
				cin>> g[i].cost;
				cin>> g[i].value;			
			}
			fclose(stdin);		
			object.calc1( couple , g, essential , luxury , utility);		
		}
		 
