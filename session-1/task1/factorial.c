
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
    int n = 1;

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for (int k=20; k > n; --k){

      f[k] = k * (k - n);
      printf("%d\n", f[k]);
      
   }
    return 0;
 }
