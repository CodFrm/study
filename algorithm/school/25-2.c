#include <stdio.h>

int main() {
    int s_m = 0, s_d = 0, e_m = 0, e_d = 0, num = 1, cut_num = 0;
    printf("开始时间:\n");
    scanf("%d %d", &s_m, &s_d);
    printf("结束日期:\n");
    scanf("%d %d", &e_m, &e_d);
    s_m = s_m * 31 + s_d;  //在家里呆的开始日期
    e_m = e_m * 31 + e_d;  //去学校的日期
    s_d = 7 * 31 + 1;      //开始日期
    e_d = 8 * 31 + 31;     //结束日期
    // day_num = (e_m * 31 + e_d) - (s_m * 31 + s_d) + 1;
    while (s_d < e_d) {
        if (s_d >= s_m) {
            if (s_d >= e_m) {
                break;
            }
            cut_num++;
        }
        s_d += ++num;
    }
    printf("%d\n", cut_num);
    while (1) {
        if (getchar() == 'q') break;
    }
    return 0;
}
