#include <stdio.h>

int main(void) {
    int uninitialized_var; /* Błąd: zmienna niezainicjalizowana */
    int x = 5;
    
    /* Błąd logiczny: przypisanie '=' zamiast porównania '==' */
    if (x = 10) { 
        printf("Jedrzej Stachor\n");
    }
    
    return 0;
}
