#include <stdio.h>
#include <conio.h>

int main(){
	
	int i,j,data[5],saver,flags=0,low=0,high=4,pos,key;
	
	for (i=0; i<5; i++){
		printf("Masukkan data ke %d : ",i+1);
		scanf("%d",&data[i]);
	}
	
	for (i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if (data[i]>data[j]){
                saver=data[i]; data[i]=data[j]; data[j]=saver;
            }
        }
	}
	
	printf("\n");
	
	for (i=0;i<5; i++){
		printf("Data ke %d : %d\n",i+1,data[i]);
	}
	
	printf("\nMasukkan data yang dicari : \n");
	scanf("%d",&key);
	
	do{
		pos=(((key-data[low])/(data[high]-data[low]))*(high-low))+low;
		
		if(data[pos]==key){
			flags++;
			break''
		}
		if(data[pos]>key){
			high=pos-1;
		}
		else if(data[pos]<key){
			low=pos+1;
		}
	}
	while(key>=data[low]&&key<=data[high]);
	
	if
	
	return 0;
}
