/* Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка. Потоа, во нов ред се внесуваат пет други износи оддвоени со празно место. Тие претставуваат некаква трансакција - одреден трошок или добивка на пари. Програмата печати 1 доколку после извршените трансакции корисникот сеуште има пари на својата сметка, а 0 во спротивно.

input: 25600
       10000 250 899 10 -45000         
output: 0 */

#include <stdio.h>

int main()
{

    int iznos, trosok;
    scanf("%d", &iznos);
    int i1, i2, i3, i4 ,i5;
    scanf("%d%d%d%d%d", &i1 , &i2 , &i3 , &i4 , &i5);
    trosok = (i1+i2+i3+i4+i5);
    iznos += trosok;
    if (iznos > 0){
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}