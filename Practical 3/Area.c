#include <stdio.h>
#include <math.h>

int main(void){
    
    //Declaring variables
    int N=12,i;
    float a=0.0, b_deg=60.0,b_rad,area,mult_rad;


    //Converting b_deg=pi/3 to radian
    b_rad=(M_PI * b_deg)/180.0;
    printf("pi/3 in Radians = %f\n",b_rad);


    //Sum of tan(a) & tan(b)
    area=tan(a)+tan(b_rad);

    // Calculating area at pts x1, x2 ,.........x11 by multiplying by 2
    //adding them together
    for(i=5;i<60;i=i+5){
        area=area+2*tan((M_PI*i)/180.0);
    }

    //Multiplying partial area by (pi/3)/(2*12)
    //Convert it to radian
    mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
    area=mult_rad*area;

    printf("Approximated = %f,    Exact = %f\n",area,log(2.0));

    return 0;

}