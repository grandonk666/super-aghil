#include <stdio.h>
#include <conio.h>

int main(){
    int i,menu,search;
	
	int npm[5] = {101,102,103,104,105};
	float ipk[5] = {3.78,3.46,3.98,3.70,4.00};
	
	while (menu != 1 || menu != 2 || menu != 3){
		printf("Masukkan Menu\n");
		printf("1. Tampilkan data urut \n2. Tampilkan data urutan terbalik \n3. Cari data\n");
		printf("Masukkan Pilihan Anda : ");
		scanf("%d", &menu);
		if(menu == 1){
			printf("Data Mahasiswa : \n\n");
			for(i=0; i<5; i++){
			printf("NPM mahasiswa ke %d : %d\n", i+1, npm[i]);
			printf("IPK mahasiswa ke %d : %f\n", i+1, ipk[i]);
			printf("--------------------------\n");
			}	
		} else if (menu == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
			printf("NPM mahasiswa ke %d : %d\n", i+1, npm[i]);
			printf("IPK mahasiswa ke %d : %f\n", i+1, ipk[i]);
			printf("--------------------------\n");	
	  	    }	
		} else if (menu == 3){
			printf("Masukkan NPM yang dicari : ");
			scanf("%d", &search);
			for(i = 0; i<5; i++){
				if(npm[i] == search){
					printf("NPM : %d\n",npm[i]);
					printf("IPK : %f\n",ipk[i]);
					break;
				}
			}			
		} else if (menu == 4) {
			break;
		}
	}
    return 0;
}