#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: calculator <operation> <operand1> <operand2>\n");
        return 1;
    }

    char *op = argv[1];
    char *a = argv[2];
    char *b = argv[3];
    double r = 0;

    if (strcmp(op, "add") == 0) {
        r = _add(atof(a), atof(b));
    } else if (strcmp(op, "sub") == 0) {
        r = _sub(atof(a), atof(b));
    } else if (strcmp(op, "mul") == 0) {
        r = _mul(atof(a), atof(b));
    } else if (strcmp(op, "div") == 0) {
        r = _div(atof(a), atof(b));
    } else if (strcmp(op, "carre") == 0) {
        r = _carre(atof(a));
    } else {
        printf("Unknown operation: %s\n", op);
        return 1;
    }

    printf("%lf\n", r);
    return 0;
}
