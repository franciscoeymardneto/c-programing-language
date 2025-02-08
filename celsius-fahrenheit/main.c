#include <stdio.h>

//  oC=(5/9)(oF-32)

int fh_to_cel(int fh){
    return 5 * (fh-32) / 9;
}

int main() {
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        printf("%d\t%d\n", fahr, fh_to_cel(fahr));

        fahr = fahr + step;
    }
        
    return 0;
}