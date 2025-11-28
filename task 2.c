#include<stdio.h>
#include<string.h>

int main(){
	char pass[20];
	int a,i;
	int upcase=0,special=0,digit=0;
	
	printf("Enter password ");
	scanf("%s",pass);
	
	a=strlen(pass);
	if(a<8){
		printf("Password must be 8 digts or greater");
	    return 0;
	}
	
		for(i=0;i<a;i++){
			if(pass[i]>='A'&&pass[i]<='Z'){
				 upcase++;
			}
			
			if(pass[i]>='0'&&pass[i]<='9'){
				 digit++;
			 
			}
			
			if(pass[i]=='@'||pass[i]=='!'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='^'||pass[i]=='&'||pass[i]=='*'||pass[i]=='('||pass[i]==')'){
				 special++;
			 
			}
		}
 
	if(upcase==0){
		printf("Your password must contain a Uppercase character");
	}
	
	
	if(digit==0){
		printf("Your password must contain a number character");
		
	}
	
	if(special==0){
		printf("Your password must contain a special character");
		
	}
	
	else{printf("Perfect password");}
	
}
