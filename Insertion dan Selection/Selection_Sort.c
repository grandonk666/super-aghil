#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,data[5],saver,posk;
	
	for (i=0; i<5; i++){
		printf("Masukkan data ke %d : ",i+1);
		scanf("%d",&data[i]);
	}
	
	for (i=0;i<5;i++){
		posk=i;
		for(j=i;j<5;j++){
			if (data[j]<data[posk]){
                posk=j;
            }
        }
        saver=data[i];
        data[i]=data[posk];
        data[posk]=saver;
	}
	
	printf("\n");
	
	for (i=0;i<5; i++){
		printf("Data ke %d : %d\n",i+1,data[i]);
	}
	
	return 0;
	
	}
