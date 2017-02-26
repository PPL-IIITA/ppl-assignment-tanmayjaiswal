#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "giftgenerate.hpp"
#include <time.h>
#include "inputcouples.hpp"
using namespace std;
	void giftgenerate::build2() /**It is a method which generates the type, cost and value of a gift and stores it in a file "gift.txt" */
	{	
		int i,j,temp,temp1;
		srand(time(NULL));	
		freopen("gift.txt","w",stdout);
		temp = rand() % 50;
		cout<< temp+1 << endl;
		for (i=0;i<temp+1;i++)
		{	
			cout<< 1 <<" ";
			temp1 = rand()%2500;
			cout<< temp1<<" ";
			temp1 = rand()%10;
			cout<< temp1<<endl;
		}
		temp = rand() % 50;
		cout<< temp+1 << endl;
		for (i=0;i<temp+1;i++)
		{
			cout<< 2 <<" ";
			temp1 = rand()%2500;
			cout<< temp1<<" ";
			temp1 = rand()%10;
			cout<< temp1<<endl;
		}
		temp = rand() % 50;
		cout<< temp+1 << endl;
		for (i=0;i<temp+1;i++)
		{
			cout<< 3 <<" ";			
			temp1 = rand()%2500;
			cout<< temp1<<" ";
			temp1 = rand()%10;
			cout<< temp1<<endl;
		}
		fclose(stdout);
	op.build3();
	}
				
