#include <stdio.h>

int main(){
    int current_val;
    int max=0, middle=0;
    int i=0;

    do{
        printf("Iter. %d, max=%d, middle=%d\n", i++, max, middle);
        printf("Inserire valore: ");
        scanf("%d", &current_val);

        if(current_val == 0){
            break;
        }

        if(current_val > max){
            middle = max;
            max = current_val;
        } else if (current_val > middle){
            middle = current_val;
        }
    }while(current_val!=0);

    printf("max=%d, middle=%d\n",max, middle);
    return 0;
    
}
