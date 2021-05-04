
#include<stdio.h>
int main()
{
    int i,n,r,factn=1,factr=1,factnr=1;
    scanf("%d",&n);
    scanf("%d",&r);

    for(i=1;i<=n;i++)
    {
        factn = factn * i;
    }
    for(i=1;i<=r;i++)
    {
        factr = factr * i;
    }

    for(i=1;i<=n-r;i++)
    {
        factnr = factnr * i;
    }
    printf("n! / r!(n-r)! = %d",factn/(factr * factnr));


    return 0;
}


