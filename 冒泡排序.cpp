#include<stdio.h>
int main(){
int arr[10]={66,63,7,1,20,6,5,8,94,55};
//正序 
int i,j,x,k;
for(i=0;i<9;i++){//x个元素循环x-1次 
for(j=0;j<9-i;j++)   {//x个元素循环x-1次 
if(arr[j]>arr[j+1])      {
x=arr[j];
arr[j]=arr[j+1];
arr[j+1]=x;
                         }

                     }
                  }


for(k=0;k<10;k++){

printf("%d\t",arr[k]);
}


return 0;
} 
