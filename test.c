#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "111111";

    printf("请输入密码：");
    scanf("%s", password);

    if (strcmp(password, correctPassword) == 0) {
        printf("密码正确，欢迎访问！\n");
    } else {
        printf("密码错误，拒绝访问。\n");
    }

    return 0;
}