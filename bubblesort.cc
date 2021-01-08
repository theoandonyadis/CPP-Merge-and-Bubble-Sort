//Theo Andonyadis
//ECE 2620 Section 001
//Lab 5a
#include <iostream>
#include <cmath>
#include <limits>
#include <fstream>
#include "myheaders.h"
using namespace std;
int n;
void bubblesort(long data[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;--j)
		{
			if(data[j] < data[j-1])
			{
				swap(data[j],data[j-1]);
			}
		}
	}
}