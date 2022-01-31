//Theo Andonyadis
#include <iostream>
#include <cmath>
#include <limits>
#include <fstream>
#include "myheaders.h"
using namespace std;

void merge(long data[],int first,int mid,int last)
{
	int n1 = mid - first + 1; //declares sizes of subarrays
	int n2 = last - mid;
	long F[n1], L[n2]; 		//declare temporary arrays
	for(int i=0;i<n1;i++) 		//copy data to temporary arrays
		F[i] = data[first+i];
	for(int j=0;j<n2;j++)
		L[j] = data[mid+1+j];
	int i=0;
	int j=0;
	int k=first;
	while(i<n1 && j<n2) 		//merge subarrays back into data[]
	{
		if(F[i]<=L[j])
		{
			data[k] = F[i];
			i++;
		}
		else
		{
			data[k] = L[j];
			j++;
		}
		k++;
	}
	while(i<n1) 		//copy any remaining values of the temp arrays
	{
		data[k]=F[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		data[k]=L[j];
		j++;
		k++;
	}
}
void mergesort(long data[],int first,int last)
{
	if(first<last)
	{
		int mid=(first+last)/2;
		mergesort(data,first,mid);
		mergesort(data,mid+1,last);
		merge(data,first,mid,last);
	}
}


			
		
	
