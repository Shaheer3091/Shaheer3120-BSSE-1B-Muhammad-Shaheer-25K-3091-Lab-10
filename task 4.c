#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int digit=0,space=0,vowel=0,consonant=0,total=0,i;
	
	printf("Type something\n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){ total++;
		if(str[i]>='0'&&str[i]<='9'){
			digit++; 
		}
		if(str[i]==' '){
			space++;
		}
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
				vowel++;
			}
			else{
				consonant++;
			}
		}
	}
	
	printf("\nThe Statistics\n");
	printf("\nVowels:%d",vowel);
	printf("\nConsonant:%d",consonant);
	printf("\nSpace:%d",space);
	printf("\nDigits:%d",digit);
	printf("\nTotal character:%d",total);
	 
}
