#include <stdio.h>
#include <stdlib.h>

int strindex(char [], char []); 

int main()
{
char source[]="abcdefgh";
char find[]="def";
int index=strindex(source,find);

if(index>0)
printf("index number is %d\n",index);

else
printf("not found");
}

int strindex(char s[], char t[]) 
 { 
 int i, j, k; 
 for (i = 0; s[i] != '\0'; i++) { 
 for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++) 
 ; 
 if (k > 0 && t[k] == '\0') 
 return i; 
 } 
 return -1; 
 } 
