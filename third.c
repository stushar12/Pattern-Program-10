#include<stdio.h>
int main()
{
  int arr[10];
int pos=0;
int n;
int temp;
printf("\n Enter the number of elements in the array ");
scanf("%d",&n);
printf("\n Enter the elements of array ");
for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);

}
printf("\n Original Array is ");
for(int i=0;i<n;i++)
{
  printf("%d  ",arr[i]);
}
for(int i=0;i<n;i++)
{
  if(arr[i]%2==0)
  {
  temp=arr[i];
  arr[i]=arr[pos];
  arr[pos]=temp;
  pos++;
}
}
printf("\n Final Array is ");
for(int i=0;i<n;i++)
{
  printf("%d  ",arr[i]);

}
}
