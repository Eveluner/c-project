#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";

    printf("strlen(str) = %zu\n", strlen(str));  // 5
    printf("sizeof(str) = %zu\n", sizeof(str));  // 6 → 包括末尾 '\0'

    return 0;
}
