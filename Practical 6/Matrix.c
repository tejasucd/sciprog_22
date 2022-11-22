#include <stdio.h>

int main(void){

    //Declaring variables
    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];

    //Initialising matrices A, B & C
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            A[i][j]=i+j;
        }
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            B[i][j]=i-j;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            C[i][j]=0.0;
        }
    }


    //Performing matrix multiplication
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<p;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
            
        }
    }

    // Printing matrices
    printf("\n Matrix A \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%3.0f",A[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix B \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%3.0f",B[i][j]);
        }
        printf("\n");
    }


    printf("\n Matrix C \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%3.0f",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}