#include<stdio.h>
int main()
{
int m,n,k,i,j;
printf("Input the number of rows and columns for the array.\n");
scanf("%d%d",&m,&n);
int a[m][n];
printf("Enter the array elemnts.\n");
for (i=0;i<n;i++)
{
for (j=0;j<n; j++)
scanf("%d",&a[i][j]);
printf("\n");
}
for (i=0;i<m;i++)
{
for (j=0;j<n; j++)
{
for (int f=0; f<n-j-1;f++)
{
if (a[i][f]<a[i][f+1])
{
k=a[i][f];
a[i][f]=a[i][f+1];
a[i][f+1]=k;
}}}}
for (i=0;i<n; i++)
{
for (j=0;j<n; j++)
printf("%d",a[i][j]);
printf("\n");
}
return 0;
}