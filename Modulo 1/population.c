#include <stdio.h>

int main(void) {
    int init = 10;
    int end, grow = 0, dead, i = 0;
    do{
        printf("Start Size: ");
        scanf("%d", &init);
        //printf("Population End: ");
        //scanf("%d", &end);
    }while(init < 9 || init == end || init > end);
    
    do{
        printf("End Size: ");
        scanf("%d", &end);
    }while(init < 9 || init == end || init > end);

    while (init < end){
        grow = init / 3;
        dead = init / 4;
        init += grow - dead;
        i = i + 1;
    }
    printf("Years: %d\n", i);
}
