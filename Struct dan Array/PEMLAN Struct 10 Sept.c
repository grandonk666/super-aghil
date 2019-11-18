#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa {
	char npm[20];
	char nama[20];
	float ipk;
};
typedef struct mahasiswa mhs;

int main(){
	int i,menu;
	char a[15];
	mhs data[5];
	
	strcpy(data[0].npm,"101");
	strcpy(data[0].nama,"Ade");
	data[0].ipk = 3.80;
	
	strcpy(data[1].npm,"102");
	strcpy(data[1].nama,"Budi");
	data[1].ipk = 3.60;
	
	strcpy(data[2].npm,"103");
	strcpy(data[2].nama,"Cintya");
	data[2].ipk = 3.65;
	
	strcpy(data[3].npm,"104");
	strcpy(data[3].nama,"Deden");
	data[3].ipk = 3.95;
	
	strcpy(data[4].npm,"105");
	strcpy(data[4].nama,"Esa");
	data[4].ipk = 3.35;
	
	printf("Masukkan pilihan menu :\n1. Tampilkan Urut\n2. Tampilkan kebalik\n3. Cari data\n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1:
			for(i=0;i<5;i++){
				printf("NPM : %s\n",data[i].npm);
				printf("Nama : %s\n",data[i].nama);
				printf("IPK : %f\n",data[i].ipk);
				printf("---------------\n");
	  	    }
		break;
		case 2:
			for(i=4;i>=0;i--){
				printf("NPM : %s\n",data[i].npm);
				printf("Nama : %s\n",data[i].nama);
				printf("IPK : %f\n",data[i].ipk);
				printf("---------------\n");
	  	    }
		break;
    	case 3:
    		printf("Masukkan NPM yang dicari : ");
    		scanf("%s",a);
    		
    		int index=-1;
    		for(i=0;i<5;i++){
				if(!strcmp(a,data[i].npm)){
					printf("IPK : %f",data[i].ipk);
					index=i;
				}
			}
			if(index==-1){
				printf("Data tidak ada");
        break;
    	case 4:
    		break;
			}
	}
	return 0;
}