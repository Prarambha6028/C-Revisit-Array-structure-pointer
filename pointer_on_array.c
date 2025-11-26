/*Array elements working with pointers*/
#include<stdio.h>
int main() {
	int arr[5] = {5,10,15,20,25};
	int i;
	/*for(i=0;i<5;i++){
		printf("Value of arr[%d] = %d\t",i,arr[i]);
		printf("Address of arr[%d] = %p\n",i,&arr[i]);
		*/
		//using pointer
		printf("Value of arr[%d] = %d\t",i,*(arr+i));
		printf("Address of arr[%d] = %p\n",i,arr+i);
	}
	return 0;
}

//‘arr’ denotes the address of 0" element of array 
//(arr+1) will denote the address of the next elemen arr[{1]. Similarly (arr+2) denotes the address of arr[2] and so on.
//he pointer expression (arr+i) denotes the same address as &arr[i].
