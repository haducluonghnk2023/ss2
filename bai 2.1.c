#include<stdio.h>
int main(){
	float canhHinhVuong = 1.0;
	float chieudaihinhchunhat = 5.0;
	float chieuronghinhchunhat = 3.0;
	float bankinhhinhtron = 2.5;
	const float pi = 3.14;
	float chuvihinhvuong = 4 * canhHinhVuong;                                                         
	float dientichhinhvuong = canhHinhVuong * canhHinhVuong;
	float chuvihinhchunhat = 2*(chieudaihinhchunhat + chieuronghinhchunhat);
	float dientichhinhchunhat = chieudaihinhchunhat * chieuronghinhchunhat;
	float chuvihinhtron = 2 * pi * bankinhhinhtron;
	float dientichhinhtron = pi * bankinhhinhtron * bankinhhinhtron;
	printf("chu vi hinh vuong %.f\n",chuvihinhvuong); 
	printf("dien tich hinh vuong %.f\n",dientichhinhvuong);
	printf("chu vi hinh chu nhat %.f\n",chuvihinhvuong); 
	printf("dien tich hinh chu nhat %.f\n",dientichhinhvuong);
	printf("chu vi hinh tron %.f\n",chuvihinhtron); 
	printf("dien tich hinh tron %.f\n",dientichhinhtron); 
}
