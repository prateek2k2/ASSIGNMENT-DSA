#include <stdio.h>
void main()
{
    int n;
    printf("enter the number of elemnt to be entered\n");
    scanf("%d",&n);
    int arr[n];
    int k;
    printf("enter the values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%d",&k);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("value found\n");
            c=c+1;
        }
    }
    if(c==0)
    printf("value not found");
}
