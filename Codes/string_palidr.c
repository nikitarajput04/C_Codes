///Check if a string is a palindrome

#include<stdio.h>
#include<string.h>
int main(){
    char str1[40],str2[57];
    printf("enter the string :");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0){
        printf("the giveen string is palindrome");
    
    }else{
        printf("the giveen string is  not  palindrome");
    
    }
}