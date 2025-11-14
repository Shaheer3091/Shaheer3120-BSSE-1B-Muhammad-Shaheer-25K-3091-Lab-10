#include<stdio.h>
#include<string.h>
int main(){
	
	char words[4][10]={"apple","grape","kiwi","orange"};

	int i,j=0;
	for(i=0;i<4;i++){
		printf("%d\n",strlen(words[i]));
		puts(words[i]);
	}
	
	
	printf("\n\n"); 
	for(i=0;i<4;i++){
		 while(words[i][j]!='\0'){
			printf("%c\n",words[i][j]);
			j++;
		}
		printf("\n");
		j=0;
	
	
}
}
