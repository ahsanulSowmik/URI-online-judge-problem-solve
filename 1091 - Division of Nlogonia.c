#include <stdio.h>

int main()
{

    int tc, n, m, x, y, i;

    while(1)
    {
        scanf("%d", &tc);
        if(tc == 0)
            break;

        scanf("%d %d",&n,&m);

        for(i=0; i<tc; i++)
        {
            scanf("%d %d",&x,&y);
            if(x==n || y==m)
            {
                printf("divisa\n");
            }
            else if(x>n && y>m)
            {
                printf("NE\n");
            }
            else if(x > n && y < m)
            {
                printf("SE\n");
            }
            else if(x < n && y > m)
            {
                printf("NO\n");
            }
            else if(x < n && y < m)
            {
                printf("SO\n");
            }

        }
    }
    return 0;
}

