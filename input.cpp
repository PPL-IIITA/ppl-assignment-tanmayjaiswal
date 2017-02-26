#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include "input.hpp"
#include "girlboy.hpp"
#include "calculate.hpp"
using namespace std;

	void input::build1()		/**It is a method which reads the values from a file "input.txt" and stores the attributes in the girl 						and boy array.*/
	{	
		girlboy gb;
		gb.build();
		freopen("input.txt","r",stdin);
		cin >> nb ;
		for (i=0;i<nb;i++)
		{
			cin>>b[i].name;
			cin>>b[i].attract;
			cin>>b[i].budget;
			cin>>b[i].intell;
			cin>>b[i].status;
			cin>>b[i].req;
			cin>>b[i].type;	
		}
		cin >> ng;
		for (i=0;i<ng;i++)
		{
			cin>>g[i].name;
			cin>>g[i].attract;
			cin>>g[i].intell;
			cin>>g[i].maintain;
			cin>>g[i].status;
			cin>>g[i].type;
			cin>>g[i].bf;	
		}
		calculate ob1;
		ob1.calc(b,g,nb,ng);
	}
