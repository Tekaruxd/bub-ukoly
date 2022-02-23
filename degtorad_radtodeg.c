#include <stdio.h>
#include <math.h>

float degtorad(double deg){
    deg = deg * 0.0174532925;
    return deg; 
}

float radtodeg(double rad){
    rad = rad / 0.0174532925;
    return rad;
}

int main() {
    printf("deg; \trad; \tsin; \tcos;\n");
    for(int i = 0; i<361;i += 30){
        printf("%i;  \t%.3f;\t%.3f;\t%.3f;\n",i, degtorad(i), sin(degtorad(i)), cos(degtorad(i)) );
    }

    return 0;
}