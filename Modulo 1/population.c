#include <stdio.h>

int main(void) {
    int init, end, grow = 0, dead, i = 0;
    do{
        printf("Start Size: ");
        scanf("%d", &init);
    }while(init < 9);
    
    do{
        printf("End Size: ");
        scanf("%d", &end);
    }while(init > end);

    while (init < end){
        grow = init / 3;
        dead = init / 4;
        init += grow - dead;
        i++;
    }
    printf("Years: %d\n", i);
}
