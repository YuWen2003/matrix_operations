#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], diff[3][3];
    int i, j;


    printf("輸入第一個3*3矩陣：\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("輸入第二個3*3矩陣：\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }



    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }



    printf("兩矩陣相加的結果：\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("兩矩陣相減的結果：\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
