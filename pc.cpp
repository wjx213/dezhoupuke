#include<stdio.h>

int main(){
	char black[5][2];
	char white[5][2];
	char a,b;
	int bn,cn;
	printf("Black: ");
	for(int i=0;i<=4;i++){
	scanf("%c%c",&black[i][0],&black[i][1]);
	a=getchar();
	}
	printf("%c %c %c %c\n",black[0][0],black[0][1],black[1][0],black[1][1]);
	printf("White:");
	for(int i=0;i<=4;i++){
	scanf("%c%c",&white[i][0],&white[i][1]);
	a=getchar();
	}
	printf("%c %c %c %c\n",white[0][0],white[0][1],white[1][0],white[1][1]);
	for(int i=0;i<=4;i++){
		int min=i;
		for(int m=i+1;m<=4;m++){
			if(black[m][0]<black[min][0]){
				min=m;
			}
		}
		if(min!=i){
		b=black[min][0];
		black[min][0]=black[i][0];
		black[i][0]=b;
		b=black[min][1];
		black[min][1]=black[i][1];
		black[i][1]=b;
	}
	}
	for(int i=0;i<=4;i++){
		int min=i;
		for(int m=i+1;m<=4;m++){
			if(white[m][0]<white[min][0]){
				min=m;
			}
		}
		if(min!=i){
		b=white[min][0];
		white[min][0]=white[i][0];
		white[i][0]=b;
		b=white[min][1];
		white[min][1]=white[i][1];
		white[i][1]=b;
	}
	}
	printf("%c %c %c %c\n",white[0][0],white[0][1],white[1][0],white[1][1]);
	printf("%c %c %c %c",black[0][0],black[0][1],black[1][0],black[1][1]);
	int flag=0;
	
	for(int i=0;i<=3;i++){
		if((black[i][1]==black[i+1][1])&&(black[i][0]==black[i+1][0]-1)){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1) {
	bn=100;
	}
	else {
		for(int i=0;i<=3;i++){
		if((black[i][0]==black[i+1][0]-1)){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
		if(flag==1){
		bn=50;
		}
	}
	
    flag=0;
	for(int i=0;i<=3;i++){
		if((white[i][1]==white[i+1][1])&&(white[i][0]==white[i+1][0]-1)){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1) {
	cn=100;
	}
	else {
		for(int i=0;i<=3;i++){
		if((white[i][0]==white[i+1][0]-1)){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
		if(flag==1){
		cn=50;
		}
	}
	printf("\n%d",cn);
	
	
	if(bn>cn) printf("Black win");
	else if(bn<cn) printf("White win");
	else {
		if(black[4][0]>white[4][0]) printf("BLACK win");
		else printf("White win");
		} 
	return 0;
}

