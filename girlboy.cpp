#include "girlboy.hpp"
#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
	void girlboy::build ()	/**It is a method which generates a file with random attributes of the boys and girls and stores in a text file 
			   "input.txt" */
	{	
		srand(time(NULL));
		freopen("input.txt","w",stdout);
		cout<<25<<endl;
		for ( i=0 ; i<25 ; i++)
		{
			cout<<i+1<<" ";			
			temp1 = rand() % 10;
			cout<<temp1+1<<" ";
			temp1 = rand() % 10000;
			cout<<temp1<<" ";
			temp1 = rand() % 10;
			cout<<temp1+1<<" ";
			cout<<0<<" ";
			temp1 = rand() % 10;
			cout<<temp1+1<<" ";
			temp1 = rand() % 3;
			cout<<temp1+1<<endl;
		}
		cout<<15<<endl;
		for ( i=0 ; i<15 ; i++)
		{
			cout<<i+1<<" ";
			temp1 = rand() % 10;
			cout<<temp1+1<<" ";
			temp1 = rand() % 10;
			cout<<temp1+1<<" ";
			temp1 = rand() % 10000;
			cout<<temp1+1<<" ";
			cout<<0<<" ";
			temp1 = rand() % 3;
			cout<<temp1+1<<" ";
			cout<<-1<<endl;	
		}
		fclose(stdout);
	}
