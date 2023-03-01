#include <stdio.h>

int main()
{
    // a[5] = 2 1 3 4 5 ----> 5 4 3 2 1
    int a[5],i,j,temp;
    printf("Unsorted number: ");
    for(i=0; i<5; i++)
{
    scanf("%d", &a[i]); // 2 3 4 5 1
}
    for(i=0; i<5; i++) // i=0
{
    for(j=i+1; j<5; j++) // j=0
    {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j]=temp;
        }
    }
}
   printf("Sorted number: ");  
   for(i=0; i<5; i++)
   {
    printf("%d ",a[i]); //1 2 3 4 5
   }
   return 0;
}
