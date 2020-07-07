include<stdio.h>

int main()
{
    int n, m, t=0;

    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        t=n+m;

        printf("%d\n", t);
        t=0;
    }

    return 0;
}

