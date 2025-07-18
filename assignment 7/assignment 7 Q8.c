void main() {
	int arr[100];
	int arr1[30],arr2[50],merge[40];
	int n1,n2,i,j;

    	printf("Enter number of elements in first array: ");
        	scanf("%d",&n1);

    	printf("Enter %d elements of first array :\n",n1);
        	for(int i = 0; i < n1; i++) {
	        	scanf("%d",&arr1[i]);
	}

	     printf("Enter number of elements in second array: ");
        	scanf("%d",&n2);

       	printf("Enter %d elements of second array :\n",n2);
        	for(int i = 0; i < n2; i++) {
		      scanf("%d",&arr2[i]);
	}
	        for(i=0 ; i<n1 ; i++) {
	    	merge[i]=arr1[i];
	}
         	for(j=0 ; j<n2 ; j++) {
	    	merge[i+j]=arr2[j];
	}

      	printf("merged array is \n");
        	for(i = 0; i < n1 + n2; i++) {
	  	printf("%d",merge[i]);
	}
}