#include<stdio.h>

main(){
	int binary, complement[20],remainder,i=0,j;
	
	printf("Enter binary: ");
	scanf("%d",&binary);
	
	while(binary>0){
		remainder=binary%10;
		if(remainder==1||remainder==0){

			if(remainder==1){
				complement[i]=0;
			}
			else{
				complement[i]=1;
			}
			i++;
			binary/=10;
			}
		else{
			printf("Error!!");
			return 0;
		}
	}
	for(j=i-1;j>=0;j--){
		printf("%d",complement[j]);
	}
	
}
