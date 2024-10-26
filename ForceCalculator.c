#include<stdio.h>
float force_value(float , float );
int main()
{
    float mass, force, acceralation;
    printf("Enter Mass(in kilograms) : ");
    scanf("%f", &mass);
        printf("Enter acceralation(in metre/second^2) : ");
    scanf("%f", &acceralation);
    
    force = force_value(mass, acceralation);
    printf("The Force = %f Newton", force);
}

float force_value(float m, float acc)
{
    float _force;
    _force = m * acc ;
    return(_force);
}