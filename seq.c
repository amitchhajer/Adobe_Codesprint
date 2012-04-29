#include<stdio.h>
#include<stdlib.h>
int main()
{
    long *seq,mini=0,i,c1=0,n=0,c2=0;
    scanf("%ld",&n);
    seq=(long*)calloc(n,sizeof(long));
    for(i=0;i<n;i++)
    {
        scanf("%ld",&seq[i]);
        
        if(i>0)
        {
            if(c1>0 && c2>0 && seq[i]<=seq[i-1])
            {
                if(c1+c2+1>mini)
                {
                    mini=c1+c2+1;
                     c1=c2=0;
                }
            }        
            if(seq[i] < seq[i-1])
            {
                c1++;
            }
            else
                if(c1>0 && seq[i]>seq[i-1])
                {  c2++;
                }
            else
            {
                c1=c2=0;
            }   
        }
     }
     if(c1>0 && c2>0 )
    {
        if(c1+c2+1>mini)
        {
            mini=c1+c2+1;
             c1=c2=0;
        }
    }
    printf("%ld",mini);
    return 0;
}
