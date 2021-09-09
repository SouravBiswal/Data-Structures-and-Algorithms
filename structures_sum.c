#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    int x;
    int y;
} vec;

vec sumvector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2;
    v1.x = 2;
    v1.y = 3;

    v2.x = 4;
    v2.y = 5;
    vec sum = sumvector(v1, v2);
    printf("Sum of X is : %d and Sum of Y is : %d", sum.x, sum.y);
}
