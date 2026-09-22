# prac task 3 for vsrv

## poriyadok vipolneniya task'a
```
1. Создать программу в текстовом редакторе
2. Написать программу на Си с использованием вывода на консоль, откомпилировать ее и запустить на выполнение.
3. Создать свой собственный Git репозитарий.
4. Написать программу, в результате которой пользователь выводит текст на экране
5. Ознакомиться с конвенцией кода на языке Си
6. Зафиксировать изменения с помощью Git. 
7. Оформите отчет по практической работе и загрузите его в слот в ваш слот СДО для загрузки заданий.
```

# Код практической работы
```C
#include <stdio.h>

int summator(int x, int y) { return x + y;}

bool equals(int x, int y) { return x == y; }

int main() {
    int pracNum = 3;
    printf("Valentin Dremin, KVBO-21-24, prac № %d\n", pracNum);
    int x, y;
    x = 13;
    y = 13;
    printf("summ of %d and %d = %d\t equals %s\n", x, y, summator(x,y), equals(x,y) ? "true" : "false");
    return 0;
}

```