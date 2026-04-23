#include <stdio.h>
#include <string.h>

int main() {
    int a = 5;
    int b = 10; 
    int sum = a + b;


    printf("Ingrese su contraseña: ");
    char password[20];
    scanf("%s", password);
    if (strcmp(password, "123456") == 0) {
        printf("The sum of %d and %d is %d\n", a, b, sum);
        printf("Creado por: Jose Luis Manon");
    } else {
        printf("Contraseña incorrecta. Acceso denegado.\n");
    }
    
    return 0;
}
