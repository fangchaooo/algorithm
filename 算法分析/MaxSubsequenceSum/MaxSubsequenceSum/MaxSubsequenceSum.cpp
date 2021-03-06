// MaxSubsequenceSum.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MaxSubsequenceSum.h"

int MaxSubsequenceSum1(const int A[], int N)
{
	int ThisSum, MaxSum, i, j, k;
	MaxSum = 0;
	for ( i = 0; i < N; i++)
	{
		for ( j = i; j < N; j++)
		{
			ThisSum = 0;
			for ( k = i; k <=j ; k++)
			{
				ThisSum += A[k];
			}
			if (ThisSum>MaxSum)
			{
				MaxSum = ThisSum;
			}
		}
	}
	return MaxSum;
}

int MaxSubsequenceSum2(const int A[], int N)
{
	int ThisSum, MaxSum, i, j, k;
	MaxSum = 0;
	for ( i = 0; i < N; i++)
	{
		ThisSum = 0;
		for ( j = i; j < N; j++)
		{
			ThisSum += A[j];
			if (ThisSum > MaxSum)
			{
				MaxSum = ThisSum;
			}

		}
	}
	return MaxSum;
}

int MaxSubsequenceSum3(const int A[], int N);

int MaxSubsequenceSum4(const int A[], int N)
{
	int ThisSum=0, MaxSum, i, j;
	MaxSum = 0;
	for ( i = 0; i < N; i++)
	{
		ThisSum += A[i];
		if (ThisSum>MaxSum)
		{
			MaxSum = ThisSum;
		}
		else if (ThisSum<0)
		{
			ThisSum = 0;
		}
	}
	return MaxSum;
}
int main()
{
	int num[10], i;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", num[i]);
	}
	printf("The max is %d\n", MaxSubsequenceSum1(num, 10));
	printf("The max is %d\n", MaxSubsequenceSum1(num, 10));
	printf("The max is %d\n", MaxSubsequenceSum1(num, 10));
    return 0;
}

