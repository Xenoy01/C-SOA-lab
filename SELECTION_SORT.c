#include <stdio.h>
void Ssort(int a[],int len){
for(int i=0;i<len-1;i++){
int min=i;
int temp=0;
for(int j=i+1;j<len;j++){
if(a[j]<a[min]){
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
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
Ssort(ar,l);
printf("Sorted array is :");
for(int i=0;i<l;i++){
printf("%d ",ar[i]);
}
}
