//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
  int i=0,v=0;
	char str[10];
  printf("Enter the string\n");
	scanf("%s", str);

	//Write your code here
    while(str[i++]!='\0'){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='\0'){
      v++;
    }
  }
   printf("the string %s contains %d vowels\n",str,v);

	return 0;
}
