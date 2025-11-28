#include<stdio.h>
#include<string.h>

int main(){
	char name[5][20];
	int marks[5],i,high=0,a=0,sum=0;
	float avg;
	
	for(i=0;i<5;i++){
		
	printf("\nEnter the name of student %d\n",i+1);
	scanf("%s",name[i]);
	printf("\nEnter marks of %s\n",name[i]);
	scanf("%d",&marks[i]);
}
	for(i=0;i<5;i++){
		if(marks[i]>high){
			high=marks[i];a=i;
		}	
	}
	for(i=0;i<5;i++){
		sum=marks[i]+sum;
	}
	avg=sum/5;
	
	printf("\nStudent information\n");
	for(i=0;i<5;i++){
		printf("\n%s:%d marks",name[i],marks[i]);
	}
	
	printf("\nThe highest scorer is %s with %d marks",name[a],marks[a]);
	printf("\nThe average is %0.2f",avg); 
}

