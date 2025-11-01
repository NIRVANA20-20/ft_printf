#include "unistd.h"
#include "stdio.h"
#include "ft_printf.h"
#include "limits.h"
int main(){
    // char *s = "sdadasda";
    printf("\nprintf={%d}:\nft_printf={%d} \n", printf(" %p %p ", LONG_MIN, LONG_MAX), ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
//    ft_printf(NULL );

}