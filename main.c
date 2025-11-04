

#include "stdio.h"
#include "unistd.h"
#include "ft_printf.h"


int main() {
    char *s = "lalala ";
    int x = printf(" s: h                %%%           jzxcbxcbzxzcbxcz  ");
    int y = ft_printf(" a: h             %%%        jzxcbzxcbczxbcxz  ");
    printf("\n{%d}  {%d}\n", x, y);
}
