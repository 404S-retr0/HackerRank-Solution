#include <stdio.h>
#include<string.h>
int main()
{
  char str1[50];
  char str2[50];
  int value;
  scanf("%s",str1);
  scanf("%s",str2);
  value=strcmp(str1,str2);
  if(value==0)
    printf("It is correct");
  else
    printf("It is wrong");
  return 0;
}
