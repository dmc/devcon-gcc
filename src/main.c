#include <stdio.h>
#include "calc.h"

int main() {
    int a = 1;
    int b = 2;
    int ret = add(a, b);

    printf("add %d+%d = %d\n", a, b,ret);
}
