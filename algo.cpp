#include "input.hpp"
#include "giftgenerate.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{		
	int i;
	input o;
	o.build1();
	freopen("output.txt","w",stdout);
	for (i=0;i<15;i++)
		cout<<o.g[i].name<<" has_bf "<<o.g[i].bf<<" "<<o.g[i].maintain<<" "<<o.g[i].attract<<" "<<o.g[i].intell<<" "<<o.g[i].type<<   			" "<<o.b[o.g[i].bf-1].budget<<" "<<o.b[o.g[i].bf-1].attract<<" "<<o.b[o.g[i].bf-1].intell<<" "<<o.b[o.g[i].bf-1].type<<endl;
	fclose(stdout);
	giftgenerate object2;
	object2.build2();
	return 0;
}
