#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int A, B, C;

    printf("Введите значения параметров A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
        printf("КАЛИБРОВКА УСПЕШНА\n");
    }
    else {
        printf("КАЛИБРОВКА НЕУДАЧНА\n");
    }

    return 0;
}