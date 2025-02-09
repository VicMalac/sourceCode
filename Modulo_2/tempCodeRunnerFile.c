int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}, pts1, pts2;
    char pl1[100], pl2[100];
    printf("Player 1: ");
    scanf(" %[^\n]", pl1);
    printf("Player 2: ");
    scanf(" %[^\n]", pl2);

    //calculo dos pontos
    for (int i = 0, n = strlen(pl1); i < n; i++){
        if (pl1[i] >= 'a' && pl1[i] <= 'z'){
            pts1 += points[pl1[i] - 'a'];
            printf("%i\n", pts1);
        }
    }