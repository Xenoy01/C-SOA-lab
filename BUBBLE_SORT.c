#include <stdio.h>
void Bsort(int ar[],int len){
int t;
for(int i=0;i<len;i++){
for(int j=0;j<len-i-1;j++){
if(ar[j]>ar[j+1]){
t=ar[j];
ar[j]=ar[j+1];
ar[j+1]=t;
}
}
}
}
int main(){
int l;
printf("Enter the size of the array");
scanf("%d",&l);
int a[l];
for(int i=0;i<l;i++){
printf("Enter the %d th Element:",i);
scanf("%d",&a[i]);
}
Bsort(a,l);
printf("Sorted array is :");
for(int i=0;i<l;i++){
printf("%d ",a[i]);
}
}

