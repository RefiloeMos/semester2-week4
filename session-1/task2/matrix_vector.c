
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */

    for (k=1; k < 4; ++k){
      for (j = 1; j < 4; ++j){
         c[j][k] = a[j][k] + b[k];
      }
    }
    return 0;
 }
