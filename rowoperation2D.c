#include <stdio.h>
int mian()
{
int m,n,i,j,k;
printf ("Input the number of rows and columns for the array.\n");
scanf ("%d%d",&m,&n);
int a[m][n];
printf ("Enter the array elemnts.\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
scanf ("%d",&a[m][n]); 
printf ("\n");
}
for (j=0;j<n;j++)
a[2][j]=2*a[1][j]-a[1][j]+5*a[2][j];
printf ("The new array is:\n");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
printf("%d",a[i][j]);
printf ("\n");
}
return 0;
}