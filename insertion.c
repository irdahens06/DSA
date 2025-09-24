#include<stdio.h>
int main(){
int arr[100]={10,5,8,44,55,78,25};
int n=7;
int position=2;
int value=1000;

for(int i=n;i>position;i++)
{
    arr[i]=arr[i-1];
}
arr[position]=value;
n++;
printf("after insertion process done");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}