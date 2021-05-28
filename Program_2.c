//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>
#include<string.h>
int main()
{
  int j=0,i=0;
	char str[10],temp;
  printf("Enter the string\n");
	scanf("%s", str);

	//Write your code;
  j = strlen(str)-1;

  while(i<=j){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  } 
  printf("The reversed string is : %s",str);
	return 0;
}
