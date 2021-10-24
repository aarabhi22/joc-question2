#include<stdio.h>
void main()
{
    int a[10],i,j,n,count=1,visited[20];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(visited[i]==1)
            {
                break;
            }
            else
            {
                if(a[i]==a[j])
                {
                    visited[j]=1;
                    count=count+1;
                }
            }
        }
        if(visited[i]==1)
        {
            continue;
        }
        else
            printf("%d's:%d\n",a[i],count);
    }
}
