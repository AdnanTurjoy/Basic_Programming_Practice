// Heap Sort in C

#include <stdio.h>

void heapify(int a[], int n, int i) {

int temp,root = i;

int left = 2 * i + 1;
int right = 2 * i + 2;

if (left < n && a[left] > a[root])

	root = left;

if (right < n && a[right] > a[root])

	root = right;

if (root != i) {

	temp=a[i];
	a[i]=a[root];
	a[root]=temp;

	heapify(a, n, root);

}

}


void heapSort(int a[], int n) {
 int temp;
// Build max heap
for (int i = n / 2 - 1; i >= 0; i--)
  heapify(a, n, i);

// Heap sort
for (int i = n - 1; i >= 0; i--) {
	temp=a[0];
	a[0]=a[i];
	a[i]=temp;

	// Heapify root element to get highest element at root again
	heapify(a, i, 0);
}

}


void printaay(int a[], int n)
{
for (int i = 0; i < n; i++)
	printf("%d ", a[i]);
printf("\n");

}

int main()
{
int a[] = {12, 11, 13, 5, 6, 7};
int n = sizeof(a) / sizeof(a[0]);
heapSort(a, n);
printf("Sorted aay is given in the following way \n");
printaay(a, n);

}


