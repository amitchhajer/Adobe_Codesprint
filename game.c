#include<stdio.h>

float pwin,ploose;
float win(int q)
{
    float winprev;
    if(q==1)
    {
        return pwin;
    }
    else
    {
        winprev=win(q-1);
        return winprev*ploose+(1-winprev)*pwin;
    }

}
int main()
{
    float n,q;
    float x;
    scanf("%f%f",&pwin,&n);
    ploose=1-pwin;
    while(n)
    {
        scanf("%f",&q);
        x=win(q);    
        printf("\n%.4f",x);
        n--;
    }
    return 0;

}
