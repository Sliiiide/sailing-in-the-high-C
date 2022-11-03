#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    float val_One;
    float val_Two;
    char op;
    float ans;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &val_One, &op, & val_Two);

    if (op == '+') {
        printf("%lf", ans = (val_One) + (val_Two));
    }
    else if (op == '-') {
        printf("%f", ans = (val_One) - (val_Two));
    }
    else if (op == '*') {
        printf("%f", ans = (val_One) * (val_Two));
    }
    else if (op == '/') {
        printf("%f", ans = (val_One) * (val_Two));
    }

}