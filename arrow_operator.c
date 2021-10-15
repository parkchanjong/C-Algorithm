#include <stdio.h>

struct posTag {
    int x;
    int y;
};

int main()
{
    struct posTag a = {1, 2};
    struct posTag *pa = &a;

    printf("pa->x = %d, (*pa).x = %d\n", pa->x, (*pa).x);
    printf("pa->y = %d, (*pa).y = %d\n", pa->y, (*pa).y);

    return 0;
}