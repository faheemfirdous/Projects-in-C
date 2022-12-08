    // finding transpose of a matrix
    int temp;
	int a[10][10],i, j,transpose[10][10],r ,c;          
  	printf("enter the size of the matrix:");
	scanf("%d \n%d\n",&r,&c);
	
	// taking input
	printf ("Enter the integer elments of the matrix row wise:\n");
	for ( i=0;i<r;++i)
	{
		for( j=0;j<c;++j)
		{
			scanf ("%d ", &a[i][j]);
		}
	}
    // printing the entered martix
     printf("\nEntered matrix is:\n");
     for (i=0; i<r; ++i)
	 {
     	for(j=0; j<c; ++j)
     	{
     		printf("%d ", a[i][j]);
     	}
     	printf("\n");
	 }
	// transposing matrix
	for( i = 0; i < r; ++i)
	{
		for( j = 0; j < c; ++j)
		{ 	
			transpose[j][i] =a[i][j];
	    }	  
	}
	// printing transposed matrix
	
	printf("\transpose of the matrix:\n");
	for( i = 0; i<r; ++i) 
	{
		for( j = 0; j<c; ++j)
		{
			printf("%d  ", transpose[i][j]);
		}
		printf("\n");
    }
}
