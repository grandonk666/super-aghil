#include<stdio.h>
#include<math.h>

int main(){
	char h=64;
	int tabel [3][3][3]={{{5,1,3},{6,2,8},{1,2,5}},{{6,8,1},{5,1,3},{6,6,4}},{{4,2,7},{6,3,2},{1,9,4}}};
	int titik,i,j,k;
	float pjg1,pjg2,pjg3,pjg4,pjg5,pjg6,pjgttl1,pjgttl2,pjgttl3;

	for (i=0;i<3;i++){
		printf("Garis ke %d\n",i+1);
		for (j=0;j<3;j++){
			++h;
			printf("Titik %c \n",h);
			for (k=0;k<3;k++){
				printf("%d\t",tabel[i][j][k]);	
			}
			printf("\n");
		}
		printf("\n");
	}
	
	pjg1 = sqrt(pow((tabel[0][0][0]-tabel[0][1][0]),2)+pow((tabel[0][0][1]-tabel[0][1][1]),2)+pow((tabel[0][0][2]-tabel[0][1][2]),2));
	pjg2 = sqrt(pow((tabel[0][1][0]-tabel[0][2][0]),2)+pow((tabel[0][1][1]-tabel[0][2][1]),2)+pow((tabel[0][1][2]-tabel[0][2][2]),2));
	pjgttl1 = pjg1+pjg2;
	
	pjg3 = sqrt(pow((tabel[1][0][0]-tabel[1][1][0]),2)+pow((tabel[1][0][1]-tabel[1][1][1]),2)+pow((tabel[1][0][2]-tabel[1][1][2]),2));
	pjg4 = sqrt(pow((tabel[1][1][0]-tabel[1][2][0]),2)+pow((tabel[1][1][1]-tabel[1][2][1]),2)+pow((tabel[1][1][2]-tabel[1][2][2]),2));
	pjgttl2 = pjg3+pjg4;
	
	pjg5 = sqrt(pow((tabel[2][0][0]-tabel[2][1][0]),2)+pow((tabel[2][0][1]-tabel[2][1][1]),2)+pow((tabel[2][0][2]-tabel[2][1][2]),2));
	pjg6 = sqrt(pow((tabel[2][1][0]-tabel[2][2][0]),2)+pow((tabel[2][1][1]-tabel[2][2][1]),2)+pow((tabel[2][1][2]-tabel[2][2][2]),2));
	pjgttl3 = pjg5+pjg6;
	
	printf("Panjang dari titik A ke titik B = %f\n",pjg1);
	printf("Panjang dari titik B ke titik C = %f\n\n",pjg2);
	printf("Panjang dari titik A ke titik C = %f",pjgttl1);
	printf("\n====================================\n");
	
	printf("Panjang dari titik D ke titik E = %f\n",pjg3);
	printf("Panjang dari titik E ke titik F = %f\n\n",pjg4);
	printf("Panjang dari titik D ke titik F = %f",pjgttl2);
	printf("\n====================================\n");
	
	printf("Panjang dari titik G ke titik H = %f\n",pjg5);
	printf("Panjang dari titik H ke titik I = %f\n\n",pjg6);
	printf("Panjang dari titik G ke titik I = %f",pjgttl3);
	printf("\n====================================\n");
	
	return 0;
}
