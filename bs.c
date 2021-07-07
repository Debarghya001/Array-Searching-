/*Search an array using binary search technique*/
#include<stdio.h>
int main()  //Main function
{
    //Reading values
    int n,s,i,b,m,e;
    printf("Enter array size=");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array(needs to be shorted in ascending order):\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the array to searched= ");
    scanf("%d", &s);
    b=0;  
    e=n-1;
    while(b<=e)  //Loop 1 to search the array
    {
        m=(b+e)/2;  //Calculate 1
        if(a[m]==s)  //Condition 1
        {
            printf("Array found");
            break;
        }
        else if(a[m]<s)  //Conditon 2
        {
            b=m+1; 
        }
        else  //Condition 3
        {
            e=m-1;
        }
    } //End of loop 1
    if(b>e)  //Condition 4
    {
        printf("Array not found");
    }
    return 0;
}