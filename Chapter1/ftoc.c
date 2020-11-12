#include <stdio.h>

main() {
    float fahr, celc;
    int lower, upper,step;

    lower = 0;
    upper = 100;
    step = 5;

    printf("%27s", "Fahrenheit to Celcius\n");
    int headerCounter = 0;
    while(headerCounter < 32) {
        printf("-");
        headerCounter++;
    }
    printf("\n");

    fahr = lower;
    while(fahr <= upper) {
        celc = (5.0/9) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celc); // Not actually associated with c directly, just a part of the ansi standard
        fahr = fahr + step;
    }

    printf("%27s", "Celcius to Fahrenheit\n");
    headerCounter = 0;
    while(headerCounter < 32) {
        printf("-");
        headerCounter++;
    }
    printf("\n");

    celc = lower;
    while(celc <= 100) {
        fahr = celc * (9.0/5.0) + 32;
        printf("%6.1f %3.1f\n", celc, fahr);
        celc+= step;
    }
}

    
