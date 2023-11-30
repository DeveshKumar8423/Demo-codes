//reverse a string using function
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter a string to be reversed : ");
    scanf("%s",str);

    printf("After reverse of strng : %s" , strrev(str));
    return 0;
}
