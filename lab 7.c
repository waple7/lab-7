#include <stdio.h>

enum music{
    classics,
    pop,
    rock,
    rap,
    new_age,
    electronics
};
struct coordinates{
    int point_1[2];
    int point_2[2];
    int point_3[2];
};
struct unification{
    unsigned included:1;
    unsigned sd_card:1;
    unsigned compact_flash_card:1;
    unsigned MemoyStick_card:1;

};
union player{
    struct unification comprise;
    int write;
};
int main(){
    enum music value;
    value=rock;
    printf("number: %d\n", rock+1);
    struct coordinates triangle={
            .point_1={0,0},
            .point_2={0,10},
            .point_3={10,0}
    };
    int square=(triangle.point_2[1]*triangle.point_3[0])/2;
    printf("square triangle: %d\n",square);


    union player arg;
    int contain;
    scanf("%x",&contain);
    arg.write=contain;
    printf("values:");
    printf("%d ",arg.comprise.included);
    printf("%d ",arg.comprise.sd_card);
    printf("%d ",arg.comprise.compact_flash_card);
    printf("%d ",arg.comprise.MemoyStick_card);


    return 0;
}

