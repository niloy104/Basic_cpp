#include<stdio.h>
#include<stdlib.h>

void KMPSearch(char pat[100], char txt[100]);
void computeLPSArray(char pat[100], int M, int lps[100]);


void computeLPSArray(char pat[100], int M, int lps[100])
{
	int len = 0;
        int i = 1;

	 lps[0] = 0;

	 while(i < M){
	 	if (pat[i] == pat[len]){
			len++;
			lps[i] = len;
			i++;
		}
		else{
			if (len != 0){
				len = lps[len - 1];
			}
			else {
				lps[i] = len;
				i++;
			}
		}

	 }
}

void KMPSearch(char pat[100], char txt[100])
{
 
	   int M = 5;
	   int N = 15;

	   int lps[M];
	   int j = 0;
		
	   computeLPSArray(pat, M, lps);

	   int i = 0;
	   for (;i<N;){
		if (pat[j] == txt[i]){
			j++;
			i++;	
		}
		if (j == M){
			printf("Found Pattern at index %d\n", (i - j));
			j = lps[j - 1];
		}
		else if (i < N && pat[j] != txt[i]){
			if (j != 0){
				j = lps[j - 1];
			}
			else{
				i = i+1;
			}

		}
		
	   }
	   		

}

void main()
{	
  char txt[100] = "ababcabcabababd";
  char pat[100] = "ababd";
	
  KMPSearch(pat, txt);
}