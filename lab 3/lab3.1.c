/* Да се напише програма која за дадени поени од испити по 5 предмети внесени преку стандарден влез ќе пресмета оцена по секој предмет и вкупен просек на 
студентот според оцените(заокружен на две децимали).

Оценa    Поени 
 5            0-49
 6            50-59
 7            60-69
 8            70-79
 9            80-89
 10          90-100

For example:

Input	Result
67 55 75 83 90
7 6 8 9 10
8.00
*/

#include <stdio.h>

int main()
{

    int poeni, ocena, zbiro=0;
    for (int i=0; i<5; i++)
    {   scanf("%d", &poeni);
        if (poeni < 50) ocena=5;
        if (poeni >=50 && poeni < 60) ocena=6;
        if (poeni >=60 && poeni < 70) ocena=7;
        if (poeni >=70 && poeni < 80) ocena=8;
        if (poeni >=80 && poeni < 90) ocena=9;
        if (poeni >= 90) ocena=10;
        printf("%d ", ocena);
        zbiro +=ocena;
    } printf("\n%.2f", zbiro/5.0);


    return 0;
}
