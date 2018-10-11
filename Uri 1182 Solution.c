#include<stdio.h>
int main()
{
    int i,j,n;
    float s=0.0,m;
    float a[12][12];
    char x;
    scanf("%d %c",&n,&x);
    for(i=0; i<=11; i++)
    {
        for(j=0; j<=11; j++)
        {
            scanf("%f",&a[i][j]);
            if(i<=11 && j==n )
            {

                s=s+a[i][j];
            }
        }
    }
    if(x=='S')
    {
        printf("%.1f\n",s);
    }
    else if(x=='M')
    {
        m=s/12.0;
        printf("%.1f\n",m);
    }
    return 0;
}
