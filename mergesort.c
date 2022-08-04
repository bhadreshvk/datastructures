#include<stdio.h>
void mergesort(int a[], int l, int r)

{
if (l < r)
{

int mid = l+(r-l)/2;

mergesort(a, l, mid);
mergesort(a, mid+1, r);
 

merge(a, l, mid, r);
}
}

void merge(int a[], int l, int mid, int r)
{
int i, j, k;
int n1 = mid - l + 1;
int n2 = r - mid;

int L[n1], R[n2];

for (i = 0; i < n1; i++)
L[i] = a[l + i];
for (j = 0; j < n2; j++)
R[j] = a[mid + 1+ j];

i = 0;
j = 0;
k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
a[k] = L[i];
i++;
}
else
{
a[k] = R[j];
j++;
}
k++;
}

while (i < n1)
{
a[k] = L[i];
i++;
k++;
}

while (j < n2)
{
a[k] = R[j];
j++;
k++;
}
}
int main()
{
int a[] = {5,10,6,4,9,13};
int a_size = sizeof(a)/sizeof(a[0]);
printf("Given array is \n");
for(int i=0;i<a_size;i++)
printf("%d ",a[i]);
printf("\n");
mergesort(a, 0, a_size - 1);
printf("\nSorted array is \n");
for(int i=0;i<a_size;i++)
printf("%d ",a[i]);
return 0;
}