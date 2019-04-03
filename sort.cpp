// w1.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

//插入排序
void insertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a + j, a + (j - 1));
		}
	}
}

//冒泡排序
void bubbleSort(int a[], int n)
{
	bool flag ;
	for (int i = n - 1; i > 0; i--)
	{
		flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				flag = false;
				swap(a + j, a + (j + 1));
			}
				
		}
		if (flag)
			break;
	}
}
void quickSort()
{}

void mergeSort()
{}




