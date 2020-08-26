#include <stdio.h>

int main() {
    int A[30][5] = {0}, B[30] = {0}, input_num = 0;
    for (int i = 0; i < 30; i++) {
        int tmp_sum = 0;
        for (int n = 0; n < 5; n++) {
            printf("请输入第%d名学生的第%d门课程成绩\n", i + 1, n + 1);
            scanf("%d", &A[i][n]);
            if (A[i][n] == -1) {
                tmp_sum = -1;
                break;
            }
            tmp_sum += A[i][n];
        }
        if (tmp_sum == -1) {
            break;
        }
        input_num++;
        B[i] = tmp_sum / 5;
    }
    for (int i = 0; i < input_num; i++) {
        printf("第%d名学生的平均分:%d\n", i + 1, B[i]);
    }
    while(1){
        getchar();
    }
    return 0;
}