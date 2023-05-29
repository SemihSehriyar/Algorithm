#include <stdio.h>

void insertionSort(int A[], int n)
{
	int j = 0;
	for(j = 1 ; j < n ; j++) 
	{
		int key = A[j];
		int i = j - 1; 
		while(i >= 0 && A[i] > key) 
		{
			A[i + 1] = A[i];
			i = i - 1;
		}	
		A[i + 1] = key;
	}
	for(j = 0; j < 6; j++)
		printf("%d ", A[j]);
}

int binarySearch(int B[], int left, int right, int num)
{
	while(left <= right)
	{
		int middle = left + (right - 1) / 2;
		
		if(B[middle] == num)
			return middle;
		if(B[middle] < num)
			left = middle + 1;
		else 
			right = middle - 1;		
	}
	return -1;	
}

int exponentiation(num, exp)
{
	if(exp == 1)
		return num;
	if(exp % 2 == 0)
	{
		int result = exponentiation(num, exp/2);
		return result * result;
	}
	if(exp % 2 != 0)
	{
		int result = exponentiation(num, (exp-1) / 2);
		return result * result * num;
	}			
}


int main(int argc, char *argv[]) 
{
	int A[6] = {11, 6, 3, 2, 10, 9};
	int B[5] = {2, 3, 14, 25, 55};
	
	int n = 6;
	int num = 14;
	insertionSort(A, n);
	
	int result = binarySearch(B, 0, n, num);
	if(result == -1)
		printf("element doesnt exist");
	else
		printf("element = %d", result);
		
	num = 3;
	int exp = 2;	
	result = exponentiation(num, exp);	
	printf(" %d", result);
			
	return 0;
}
