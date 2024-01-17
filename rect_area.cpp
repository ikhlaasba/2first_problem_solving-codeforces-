#include<stdio.h>
#include <stdlib.h>

int side_length( int mat [4][2]  ){
	int test = -1;
    int pos = 2;
    int x ;
    while (test == -1 ){
    	if (mat [0][0]!=mat [pos][0]){
    		test = 1;
    		x = mat [pos][0] ;
			}
		else{
			pos++;
			}
		}
	int length = abs ( mat [0][0]-x);	
	int area = length * length ;
	return area ;
	}
int main (){
	//number of testcases
	int t ;
	do {
		scanf("%d",&t);
	}while( t < 1 || t > 100);
	int res[t];
	//coordinates of the corners of the square of each case 
	for ( int k = 0 ; k < t ; k++){
	    int mat[4][2];
	    for( int i = 0 ; i < 4 ; i++){
            scanf("%d  %d", &mat[i][0], &mat[i][1]);
    	}
        res[k] = side_length(mat);
    }
    //printing areas 
    for ( int i = 0 ; i < t ; i++){
    	printf(" %d \n",res[i]);
	}
	
	
	return 0 ;
}
