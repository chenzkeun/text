#include<stdio.h>
int main(){
int arr[10]={66,63,7,1,20,6,5,8,94,55};
//���� 
int i,j,x,k;
for(i=0;i<9;i++){//x��Ԫ��ѭ��x-1�� 
for(j=0;j<9-i;j++)   {//x��Ԫ��ѭ��x-1�� 
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
