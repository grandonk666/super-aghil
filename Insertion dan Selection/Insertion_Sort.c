#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,data[5],saver;
	
	for (i=0; i<5; i++){
		printf("Masukkan data ke %d : ",i+1);
		scanf("%d",&data[i]);
	}
	
	for(i=1;i<5;i++){
		for(j=i;j>0 && data[j]<data[j-1];j--){
			saver=data[j-1];
			data[j-1]=data[j];
			data[j]=saver;
        }
	}
	
	printf("\n");
	
	for (i=0;i<5; i++){
		printf("Data ke %d : %d\n",i+1,data[i]);
	}
	
	return 0;
	
	}
