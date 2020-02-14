#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#define ll long long
#define MAX 1000007
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))//以上有部分为缺省源，并没有全部被使用；此程序在devc++上运行没问题，在visual stdio 2019上把scanf()换为scanf_s()即可
    int sum, pan[5] = { 44,10 };
int a[][2] = { {-63,-29},{-46,-69},{-74,-2},{-56,-3},{-53,-60},{-50,-27},{-63,-7},{-58,-33},{-80,-53},{-66,-59},{-54,-82} };
int i, l, j, len, mark, lenn[5];
char d[20], kan[10], qian[10], ad[10], zheng[10], deng[10];;
void add() {
    l = strlen(d); len = 0;
    for (i = 0; i < l; i += 2) {
        for (j = 0; j <= 10; j++) {
            if ((int)d[i] == a[j][0] && (int)d[i + 1] == a[j][1]) {
                lenn[len++] = j; 
                break;
            }
        }
    }
    if (len == 1) {
        mark = lenn[len - 1];
    }
    else if (len == 2) {
        if (lenn[0] == 10)mark = lenn[0] + lenn[1];
        else mark = 10 * lenn[0];
    }
    else if (len == 3) {
        mark = 10 * lenn[0] + lenn[2];
    }
    if ((int)ad[0] == -68 && (int)ad[1] == -11) {
        sum -= mark;
    }
    else sum += mark;
    //printf("%d\n",sum);
    memset(d, 0, sizeof(d));
    return;
}
int main() {
    scanf("%s%s%s%s", zheng, qian, deng, d);
    add();
    while (scanf("%s%s", qian, ad)) {
        if ((int)qian[0] == -65 && (int)qian[1] == -76)break;
        scanf("%s", d);
        add();
    }
    if (sum / 10 == 0) {
        switch (sum) {
        case 0:printf("零"); break;
        case 1:printf("一"); break;
        case 2:printf("二"); break;
        case 4:printf("四"); break;
        case 3:printf("三"); break;
        case 5:printf("五"); break;
        case 6:printf("六"); break;
        case 7:printf("七"); break;
        case 8:printf("八"); break;
        case 9:printf("九"); break;
        }
    }
    else
    {
        mark = sum / 10;
        if (mark == 1)printf("十");
        else {
            switch (mark) {
            case 2:printf("二"); break;
            case 4:printf("四"); break;
            case 3:printf("三"); break;
            case 5:printf("五"); break;
            case 6:printf("六"); break;
            case 7:printf("七"); break;
            case 8:printf("八"); break;
            case 9:printf("九"); break;
            }
            printf("十"); mark = sum % 10;
        }
        switch (mark) {
        case 1:printf("一"); break;
        case 2:printf("二"); break;
        case 4:printf("四"); break;
        case 3:printf("三"); break;
        case 5:printf("五"); break;
        case 6:printf("六"); break;
        case 7:printf("七"); break;
        case 8:printf("八"); break;
        case 9:printf("九"); break;
        }
    }
    return 0;
}
