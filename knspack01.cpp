#include<stdio.h>
#include<stdlib.h>


int n, W;
int max(int a, int b){
   return (a > b) ? a : b;
}



void knapsack(int P[n+1][W+1],int W, int wt[], int val[], int n){

	int i, w;

	for (i = 0; i<= n; i++){
		for (w = 0; w <= W; w++){
			if (i == 0 || w == 0)
				P[i][w] = 0;
			else if (wt[i - 1] <= w){
				P[i][w] = max(val[i - 1] + P[i-1][w - wt[i - 1]], P[i-1][w]); 
			}
			else{
				P[i][w] = P[i-1][w];
			}
		}
	}
 
	//return P[n][W];

}

void main()
{	
	int i;
	printf("Enter No. of Items: ");
	scanf("%d", &n);
	printf("Enter the size of Knapsack: ");
	scanf("%d", &W); 
	  
	int P[n+1][W+1], val[n], wt[n];

	printf("Enter the value of items: ");
	for (i=0; i<n; i++){
		scanf("%d", &val[i]);	
	}
	
	printf("Enter the weight of items: ");
	for (i=0; i<n; i++){
		scanf("%d", &wt[i]);	
	}
   
	knapsack(P, W, wt, val, n);
	
	printf("max total profit: %d", P[n][W]);


}