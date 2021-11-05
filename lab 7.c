#include <stdio.h>


enum music { // перечисление
    classics,
    pop,
    rock,
    rap,
    new_age,
    electronics
};

struct Triangle {
    int point_1[2];
    int point_2[2];
    int point_3[2];

};

struct Card_reader { //объединение
    unsigned included: 1;
    unsigned sd_card: 1;
    unsigned compact_flash_card: 1;
    unsigned MemoyStick_card: 1;

};

union unity {   // объединение исп одно и то же расположение памяти.размер объедин равен размеру нибольшь члена
    struct Card_reader comprise; //вкл
    int write;

};

int main() {
    enum music value;
    value = rock;
    printf("number: %d\n", rock + 1); // 3 по счету
    struct Triangle triangle = {
            .point_1={0, 0},
            .point_2={0, 10},
            .point_3={10, 0}

    };
    int square;
    square=(triangle.point_2[1] * triangle.point_3[0]) / 2;
    printf("square triangle: %d\n", square); // площадь треугольника


    union unity arg;
    int contain; // содерж
    scanf("%x", &contain);
    arg.write = contain;


    printf("included:%d\n", arg.comprise.included);
    printf("sd_card:%d\n", arg.comprise.sd_card);
    printf("compact_flash_card:%d\n", arg.comprise.compact_flash_card);
    printf("MemoyStick_card:%d\n", arg.comprise.MemoyStick_card);


    return 0;

}
