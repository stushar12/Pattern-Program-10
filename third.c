#include<stdio.h>
int main()
{
  int arr[10][10],n;
  printf("\n Enter an odd value of n ");
  scanf("%d",&n);
  int k=64;
  for(int i=1;i<=n;i+=2)
  {
  k=k+1;
  }
  char ch=k;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(i==1||i==n||j==1||j==n)
      arr[i][j]=ch;
      else if((i==2&&(j>1&&j<=n-1))||(i==n-1&&(j>1&&j<=n-1))||(j==2&&(i>1&&i<=n-1))||(j==n-1&&(i>1&&i<=n-1)))
      arr[i][j]=ch-1;
      else if((i==3&&(j>2&&j<=n-2))||(i==n-2&&(j>2&&j<=n-2))||(j==3&&(i>2&&i<=n-2))||(j==n-2&&(i>2&&i<=n-2)))
      arr[i][j]=ch-2;
      else if((i==4&&(j>3&&j<=n-3))||(i==n-3&&(j>3&&j<=n-3))||(j==4&&(i>3&&i<=n-3))||(j==n-3&&(i>3&&i<=n-3)))
      arr[i][j]=ch-3;
      else if((i==5&&(j>4&&j<=n-4))||(i==n-4&&(j>4&&j<=n-4))||(j==5&&(i>4&&i<=n-4))||(j==n-4&&(i>4&&i<=n-4)))
      arr[i][j]=ch-4;
      else if((i==6&&(j>5&&j<=n-5))||(i==n-5&&(j>5&&j<=n-5))||(j==6&&(i>5&&i<=n-5))||(j==n-5&&(i>5&&i<=n-5)))
      arr[i][j]=ch-5;
      else
      arr[i][j]=ch-6;
    }
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      printf("%c ",arr[i][j]);
    }
    printf("\n");
  }
}
