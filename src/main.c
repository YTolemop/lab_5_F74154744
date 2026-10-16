#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/reverse.h"

int main(void)
{
    const char *src = "F74154744";
    char *dst = malloc(strlen(src) + 1);

    if (dst == NULL) {
        perror("malloc");
        return 1;
    }

    reverse(dst, src);
    printf("%s\n", dst);

    free(dst);
    return 0;
}
