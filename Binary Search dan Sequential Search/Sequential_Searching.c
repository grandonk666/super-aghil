#include<stdio.h>

int main(){
	int data [8]={8,10,6,-2,11,7,1,100};
	int ketemu=0,cari,i=0;
    
    printf("Masukkan data yang dicari = "); 
    scanf("%d",&cari); 
    
    while (i<8 && ketemu!=1){ 
        if (data[i]==cari){ 
        ketemu=1; 
        }else{ 
            i++; 
        } 
    } 
    
    if(ketemu==1){ 
        printf("ADA",cari); 
    }else{ 
        printf("Data %d tidak terdapat pada kumpulan data\n",cari); 
    }
	
	return 0; 
}
