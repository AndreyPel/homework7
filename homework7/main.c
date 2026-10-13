#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    char ch;

    setlocale(LC_ALL, "RUS");
    printf("Введите знак препинания: ");

    scanf("%c", &ch);

    switch (ch) {
    case '.':
        printf("Точка\n");
        break;
    case ',':
        printf("Запятая\n");
        break;
    case ';':
        printf("Точка с запятой\n");
        break;
    case ':':
        printf("Двоеточие\n");
        break;
    case '!':
        printf("Восклицательный знак\n");
        break;
    case '?':
        printf("Вопросительный знак\n");
        break;
    }

}
