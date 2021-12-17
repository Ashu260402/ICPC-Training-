#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int count =0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if (a==1 && b ==1)
        {
            count++;
        }
        else if (a==1 && c==1)
        {
            count++;
        }
        else if (b==1 && c==1)
        {
            count++;
        }
        else{
            count = count;
        }


        
    }
    printf("%d",count);
    return 0 ;
    
}