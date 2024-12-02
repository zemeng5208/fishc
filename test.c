#include <stdio.h>
int putt(int a, int b, int c, int d, int e)
{
    int l = 0, i, j, k = 0;
    printf("COCKS,HENS,CHICKS\n");
    for (int i = 0; i <= e; i++)
    {
        for (int j = 0; j <= e; j++)
        {
            // for(int k=0; k<=e; )
            //{
            k = e - i - j;

            if ((c > 0) && (k % c == 0) && (a * i + b * j + k / c == d))
            {
                printf("%d,%d,%d\n", i, j, k);

                l++;
                //}
            }
        }
    }
    if (l == 0)
    {
        printf("Cannot buy!\n");
        return -1;
    }
    return 1;
}

int main()
{
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    for (int i = 0;; i++)
    {
        int a, b, c, d, e;
        scanf("%d,%d,1/%d,%d,%d", &a, &b, &c, &d, &e);
        putt(a, b, c, d, e);
    }

    return 0;
}
