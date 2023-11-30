//program of amstrong number
#include<stdio.h>

int main()
{   

    int n,r,sum=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10; 
        sum=sum+r*r*r;
        n=n/10;
    }
    if(temp==sum){
        printf("amstrong nummber");
    }
    else{
        printf("Not an amstrong number");
    }
	return 0;
}