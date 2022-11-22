#include <stdio.h>
#include <math.h>

int main(void) {

// Declare variables
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

// Intialise 4-byte integer
   inum = 33554431;
// Convert to 4-byte float 
   fnum = (float) inum;


//Converting to binary number (string)
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

// string terminated
   binnum[i] = '\0';
       
//Computing no. of digits
   numdigits = ceil(logf(fnum)/logf(2));
   printf("The no. of digits is %d\n",numdigits);

// printing number in various forms
   printf("inum=%d,  fnum=%f,  inum in binary=%s\n",inum,fnum,binnum);

}
