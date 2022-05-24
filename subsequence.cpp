#include <stdio.h>  
#include <string.h>  
void lcs() { 
 int i, j, m, n, table[20][20];  
 char S1[20], S2[20]; 
 printf("enter first subsequence: ");
 scanf("%s",&S1);
 printf("enter second subsequence: ");
  scanf("%s",&S2);
  m = strlen(S1);  
  n = strlen(S2); 
  for (i = 0; i <= m; i++)  
      table[i][0] = 0;  
  for (i = 0; i <= n; i++)  
      table[0][i] = 0;  
  for (i = 1; i <= m; i++)  
    for (j = 1; j <= n; j++) {  
      if (S1[i - 1] == S2[j - 1]) {  
        table[i][j] = table[i - 1][j - 1] + 1;  
      } else if (table[i - 1][j] >= table[i][j - 1]) {  
        table[i][j] =table[i - 1][j];  
      } else {  
        table[i][j] =table[i][j - 1];  
      }  
    }  
  
  int index = table[m][n];  
  char l[index + 1];  
  l[index] = '\0';  
  
   i = m, j = n;  
  while (i > 0 && j > 0) {  
    if (S1[i - 1] == S2[j - 1]) {  
      l[index - 1] = S1[i - 1];  
      i--;  
      j--;  
      index--;  
    }  
  
    else if (table[i - 1][j] > table[i][j - 1])  
      i--;  
    else  
      j--;  
  }  
 
  printf("S1 : %s \nS2 : %s \n", S1, S2);  
  printf("LCS: %s", l);  
}  
  
int main() {  
  lcs();   
}  
