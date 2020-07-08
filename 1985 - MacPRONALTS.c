#include<stdio.h>
int main ()
{
    int i,c;
    double a=0,r;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %lf", &c, &r);
        if(c==1001)
            a += r*1.50;
        else if(c==1002)
                a += r*2.50;
        else if(c==1003)
                a += r*3.50;
        else if(c==1004)
                a += r*4.50;
        else if(c==1005)
                a += r*5.50;
    }
    printf("%.2lf\n", a);
    return 0;
}

