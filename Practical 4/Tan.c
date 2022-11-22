#include <stdio.h>
#include <math.h>

// Function to calculate radian
float deg_to_rad(float theta){

    return M_PI * theta/180.0;
}

// Function to calculate trapezoidal rule
float trap( float a ,float b, int N, float function_array[N + 1]){

    float sum= function_array[0] + function_array[N];
    for(int i=1; i<N; i++){
        sum=sum+ 2* function_array[i];
    }
    return (b-a) * (sum)/(2*N);

}

int main(void){
    
    //Declaring variables
    float start=0, end=60;
    int N=1000000;
    float step_size=(end-start)/N;
    float tan_arr[N+1];

    //Making Tan array
    for(int i=0; i<=N;i++){
        tan_arr[i] = tan(deg_to_rad(step_size *i));
    }

    // Getting the answer from the function created above
    float ans = trap(deg_to_rad(start), deg_to_rad(end), N, tan_arr);
    printf("The answer is  %f\n",ans);
    return 0;


}