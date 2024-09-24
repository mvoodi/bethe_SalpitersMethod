#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));
    
    int i = 1;
    int n = 10;
    double b = 3 * M_PI / 2;
    double a = M_PI;
    double ans = 0;
    while(i <= n){
        double random_double = (double)rand() / RAND_MAX;
        double r = (b - a) * random_double;
        double ansforR = sin(r);
    }
}