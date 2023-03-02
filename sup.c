#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *p;
	
	char a[50];
	int i;
	
	p = fopen("write.txt","w");
	
	if(p == NULL){
		
		printf("error");
		
	}
	else{
		printf("enter text : ");
		gets(a);
		
		for(i=0 ; i<strlen(a) ; i++){
			
				fputc(a[i],p);
		}
		
	
			fclose(p);
	}
	return 0;
}
