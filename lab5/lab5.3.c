/*
Од тастатура се внесува низа од целобројни елементи А со должина N ( N <= 100). Дополнително се внесува и број К. Да се трансформира низата така што на почеток ќе се преместат сите елементи помали од K, а после нив ќе следуваат броевите поголеми или еднакви на K. Редоследот на елементите да не се менува.

Испечатете ги елементите на трансформираната низа во еден ред на стандарден излез разделени со празно место.

For example:
Input	Result
6
1 3 5 7 9 0
6
1 3 5 0 7 9
*/
#include <stdio.h>

int main(){
    
    int n,k;
    scanf("%d",&n);
    int a[n],b[n];
        for(int i=0;i<n;i++)
             scanf("%d", &a[i]);
       scanf("%d", &k);
    for(int i=0;i<n;i++)
        if(a[i]<k)
            printf("%d ", a[i]);
    for(int i=0;i<n;i++)
        if(a[i]>=k)
            printf("%d ", a[i]);
    
    
    return 0;
}
