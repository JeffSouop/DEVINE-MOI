#include<stdlib.h>
#include<stdio.h>
int main(){
	int a,b,i;
	while(1){
		printf("entrer un nombre entre 1 et 100\n");
		scanf("%d",&a);
		if(0<a && a<100){
			break;
		}
	}
	printf("%d",&a);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		if(a>0){
			printf("VEUILLEZ DEVINER LE NOMBRE\n");
			scanf("%d",&b);
			if(a==b){
				printf("C'EST LE BON NOMBRE");
			}
			for(i=1; i<=12; i++){
				if(a!=b){
					if(a>b){
						printf("nombre plus petit, veuillez deviner le bon\n");
						scanf("%d",&b);
					}
					else{
						printf("nombre plus grand, veuillez deviner le bon\n");
						scanf("%d",&b);
					}
					if(a==b){
						printf("C'EST LE BON");
					}
				}
			}
		}
	}	