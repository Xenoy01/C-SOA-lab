#include <stdio.h>
int Lsearch(int ar[],int len,int x1){
for(int i=0;i<len;i++){
if(ar[i]==x1){
return i;
}
}
return -1;
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
int x;
printf("Enter the element to be searched");
scanf("%d",&x);
int index;
index=Lsearch(a,l,x);
if(index!=-1){
printf("The index is:%d",index);
}
else{
printf("Not Found");
}
}
