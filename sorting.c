#include<stdio.h>
void main()
{
int m,i,n,j,t,k;
int a[10],b[10],c[20];
//read first array
printf("Enter the size of first array :\n");
scanf("%d",&m);
printf("Enter the elements into the first array :\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}

//read second array
printf("Enter the size of second array :\n");
scanf("%d",&n);
printf("Enter the elements into the second array :\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}

//sorting first array
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
//sorting second array
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
//merging and sorting two arrays
i=j=0;
while(i<m&&j<n)
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}

while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
//printing arrays
printf("First array :");
for(i=0;i<m;i++)
{
printf("%d",a[i]);
}
printf("second array :");
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
printf("third array :");
for(i=0;i<m+n;i++)
{
printf("%d",c[i]);
}

}

