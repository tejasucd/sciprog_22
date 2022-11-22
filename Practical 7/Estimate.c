#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n){

    //Checking the value is negative or not
    if(n<0){
        printf("Error : number should be positive");
        return(-1);
    }
    else if (n==0){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }

}


int main(void){

    //Declaring variables
    int order;
    double e, *terms;

    //User input
    printf("Enter the required polynomial order \n");
    if(scanf("%d",&order) !=1){
        printf("Did not enter a number");
        return 1;
    }

    //Allocate space for terms array
    terms=malloc(order*sizeof(double));
    for(int i=0; i<order;i ++){
        terms[i]= 1.0/(double)factorial(i+1);
        printf("e term for order %d is %1.14lf", order, terms[i]);
    }

    e=1.0;
    for(int i=0; i<order;i++){
        e=e+terms[i];
    }

    free(terms);

    printf("\ne is estimated as %1.14lf,  with difference %1.14lf,   e,  e-exp(1.0)");

    return 0;

}
