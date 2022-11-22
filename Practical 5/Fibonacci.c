#include <stdio.h>
#include <math.h>


// Function of fibonacci
void fibonacci( int *a, int *b){
    //declaring variable
    int next;

    //*a=f(n-1)  *b=f(n-2)   next=f(n)
    next=*a+*b;

    //*a=f(n)   *b=f(n-1)
    *b=*a;
    *a=next;
}

int main(){

    //Declaring variables
    int n, f1=1,f0=0;

    //Prompting user to enter a positive integer
    printf("Enter a positive integer \n");
    scanf("%d",&n);

    //Check for user input correct or not
    if(n<1){
        printf("The number is not positive\n");
        exit(1);
    }

    //Printing first two numbers of sequence
    printf("The Fibonacci sequence is: \n");
    printf("%d, %d, ",f0,f1);

    for (int i=2; i<=n;i++){
        fibonacci(&f1,&f0);
        // Printing the next value from the function 
        printf("%d, ",f1);
        
        
        if(((i+1)%10) == 0){
            printf("\n");
        }
    }
    return 0;
}