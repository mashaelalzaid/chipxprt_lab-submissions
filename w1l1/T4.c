#include <stdio.h>
void calculate_currents(float V1,float R1, float R2, float R3){
        double R23 = (R2*R3)/(R2+R3);
        double i1 = V1/ (R1 + R23);
        double V23 = V1 - i1 * R1;
        double i2= V23/R2;
        double i3= V23/R3;
        printf("value of i1 is %f\n", i1);
        printf("value of i2 is %f\n", i2);
        printf("value of i3 is %f\n", i3); }

int main(){
        float V1, R1, R2,R3;
        printf("enter V1: ");
        scanf("%f", &V1);
        printf("enter R1: ");
        scanf("%f", &R1);
        printf("enter R2: ");
        scanf("%f", &R2);
        printf("enter R3: ");
        scanf("%f", &R3);

        calculate_currents(V1,R1,R2,R3);

        return 0;}
