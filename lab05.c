#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], diff[3][3];
    int i, j;


    printf("��J�Ĥ@��3*3�x�}�G\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("��J�ĤG��3*3�x�}�G\n");
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



    printf("��x�}�ۥ[�����G�G\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("��x�}�۴���G�G\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
