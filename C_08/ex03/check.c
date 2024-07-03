#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
    point->x = 10;
    point->y = 13;
}
int main(void)
{
    t_point point;
    set_point(&point);
    
    printf("%d",point.x);
    printf("\n%d",point.y);
   
    return (0);
}