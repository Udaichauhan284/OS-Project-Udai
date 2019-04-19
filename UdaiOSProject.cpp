#include<iostream>
#include<stdio.h>
int main()
{
 int n;   
 int r;      
 int i,j,k;
 int need[10][10],alloc[10][10],max[10][10];
 int avail[10],p[10];
  printf("\nEnter number of process :");
 scanf("%d",&n);
 printf("\n Enter  resources available : ");
 scanf("%d",&r);
 printf("\nEnter instances for resources :\n");
 for(i=0;i<r;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<n;i++)
 {
 printf("p%d",i+1);          p[i]=0;
 for(j=0;j<r;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
  printf("\n Enter MAX matrix  \n");

 for(i=0;i<n;i++)
 {
 printf("p%d",i+1);
 for(j=0;j<r;j++)
 {
  scanf("%d",&max[i][j]);
 }
 }

 for(i=0;i<n;i++)
 {
 printf("\np%d\t",i+1) ;
 for(j=0;j<r;j++)
 {
  need[i][j]=max[i][j]-alloc[i][j];
  printf("\t%d",need[i][j]);
  }
 }
 
 printf("\n\n");
 int flag=0;
 for(i=0;i<n;i++) 
{ 
for(j=0;j<r;j++) 
{ 
if(avail[j]>=need[i][j]) 
flag=1; 
else 
flag=0; 
} 
} 
if(flag==0) 
printf("Unsafe State"); 
else 
printf("Safe State");
}
