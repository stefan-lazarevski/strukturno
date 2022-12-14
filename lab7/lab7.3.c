/*
Да се напише програма која вчитува квадратна матрица. На почетокот се внесува бројот на редици и колони N на матрицата, а потоа и елементите на матрицата. 
Да се трансформира матрицата на тој начин што секој негативен број во неа би се заменил со збирот на неговите соседи. 
Соседи на даден број во матрица се броевите до него (гледано хоризонтално и вертикално).

Input	
4
5
6
7
8
20
-1
4
3
50
1
2
-6
5
-8
5
4
Result
5 6 7 8 
20 31 4 3 
50 1 2 9 
5 11 5 4 
*/
#include <stdio.h>

int main (){
    
    int a[100][100],n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<0)
                a[i][j]=a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j];
        }
    }
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
