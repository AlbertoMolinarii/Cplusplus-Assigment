#include<iostream>
using namespace std;

template <typename T> T most_common(T *A, int size)
{
	int a;
	int j;
	int count = 0;
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < size; x++)
		{
			if (A[i] == A[x])
			{
				count += 1;
				a = A[i];
			}
		}
		if (count > c)
		{
			c = count;
			j = a;
		}
		count = 0;
	}
	return j;
}