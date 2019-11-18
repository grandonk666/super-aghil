#include <stdio.h> 
#include <math.h>

int main(){ 
	int flag=0, awal=0, akhir=8, tengah=((awal+akhir)/2); 
    int data[] = {3, 9, 11, 12, 15, 17, 23, 31, 35};
    int cari=17;
    
    while(awal<=akhir  && flag==0){
	    if (cari==data[tengah]){
	    	flag=1;
		}
		else if(cari>data[tengah]){
	    	awal=tengah+1;
		}
		else{
			akhir=tengah-1;
		}
	}
	
	if(flag==1){
		printf("KETEMU");
	}
	else{
		printf("TIDAK KETEMU");
	}
	
    return 0; 
} 
