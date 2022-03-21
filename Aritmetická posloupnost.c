#include <stdio.h>

int main() {
    int n = 7;
    int a1 = 0; 
    int d = 5;
    int pole[n];
    pole[0] = a1;

    for(int i = 1; i < n; i++){
        pole[i] = pole[i-1] + d;
        printf("%d,",pole[i]);
        }
    return 0;
}
