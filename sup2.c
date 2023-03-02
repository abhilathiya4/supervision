#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *p;
	
	char a;
	
	p = fopen("write.txt","r");
	
	if(p == NULL){
		
		printf("error");
		
	}
	else{
		while(a!=EOF){
			
			a=fgetc(p);
			printf("%c",a);
		}
		fclose(p);
	}
	
	return 0; 
		
}
		
	
			
	

	
	
	

