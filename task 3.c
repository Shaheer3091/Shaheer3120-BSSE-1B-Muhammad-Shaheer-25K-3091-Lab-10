#include<stdio.h>
#include<string.h>

int main(){
	char email[50];
	char domain[50];
	int n=1,i,a=0;
	printf("Enter email to extract its domain\n");
	scanf("%s",email);
 
	for(i=0; email[i]!='\0'; i++){
		if(email[i]=='@'){
			a=1;
			break;
		}
		else{
			n++;
		}	 
	}
	 
    for(i=n;email[i]!='\0';i++){
    	domain[i-n]=email[i];
	}
	
	if(a==1){
	printf("The Domain is : %s",domain);}
	else{
		printf("Invalid email");
	}
	
	
 
	
	
}
