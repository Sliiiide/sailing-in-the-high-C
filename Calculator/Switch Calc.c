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

    switch(op) {
        case '/': ans = val_One / val_Two;
            break;
        case '*': ans = val_One * val_Two;
            break;
        case '+': ans = val_One + val_Two;
            break;
        case '-': ans = val_One - val_Two;
            break;
        default: goto fail;
        }

    printf("%.9g%c%.9g =  %.6g\n\n",val_One ,op, val_Two, ans);
        goto exit;
    fail:
        printf("Fail.\n");
    exit:
        return 0;
}
