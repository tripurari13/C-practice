// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10], i, loc=-1,key;
    printf("Enter array Elements:  ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Array elements are:  ");
    for (i=0;i<10;i++)
    printf("%d",a[i]);
    printf("\nEnter integer value you want to search: ");
    scanf("%d",&key);
    for (i=0;i<10;i++)
    {
        if (a[i]==key)
        {
            loc=i+1;
            break;
        }
    }
        if (loc!=-1)
        
            printf("\n Element found at %d",loc);
        else
            printf("Element not found");
        
    
    return 0;
}
