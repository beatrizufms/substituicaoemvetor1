#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  disciplína: AlgProg2*/

/*Faça um programa que leia um vetor X[10].
Substitua a seguir, todos os valores nulos e
negativos do vetor X por 1.
Em seguida mostre o vetor X.
*/
int main ()
{
    int i, x [10];

    for( i = 0; i < 10; i++)
    {
        scanf("%d", &x [i]);
        if((x [0] == 0) || (x [0] < 0))
        {
            x [0] = 1;
        }
        if((x [1] == 0) || (x [1] < 0))
        {
            x [1] = 1;
        }
        if((x [2] == 0) || (x [2] < 0))
        {
            x [2] = 1;
        }
        if((x [3] == 0) || (x [3] < 0))
        {
            x [3] = 1;
        }
        if((x [4] == 0) || (x [4] < 0))
        {
            x [4] = 1;
        }
        if((x [5] == 0) || (x [5] < 0))
        {
            x [5] = 1;
        }
        if((x [6] == 0) || (x [6] < 0))
        {
            x [6] = 1;
        }
        if((x [7] == 0) || (x [7] < 0))
        {
            x [7] = 1;x [7] = 1;
        }
        if((x [8] == 0) || (x [8] < 0))
        {
            x [8] = 1;
        }
        if((x [9] == 0) || (x [9] < 0))
        {
            x [9] = 1;
        }
    }
    printf("X[0] = %d\n", x [0]);
    printf("X[1] = %d\n", x [1]);
    printf("X[2] = %d\n", x [2]);
    printf("X[3] = %d\n", x [3]);
    printf("X[4] = %d\n", x [4]);
    printf("X[5] = %d\n", x [5]);
    printf("X[6] = %d\n", x [6]);
    printf("X[7] = %d\n", x [7]);
    printf("X[8] = %d\n", x [8]);
    printf("X[9] = %d\n", x [9]);
    return 0;
}
