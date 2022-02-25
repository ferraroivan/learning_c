#include <stdio.h>

int main(){
    char c;

    /* Input C*/
    printf("Inserire carattere: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z'){
        printf(" %c is small\n", c);
    } else if(c >= 'A' && c <= 'Z'){
        printf(" %c is big\n", c);
    } else if(c >= '0' && c <= '9'){
        printf(" %c is number\n", c);
    } else {
        printf("Nessuno dei precedenti\n");
    }

    return 0;
}