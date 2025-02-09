#include <stdio.h>

float _fh_to_cel(float fh){
    return (fh-32.0) * (5.0/9.0);
}

float _cel_to_fh(float cel){
    return (cel * (9.0/5.0))+32.0;
}

void print_header_cf() {
    printf("Celsius\tFahr\n");
    printf("---------------\n");
}

void print_header_fc() {
    printf("Fahr\tCelsius\n");
    printf("---------------\n");
}

int get_range_temp() {
    int input;
    printf("Insert the range of the temps:\n");
    scanf("%d",&input);
    return input;
}

float get_advance_rate() {
    float input;
    printf("Insert the advance rate:\n");
    scanf("%f",&input);
    return input;
}

void fh_to_cel(float step, int upper) {
    int lower;
    float fahr;

    lower = 0;
    fahr = lower;

    print_header_fc();

    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, _fh_to_cel(fahr));

        fahr = fahr + step;
    }
}

void cel_to_fh(float step, int upper) {
    int lower;
    float cel;

    lower = 0;
    cel = lower;

    print_header_cf();

    while (cel <= upper) {
        printf("%3.0f %6.1f\n", cel, _cel_to_fh(cel));

        cel = cel + step;
    }
}

int main() {
    int input;

    printf("Escolha a conversão:\n");
    printf("1 - Celsius to Fahr\n");
    printf("2 - Fahr to Celsius\n");

    scanf("%d",&input);

    switch (input)
    {
    case 1:
        cel_to_fh(get_advance_rate(),get_range_temp());
        break;
    case 2: 
        fh_to_cel(get_advance_rate(),get_range_temp());
        break;
    
    default:
        printf("Invalid input! Please, try again.\n\n");
        break;
    }

    return 0;
}