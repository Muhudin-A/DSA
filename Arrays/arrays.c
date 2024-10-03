#include <stdio.h>

int main (){
	// Array declaration in c  is  data_type array_name [size] = {element separated by commas}
	// or data+type arrray_name [size] for example

	int  marks[5] = {40,32,31,55,86};
	int n =5; 
	//
	//operations in Arrays are
	//1. Traverse
	printf("travesing the element of an array\n");
	for(int i=0;i<(sizeof(marks)/sizeof(marks[0])); i++){
		printf("%d\t", marks[i]);
	}
	// deletion
	printf("\n The original array elements are :\n");
   	for(int i = 0; i<(sizeof(marks)/sizeof(marks[0]));  i++){
      		printf("%d\n", marks[i]);
	}
	for(int i = 1; i<n; i++) {
      	marks[i] = marks[i+1];
      	n = n - 1;
   	}
   	printf("The array elements after deletion :\n");
   	for(int i = 0; i<n; i++){
     		 printf("%d\n", marks[i]);
	}
	// update operation give oanther array 
	int LA[] = {1,3,5,7,8};
   	int k = 3, z = 5, item = 10;
   	int i, j;
   	printf("The original array elements are :\n");
   	for(i = 0; i<z; i++) {
   	   printf("LA[%d] = %d \n", i, LA[i]);
  	 }
  	 LA[k-1] = item;
  	 printf("The array elements after updation :\n");
  	 for(i = 0; i<z; i++) {
  	    printf("LA[%d] = %d \n", i, LA[i]);
  	 }
	return(0);
}
		
