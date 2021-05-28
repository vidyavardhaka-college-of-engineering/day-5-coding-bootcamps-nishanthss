//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
  int i=0,j,h;
	char str[10];
  printf("Enter your string\n");
	scanf("%s", str);

	//Write your code here
  j = strlen(str)-1;
  while(i<j){
    if(str[i++] != str[j--]){
      h=0;
    }
    else{
      h=1;
    }
  }
    if(h==0){
       printf("it is not a palandromic string\n");
    }
  else{
     printf("it is  a palandromic string\n");
  }
	return 0;
}
