/*Searching array using linear search technique*/
#include<stdio.h>
int main()  //Main function
{
    //Reading values
    int n,s,i;
    printf("Enter array size=");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the array to be searched=");
    scanf("%d", &s);
    for(i=0;i<n;i++) //Loop 1 to search the array
    {
        if(a[i]==s)  //Condition 1
        {
            printf("Array found");
            break;
        }
    } //End of loop 1
    if(i==n)  //Condition 2
    {
        printf("Array not found");
    }
    return 0;
}