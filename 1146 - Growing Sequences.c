#include<stdio.h>
int main ()
{
    int x,i,j;
    for (i=1;;i++){
        scanf("%d",&x);
    if (x==0){
            break;
    }
       else {
           printf("1");
            for (j=2;j<=x;j++){

        printf(" %d",j);
        }
        printf("\n");
    }
    }
    return 0;
}
