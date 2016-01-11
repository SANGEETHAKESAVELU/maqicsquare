#include <stdio.h>
 
void square(int, int [][10]);
 
int main( )
{
    int order,a[10][10];
 
    printf("Enter the size: \n");
    scanf("%d", &order);
    if ((order % 2 )== 0)
    {
        printf("Magic square matrix\n");
    }
    else
    {
        square(order, a);
    }
    return 0;
}
 
void square(int order, int a[][10])
{
    int sq = order * order;
    int i = 0, j = order/ 2, k;
 
    for (k = 1; k <= sq; ++k) 
    {
        a[i][j] = k;
        i--;
        j++;
 
        if ((k % order) == 0) 
        { 
            i += 2; 
            --j; 
        }
        else 
        {
            if (j == order) 
            {
                j -= order;
            }
            else if (i < 0)
            {
                i += order;
            }
        }
    }
    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
