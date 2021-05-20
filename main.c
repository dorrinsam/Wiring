#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    int n = 0;
      scanf("%d", &n);
    int a[n][2];
    int sum[n], mines[n];
    int maxSum = INT_MIN, minSum = INT_MAX, maxMines = INT_MIN, minMines = INT_MAX;
    int maximom = 0;
       for(int i = 0; i < n; i++){
          for(int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
                                                }
       for(int i = 0; i < n; i++){
         sum[i] = a[i][0] + a[i][1];
           if(sum[i] > maxSum)
              maxSum = sum[i];
           if(sum[i] < minSum)
              minSum = sum[i];

              mines[i] = a[i][0] - a[i][1];
           if(mines[i] > maxMines)
              maxMines = mines[i];
           if(mines[i] < minMines)
              minMines = mines[i];
                                                         }
           if(maxSum - minSum >= maxMines - minMines)
              maximom = maxSum - minSum;
           else
              maximom = maxMines - minMines;
                  printf("%d", maximom);
                                                                 }
