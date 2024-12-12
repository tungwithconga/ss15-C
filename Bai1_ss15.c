#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100]; 
    int letters = 0, digits = 0, specials = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++; 
        } else if (isdigit(str[i])) {
            digits++; 
        } else if (str[i] != '\n') {
            specials++; 
        }
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu la ky tu dac biet: %d\n", specials);

    return 0;
}

