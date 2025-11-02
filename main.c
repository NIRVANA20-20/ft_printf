#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{ 

    int nb = ft_printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    int nb1 =   printf("\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("\nft ==> %d ,, pr ==> %d\n",nb,nb1); 

    return 0;
}


