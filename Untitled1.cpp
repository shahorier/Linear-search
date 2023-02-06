#include<stdio.h>
#include<conio.h>
int main()
{

 int num[]={12,23,31,55,67,34,87};
 int value,pos=-1,i;

 printf("Enter the value you want to search =");
 scanf("%d",&value);

 for(i=0;i<6;i++){
     if(value==num[i])
    {
     pos=i+1;
     break;
    }
 }

 if(pos== -1)
 {
     printf("Element is not found ");
 }

else{
    printf("Element is found at %d Position",pos);
    }
return 0;
}

