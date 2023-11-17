#include<stdio.h>
#include<string.h>
void ins(char,int);
void del(int);
char fr[50];
int main(){
	int i=0,cnt=0;
	printf("Enter the frame:\n");
	scanf("%s",&fr);
	for(i=0;i<strlen(fr);i++){
		if(fr[i]!='0' && fr[i]!='1'){
			printf("Invalid input \n press any key to exit");
		}
	}
	//stuffing the given bit
	for(i=0;i<strlen(fr);i++){
		if(cnt==5){
			cnt=0;
			ins('0',i);
		}
		
		if(fr[i]=='1'){
			cnt+=1;
		}
		else{
			cnt=0;
		}}
		printf("\n\n Stuffed Frame is \t%s\n\n",fr);
		cnt=0;
		for(i=0;i<strlen(fr);i++){
			if(cnt==5){
				cnt=0;
				del(i);
			}
			if(fr[i]=='1'){
				cnt++;
			}
			else{
				cnt=0;
			}
		}
		printf("Destuffed frame is:\t %s",fr);
		return 0;	
}
void ins(char in,int p){
	char dup[50];
	int i;
	strcpy(dup,fr);
	fr[p]=in;
	for(i=p+1;i<strlen(fr)+1;i++){
		fr[i]=dup[i-1];
	}
}
void del(int q){
	int i;
	for(i=q;i<strlen(fr);i++){
		fr[i]=fr[i+1];
	}
}
