#include<stdio.h>
void input();
void merge(int left,int center,int right);
void merge_Sort(int left, int right);
int array[100];


void input()
{

printf("Enter your array size=");
int n;
scanf("%d",&n);

int i;
printf("Enter your array elements =");
for(i=0; i<n; i++)
{
    printf("\nEnter %d array elements =",i);
    scanf("%d",&array[i]);
}
printf(" your array elements =");
for(i=0; i<n; i++)
{
    printf("%d  ",array[i]);
}
merge_Sort(0,n-1);

printf("\nAfter merge sort.....");
   for(i=0; i<n; i++){
	   printf("%d    ",array[i]);
   }
printf("\n");
}

void merge_Sort(int left, int right)
{

  if (left < right)
  {
   int center = (left+right)/2;
   merge_Sort(left, center);
   merge_Sort(center+1, right);
   merge(left, center, right);
  }
}

void merge(int left, int mid, int right)
{
    int l = mid - left + 1;
    int r = right - mid;
	
    int i,j,k;	
	
    int lArray[l], rArray[r];

    for (i = 0; i<l; ++i){
        lArray[i] = array[left + i];
    }
	
    for (j = 0; j<l; ++j){
        rArray[j] = array[mid + 1 + j];
    }	 			

    i = 0; j = 0; k = left;

    while(i<l && j<r){
	if (lArray[i] <= rArray[j]){
		array[k] = lArray[i];
		i++;
	}
	else{
		array[k] = rArray[j];
		j++;
	}
	k++;
     }

	while(i<l){
		array[k] = lArray[i];
		i++; 
		k++;
	}

	
	while(j<r){
		array[k] = rArray[j];
		j++; 
		k++;
	}  		

}

void main()
{
  input();
}