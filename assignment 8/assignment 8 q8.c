#include<stdio.h>
void mergeArrays(int a[],int n1,int b[],int n2,int c[]) 
{
int i,j;
	
	        for(i=0 ; i<n1 ; i++) {
	         c[i] = a[i];
	}
         	for(j=0 ; j<n2 ; j++) {
	    	c[i+j] = b[j];
	}
}
	void main()
	{
	int a[100] ,b[100];
	int n1,n2,i;
	int c[200];
	
		printf("Enter size:");
        	scanf("%d",&n1);
 	printf("Enter %d elements of second array :\n",n1);
        	for(int i = 0; i < n1; i++) {
		      scanf("%d",&a[i]);
}
	printf("Enter size:");
        	scanf("%d",&n2);

    	printf("Enter %d elements of first array :\n",n2);
        	for(int i = 0; i < n2; i++) {
	        	scanf("%d",&b[i]);
	}
   
	    mergeArrays(a,n1,b,n2,c);
	    
      	printf("merged array is \n");
        for(i = 0; i < n1 + n2; i++) {
	  	printf("%d",c[i]);
	}
}
