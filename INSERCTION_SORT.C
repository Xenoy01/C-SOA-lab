#include <stdio.h>
void Isort(int a[],int len){
for(int i=0;i<len;i++){
int t=a[i];
int j=i-1;
while(j>=0 && a[j]>t){
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
}
int main(){
int l;
printf("Enter the size of the array");
scanf("%d",&l);
int ar[l];
for(int i=0;i<l;i++){
printf("Enter the %d th Element:",i);
scanf("%d",&ar[i]);
}
Isort(ar,l);
printf("Sorted array is :");
for(int i=0;i<l;i++){
printf("%d ",ar[i]);
}
}
