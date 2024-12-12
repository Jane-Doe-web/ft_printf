#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    /*{
        char a = 'Y';
        int result = ft_printf("HELLO WORLD, %c\n", a);
        int result1 = printf("HELLO WORLD, %c\n", a);
        printf("%d\n%d\n", result, result1);
    }

    {
        char *str = "BBBBBitte";
        int result2 = ft_printf("HELLO WORLD, %s\n", str);
        int result3 = printf("HELLO WORLD, %s\n", str);
        printf("%d\n%d\n", result2, result3);
    }

    {
        int n = -98724;
        int result4 = ft_printf("Hi, %i\n", n);
        int result5 = printf("Hi, %i\n", n);
        printf("%d\n%d\n", result4, result5);
    }

    {
        int n = -676790;
        int result6 = ft_printf("Hi, %d\n", n);
        int result7 = printf("Hi, %d\n", n);
        printf("%d\n%d\n", result6, result7);
    }

    {
        unsigned int n = 4294967295;
        int result8 = ft_printf("Hi, %u hel%ulo\n", n, n);
        int result9 = printf("Hi, %u hel%ulo\n", n, n);
        printf("%d\n%d\n", result8, result9);
    }
    
    {
        unsigned int n = 755;
        int result10 = ft_printf("Hi, %x hello\n" , n);
        int result11 = printf("Hi, %x hello\n", n);
        printf("%d\n%d\n", result10, result11);
    }

    {
        unsigned int n = 755;
        int result12 = ft_printf("Hi, %X hello\n" , n);
        int result13 = printf("Hi, %X hello\n", n);
        printf("%d\n%d\n", result12, result13);
    }

    {
        char *str = "This is a string";
        int result14 = ft_printf("Hi, %p hello\n" , str);
        int result15 = printf("Hi, %p hello\n", str);
        printf("%d\n%d\n", result14, result15);
    }
    
    {
    	int result16 = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    	int result17 = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    	printf("%d\n%d\n", result16, result17);
	}
	
	{
		char *s1 = "cspdiuxX%";
		char *s3 = "jest koshka";
		int i1 = 0;
		int i2 = INT_MIN;
		char *s2 = "";
		int *p = NULL;
		
		int result18 = ft_printf("%s %s %d %i %s %p \n", s1, s3, i1, i2, s2, p);
		int result19 = printf("%s %s %d %i %s %p \n", s1, s3, i1, i2, s2, p);
		printf("%d\n%d\n", result18, result19);
	}*/

	ft_printf("Custom %%%\n");
	printf("\n\nOG %%%\n");
}
