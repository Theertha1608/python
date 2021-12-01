#include<stdio.h>
void main()
{
int a[30],n,i,j,t;
printf("Enter the no. of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
 for(j=i+1;j<n;j++)
 {
   if(a[i]>a[j])
   {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
 }
}
printf("Sorted elements\n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
}
