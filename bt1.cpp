#include <stdio.h>
int main()
{
    int n, i;
    printf("Nhap so n (1 <= n <= 9): ");
    scanf("%d", &n);
    if (n < 1 || n > 9)
    {
        printf("Chi tinh duoc bang cuu chuong 1 den 9 thoi!\n");
    }
    else
    {
        for (i = 1; i <= 9; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}

