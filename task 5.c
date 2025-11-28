#include<stdio.h>
#include<string.h>
int main(){
	 char str[100];
	 char str2[100];
	 int i;
	 printf("Enter anything you want to encrypt\n");
	 gets(str);
	 strcpy(str2,str);
	 
	 for(i=0;str[i]!='\0';i++){
	 	if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){str[i]=str[i]+3;}
	 	
	 }
	 printf("%s",str);
}
