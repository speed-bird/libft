/Users/jr/Library/Python/3.7/bin/norminette

***MEMSET
#include <stdio.h>
#include <string.h>
int     main(void)
{
    printf("\n");
    printf("=> OUTPUT\n");
    char my_str[] = "Hello";
    printf("BFR : %s\n", my_str);
    ft_memset(my_str + 1, '*', 2 * sizeof(char));
    printf("AFT : %s\n", my_str);
    
    printf("----------------------------------\n");

    printf("=> SHOULD BE\n");
    char my_str2[] = "Hello";
    printf("BFR : %s\n", my_str2);
    memset(my_str2 + 1, '*', 2 * sizeof(char));
    printf("AFT : %s\n", my_str2);
    printf("\n");
}


***BZERO
#include <string.h>
#include <stdio.h>
int     main(void)
{
    printf("\n");
    printf("=> OUTPUT\n");
    char my_str[] = "Goodmorning";
    printf("BFR : %s\n", my_str);
    ft_bzero(my_str + 4, 2);
    printf("AFT : %s\n", my_str);
    
    printf("----------------------------------\n");

    printf("=> SHOULD BE\n");
    char my_str2[] = "Goodmorning";
    printf("BFR : %s\n", my_str2);
    bzero(my_str2 + 4, 2);
    printf("AFT : %s\n", my_str2);
    printf("\n");
}

***MEMCPY
#include <string.h>
#include <stdio.h>
int     main(void)
{
    printf("\n");
    printf("=> OUTPUT\n");
    char my_src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char my_dest[] = "abcdefghijklmnopqrstuvwxyz";
    printf("BFR : %s\n", my_src);
    ft_memcpy(my_src, my_dest, 15);
    printf("AFT : %s\n", my_src);
    printf("=> SHOULD BE\n");
    char my_src2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char my_dest2[] = "abcdefghijklmnopqrstuvwxyz";
    printf("BFR : %s\n", my_src2);
    memcpy(my_src2, my_dest2, 15);
    printf("AFT : %s\n", my_src2);

    printf("----------------------------------\n");

    printf("=> OUTPUT\n");
    int my_src3[] = {1, 1, 1, 1, 1};
    int my_dest3[] = {2, 2, 2, 2, 2};
    printf("BFR : %d", my_src3[0]);
    printf("%d", my_src3[1]);
    printf("%d", my_src3[2]);
    printf("%d", my_src3[3]);
    printf("%d\n", my_src3[4]);
    ft_memcpy(my_src3, my_dest3, 3 * sizeof(int));
    printf("AFT : %d", my_src3[0]);
    printf("%d", my_src3[1]);
    printf("%d", my_src3[2]);
    printf("%d", my_src3[3]);
    printf("%d\n", my_src3[4]);
    printf("=> SHOULD BE\n");
    int my_src4[] = {1, 1, 1, 1, 1};
    int my_dest4[] = {2, 2, 2, 2, 2};
    printf("BFR : %d", my_src4[0]);
    printf("%d", my_src4[1]);
    printf("%d", my_src4[2]);
    printf("%d", my_src4[3]);
    printf("%d\n", my_src4[4]);
    memcpy(my_src4, my_dest4, 3 * sizeof(int));
    printf("AFT : %d", my_src4[0]);
    printf("%d", my_src4[1]);
    printf("%d", my_src4[2]);
    printf("%d", my_src4[3]);
    printf("%d\n", my_src4[4]);

    printf("----------------------------------\n");

    printf("\n");
    printf("=> OUTPUT\n");
    char *my_src5 = NULL;
    char *my_dest5 = NULL;
    printf("BFR : %s\n", my_src5);
    ft_memcpy(my_src5, my_dest5, 15);
    printf("AFT : %s\n", my_src5);
    printf("=> SHOULD BE\n");
    char *my_src6 = NULL;
    char *my_dest6 = NULL;
    printf("BFR : %s\n", my_src6);
    memcpy(my_src6, my_dest6, 15);
    printf("AFT : %s\n", my_src6);
}


***MEMCCPY
#include <string.h>
#include <stdio.h>
int     main(void)
{
    printf("\n=> OUTPUT\n");
    char my_dest[11] = "0123456789";
    char my_src[] = "bonjour";
    printf("BFR : %s\n", my_dest);
    char *ptr;
    ptr = ft_memccpy(my_dest, my_src, 'j', 5);
    printf("AFT : %s\n", my_dest);
    printf("PTR : |%p| = 0x0 or %p ?\n\n", ptr, my_dest + 4);

    printf("=> SHOULD BE\n");
    char my_dest2[11] = "0123456789";
    char *my_src2 = "bonjour";
    printf("BFR : %s\n", my_dest2);
    char *ptr2;
    ptr2 = memccpy(my_dest2, my_src2, 'j', 5);
    printf("AFT : %s\n", my_dest2);
    printf("PTR : |%p| = 0x0 or %p ?\n\n", ptr2, my_dest2 + 4);

	printf("\n-----------------------\n");

	printf("\n=> OUTPUT\n");
    char my_dest3[11] = "0123456789";
    char my_src3[] = "bonjour";
    printf("BFR : %s\n", my_dest3);
    char *ptr3;
    ptr3 = ft_memccpy(my_dest3, my_src3, 'j', 0);
    printf("AFT : %s\n", my_dest3);
    printf("PTR : |%p| = 0x0 or %p ?\n\n", ptr3, my_dest3 + 4);

    printf("=> SHOULD BE\n");
    char my_dest4[11] = "0123456789";
    char *my_src4 = "bonjour";
    printf("BFR : %s\n", my_dest4);
    char *ptr4;
    ptr4 = memccpy(my_dest4, my_src4, 'j', 0);
    printf("AFT : %s\n", my_dest4);
    printf("PTR : |%p| = 0x0 or %p ?\n\n", ptr4, my_dest4 + 4);
}

***MEMMOVE
#include <stdio.h>
#include <string.h>
int     main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	char strtest[] = "Hello";
	// ft_memmove(0, "You", 2); 		/* Should segfault */
	// ft_memmove(strtest, 0, 2); 		/* Should segfault */
	ft_memmove(0, 0, 2); 			/* Should NOT segfault */
	ft_memmove(0, 0, 0); 			/* Should NOT segfault */
	ft_memmove(0, "You", 0); 		/* Should NOT segfault */
	ft_memmove(strtest, 0, 0); 		/* Should NOT segfault */
	ft_memmove(strtest, "You", 0); 	/* Should NOT segfault */
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    printf("=> OUTPUT\n");
    char my_src[] = "1234567890abcdef";
    printf("BFR : %s\n", my_src);
    ft_memmove(my_src + 2, my_src, 14);
    printf("AFT : %s\n", my_src);
    printf("=> SHOULD BE\n");
    char my_src2[] = "1234567890abcdef";
    printf("BFR : %s\n", my_src2);
    memmove(my_src2 + 2, my_src2, 14);
    printf("AFT : %s\n", my_src2);

}

***MEMCHR
#include <string.h>
#include <stdio.h>
int     main(void)
{
    printf("\n");
    printf("=> OUTPUT\n");
    char my_src[] = "1234567890abcdef";
    printf("BFR : %s\n", my_src);
    printf("AFT : %s\n", ft_memchr(my_src, 55, 26));

    printf("=> SHOULD BE\n");
    char my_src2[] = "1234567890abcdef";
    printf("BFR : %s\n", my_src2);
    printf("AFT : %s\n", memchr(my_src2, 55, 26));
    printf("\n");
}

***MEMCMP
#include <string.h>
#include <stdio.h>
int main(void)
{
    printf("\n");
    char *s1 = "Hello";
    char *s2 = "HellO";
    printf("=> OUTPUT      : %d\n", ft_memcmp(s1, s2, 5));
    printf("=> SHOULD BE   : %d\n", memcmp(s1, s2, 5));
    printf("\n");
    printf("--------------------------\n");
    printf("\n");
    char *s3 = "4";
    char *s4 = "5";
    printf("=> OUTPUT      : %d\n", ft_memcmp(s3, s4, 1));
    printf("=> SHOULD BE   : %d\n", memcmp(s3, s4, 1));
    printf("\n");
}

***STRLEN
#include <stdio.h>
int main(void)
{
	printf("OUTPUT 	   [%lu]\n", ft_strlen(""));
	printf("SHOULD BE  [%lu]\n", strlen(""));
	printf("OUTPUT 	   [%lu]\n", ft_strlen("Hello"));
	printf("SHOULD BE  [%lu]\n", strlen("Hello"));
}

***ISALPHA
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = -1;
    while (a++ < 127)
    {
        printf("%d", ft_isalpha(a));
        printf("|");
        printf("%d", isalpha(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***ISDIGIT
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = -1;
    while (a++ < 127)
    {
        printf("%d", ft_isdigit(a));
        printf("|");
        printf("%d", isdigit(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***ISALNUM
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = -1;
    while (a++ < 127)
    {
        printf("%d", ft_isalnum(a));
        printf("|");
        printf("%d", isalnum(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***ISASCII
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = -50;
    while (a++ < 200)
    {
        printf("%d", ft_isascii(a));
        printf("|");
        printf("%d", isascii(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***ISPRINT
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = -10;
    while (a++ < 140)
    {
        printf("%d", ft_isprint(a));
        printf("|");
        printf("%d", isprint(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***TOUPPER
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = 29;
    while (a++ < 127)
    {
        printf("%c", ft_toupper(a));
        printf("|");
        printf("%c", toupper(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***TOLOWER
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int a;

    a = 29;
    while (a++ < 127)
    {
        printf("%c", ft_tolower(a));
        printf("|");
        printf("%c", tolower(a));
        printf(" => c=%c - d=%d\n", a, a);
    }
}

***STRCHR
#include <string.h>
#include <stdio.h>
int main (void)
{
    char *s = "The greatest glory in living lies not "
                "in never falling, but in rising every time we fall.";
    int c = 'x';
    
    char *ptr;
    ptr = ft_strchr(s, c);
    printf("=> Output\n");
    printf("pointer = %p\n", ptr);
    printf("string rem = %s\n", ptr);
    char *ptr2;
    ptr2 = strchr(s, c);
    printf("=> Should be\n");
    printf("pointer = %p\n", ptr2);
    printf("string rem = %s\n", ptr2);
}

***STRRCHR
#include <string.h>
#include <stdio.h>
int main (void)
{
    char *s = "The greatest glory in living lies not "
                "in never falling, but in rising every time we fall.";
    char c = 'x';
    char *ptr;
    char *ptr2;

    ptr = ft_strrchr(s, c);
    ptr2 = strrchr(s, c);
    printf("=> Output\n");
    printf("pointer = %p\n", ptr);
    printf("string rem = %s\n", ptr);
    printf("=> Should be\n");
    printf("pointer = %p\n", ptr2);
    printf("string rem = %s\n", ptr2);
}

***STRNCMP
#include <stdio.h>
#include <string.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	// ft_strncmp(0, "Hello", 2);		/* Should Segfault */
	// ft_strncmp("Hello", 0, 2);		/* Should Segfault */
	ft_strncmp(0, 0, 0);				/* Should NOT Segfault */
	ft_strncmp(0, "Hello", 0);			/* Should NOT Segfault */
	ft_strncmp("You", "Hello", 0);		/* Should NOT Segfault */
	ft_strncmp("You", 0, 0);			/* Should NOT Segfault */
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    printf("\n");
    char *s1 = "HelloP";
    char *s2 = "Hello";
    printf("=> OUTPUT\n%d\n", ft_strncmp(s1, s2, 7));
    printf("=> SHOULD BE\n%d\n", strncmp(s1, s2, 7));
    printf("--------------------------\n");
    char *s3 = "44";
    char *s4 = "45";
    printf("=> OUTPUT\n%d\n", ft_strncmp(s3, s4, 3));
    printf("=> SHOULD BE\n%d\n", strncmp(s3, s4, 3));
    printf("\n");
}

***STRLCPY
#include <stdio.h>
#include <string.h>
int     main(void)
{
	/* Protection Test (own fct pass without protection) */
	printf("\n -- = Protection Test = -- \n");
	ft_strlcpy(0, "Hello" , 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    printf("\n");
    printf("=> OUTPUT\n");
    char my_dest[] = "Hello";
    char my_src[] = "Mister";
    printf("returned val (length of src) = %lu\n", ft_strlcpy(my_dest, my_src, 6));
    printf("new str = %s\n", my_dest);
    printf("=> SHOULD BE\n");
    char my_dest2[] = "Hello";
    char my_src2[] = "Mister";
    printf("returned val (length of src) = %lu\n", strlcpy(my_dest2, my_src2, 6));
    printf("new str = %s\n", my_dest2);

    printf("---------------------------------\n");

    printf("=> OUTPUT\n");
    char my_dest3[] = "";
    char my_src3[] = "Mister";
    printf("returned val (length of src) = %lu\n", ft_strlcpy(my_dest3, my_src3, 0));
    printf("new str = %s\n", my_dest3);
    printf("=> SHOULD BE\n");
    char my_dest4[] = "";
    char my_src4[] = "Mister";
    printf("returned val (length of src) = %lu\n", strlcpy(my_dest4, my_src4, 0));
    printf("new str = %s\n", my_dest4);
}

***STRLCAT
#include <string.h>
#include <stdio.h>
int     main(void)
{
    printf("\n");
    printf("=> OUTPUT\n");
    char my_dest[6] = "BBBB";
    char my_src[] = "A";
    printf("returned val = %lu | ", ft_strlcat(my_dest, my_src, 6));
    printf("new str = %s\n", my_dest);
    printf("=> SHOULD BE\n");
    char my_dest2[6] = "BBBB";
    char my_src2[] = "A";
    printf("returned val = %lu | ", strlcat(my_dest2, my_src2, 6));
    printf("new str = %s\n\n", my_dest2);
}

***STRNSTR
#include <stdio.h>
#include <string.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	// strnstr("Hello You", 0 , 0); 	/* Should Segfault */
	// ft_strnstr(0, "Hello" , 10);		/* Should Segfault */
	// ft_strnstr(0, 0 , 0);			/* Should Segfault */
	ft_strnstr(0, "Hello" , 0);			/* Should NOT Segfault */
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    char haystack[30] = "aaabcabcd";
    char needle[10] = "abcd";
    int len = -1;
    printf("\n=> OUTPUT\n");
    char *ptr;
    ptr = ft_strnstr(haystack, needle, len);
    printf("string found    = %s\n", ptr);
    printf("found pointer   = %p\n", ptr);
    char *ptr2;
    printf("=> SHOULD BE\n");
    ptr2 = strnstr(haystack, needle, len);
    printf("string found    = %s\n", ptr2);
    printf("found pointer   = %p\n\n", ptr2);

	printf("\n=> OUTPUT\n");
    char *ptr3;
    ptr3 = ft_strnstr("Hello You", "", 3);
    printf("string found    = %s\n", ptr3);
    printf("found pointer   = %p\n", ptr3);
    char *ptr4;
    printf("=> SHOULD BE\n");
    ptr4 = strnstr("Hello You", "", 3);
    printf("string found    = %s\n", ptr4);
    printf("found pointer   = %p\n\n", ptr4);
}

***ATOI
#include <stdio.h>
int main(void)
{
	printf("\e[32m**** TEST 1 : ****\n\e[0m");
	printf("- OUTPUT     => %d\n", ft_atoi("1234"));
	printf("  SHOULD BE  => %d\n", atoi("1234"));
	printf("- OUTPUT     => %d\n", ft_atoi("    "));
	printf("  SHOULD BE  => %d\n", atoi("    "));
	printf("- OUTPUT     => %d\n", ft_atoi("    \0 17 "));
	printf("  SHOULD BE  => %d\n", atoi("   \0 17 "));
	printf("- OUTPUT     => %d\n", ft_atoi("9223372036854775805"));
	printf("  SHOULD BE  => %d\n", atoi("ee));

	printf("\e[32m**** TEST 2 : ****\n\e[0m");
	int std, ft;
	char *test_cases[] = {"-9223372036854775807", "18446744073709552000", "18446744073709551999", "-0", "++5", "+-5", "--5", "00512", "23058430092136939529", "\t\v\r\n\f -5", "-9223372036854775808", "-9223372036854775809", "9223372036854775808", "9999999999999999999", "2147484160", "6a", "", "2147483648", "-2147483648", "2147483647", "-4294967296", "4294967296", "4294967295"};
	int length = sizeof test_cases / sizeof *test_cases;
	int err_count = 0;
	if (sizeof ft_atoi("") != sizeof atoi(""))
	{
		puts("[\e[91mERR\e[0m]\tYour atoi doesn't return an int\n");
		err_count++;
	}
	for (int i = 0; i < length; i++)
	{
		if ((std = atoi(test_cases[i])) != (ft = ft_atoi(test_cases[i])))
		{
			printf("[\e[91mERR\e[0m]\tTest case:\t\"%s\"\n\tExpected :\t%d\n\tObtained :\t%d\n\n", test_cases[i], std, ft);
			err_count++;
		}
	}
	if (err_count)
		printf("\e[91mTests failed with \e[93m%d\e[91m error(s)\e[0m\n", err_count);
	else
		printf("\e[32mEverything seems to work :)\e[0m");
	return (0);
}

***CALLOC
#include <stdio.h>
int main(void)
{
    int size = 10;
    int count = 5;
    int i;

    char *str;
    str = malloc(count * size);
    memset(str, '1', count * size); 
    free(str);
    str = ft_calloc(count, size);
    printf("=> OUTPUT    [");
    while (size--)
        printf("%c", *str++ + '0');
    printf("]\n");
    
    char *str2;
    int size2 = 10;
    str2 = malloc(count * size2);
    memset(str2, '1', count * size2); 
    free(str2);
    str2 = calloc(count, size2);
    printf("=> SHOULD BE [");
    while (size2--)
        printf("%c", *str2++ + '0');
    printf("]\n");
}

***STRDUP
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *str = "Goodmorning";
    char *str_cpy;
    str_cpy = ft_strdup(str);
    printf("str s     = %s\n", str);
    printf("str cpy s = %s\n", str_cpy);
    printf("str p     = %p\n", str);
    printf("str cpy p = %p\n", str_cpy);
    printf("=> diff = %d\n", strcmp(str, str_cpy));

    printf("-----------------\n");

    char *str2 = "Goodmorning";
    char *str_cpy2;
    str_cpy2 = strdup(str2);
    printf("str s     = %s\n", str2);
    printf("str cpy s = %s\n", str_cpy2);
    printf("str p     = %p\n", str2);
    printf("str cpy p = %p\n", str_cpy2);
    printf("=> diff = %d\n\n", strcmp(str2, str_cpy2));
}


***SUBSTR
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_substr(0, 1, 3);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    char *str = "hello";
    char *str_cpy;
    str_cpy = ft_substr(str, 1 , 3);
    printf("- str      = %s\n", str);
    printf("- new str  = %s\n", str_cpy);

	char *str2 = "Goodmorning Student!";
	char *str_cpy2;
    str_cpy2 = ft_substr(str2, 6 , 10);
    printf("- str2     = %s\n", str2);
    printf("- new str2 = %s\n", str_cpy2);

	char *str3 = "Buenas Tardes Mi amigo";
	char *str_cpy3;
    str_cpy3 = ft_substr(str3, 8 , 20);
    printf("- str3     = %s\n", str3);
    printf("- new str3 = %s\n", str_cpy3);

	char *str4 = "hello";
    char *str_cpy4;
    str_cpy4 = ft_substr(str4, 8 , 2);
    printf("- str      = %s\n", str4);
    printf("- new str  = %s\n\n", str_cpy4);
}



***STRJOIN
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_strjoin(0, 0);
	ft_strjoin(0, "hello");
	ft_strjoin("hello", 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */

    char s1[] = "19 &";
    char s2[] = " 42";
    char *dst;
    dst = ft_strjoin(s1, s2);
    printf("s1 str = %s\n", s1);
    printf("s1 ptr = %p\n", s1);
    printf("s2 str = %s\n", s2);
    printf("s2 ptr = %p\n", s2);
    printf("new str = %s\n", dst);
    printf("new ptr = %p\n", dst);
}

***STRTRIM
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_strtrim(0, 0);
	ft_strtrim(0, "hello");
	ft_strtrim("hello", 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */

    char *str = "***/Hello To You***/D*";
    char *set = "/*";
    char *dst;
    dst = ft_strtrim(str, set);
    printf("new string = %s\n", dst);
}

***SPLIT
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_split(0, 'h');
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    char str[] = "Speedbird";
    char c = 'i';
    char **dst;
    dst = ft_split(str, c);
    while (*dst)
    {
        printf("dst = %s\n", *dst);
        dst++;
    }
}

***ITOA
#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 2147483647;
    int c = -2147483648;
    int d = 1;
    int e = -1;
    int f = 1234;
	int g = -1234;
    printf("str = %s\n", ft_itoa(a));
    printf("str = %s\n", ft_itoa(b));
    printf("str = %s\n", ft_itoa(c));
    printf("str = %s\n", ft_itoa(d));
    printf("str = %s\n", ft_itoa(e));
    printf("str = %s\n", ft_itoa(f));
	printf("str = %s\n", ft_itoa(g));
}

***STRMAPI
#include <stdio.h>
char    ft_add(unsigned int a, char c)
{
    return (c + a);
}
int main (void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_strmapi("Hello", 0);
	ft_strmapi(0, &ft_add);
	ft_strmapi(0, 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
    char *str = "1234";
    char (*f)(unsigned int, char);
    f = &ft_add;
    printf("dst = %s (SHOULD BE 1357)\n", ft_strmapi(str, f));
}


***PUTCHAR_FD
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
    int fd;
    int x;
    char buf[4096];
    int ret;

    fd = open("test", O_RDWR | O_CREAT | O_APPEND , S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        printf("open() failed\n");
        return (1);
    }
    x = 0;
    while (x < 10)
        ft_putchar_fd(x++ + 48, fd);
    lseek(fd, 0, SEEK_SET);
    ret = read(fd, buf, 10);
    buf[10] = '\0';
    printf("=> OUTPUT    : %s\n", buf);
    printf("=> SHOULD BE : 0123456789\n");
    if (close(fd) == -1)
    {
        printf("close() failed\n");
        return (1);
    }
    remove("test");
}

***PUTSTR_FD
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_putstr_fd(0, 1);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    int fd;
    char *str = "Hello";
    char buf[4096];
    fd = open("test", O_RDWR | O_CREAT);
    if (fd == -1)
    {
        printf("open() failed");
        return (1);
    }
    ft_putstr_fd(str, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buf, 10);
    buf[10] = '\0';
    printf("=> OUTPUT    : %s\n", buf);
    printf("=> SHOULD BE : Hello\n");
    if (close(fd) == -1)
    {
        printf("close() failed\n");
        return (1);
    }
    remove("test");
}

***PUTENDL_FD
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_putendl_fd(0, 1);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    int fd;
    int i;
    char buf[4096];
    int ret;

    fd = open("test", O_RDWR | O_CREAT);
    i = 3;
    while (i--)
        ft_putendl_fd("Ceci est une des 3 lignes", fd);
    lseek(fd, 0, SEEK_SET);
    ret = read(fd, buf, 4096);
    buf[ret] = '\0';
    printf("OUTPUT :\n%s", buf);
    printf("SHOULD BE :\n");
    i = 3;
    while (i--)
        printf("Ceci est une des 3 lignes\n");
    remove("test");
}

***PUTNBR_FD
#include <fcntl.h>
#include <stdio.h>
int main(void)
{
    int fd;
    int ret;
    int nbr;
    char nbr_buf[4096];

    nbr = -2147483648;
    fd = open("test", O_RDWR | O_CREAT);
    if (fd == -1)
    {
        printf("open () failed\n");
        return (1);
    }
    ft_putnbr_fd(nbr, fd);
    lseek(fd, 0, SEEK_SET);
    ret = read(fd, nbr_buf, 4096);
    nbr_buf[ret] = '\0';
    printf("=> OUTPUT    : %s\n", nbr_buf);
    printf("=> SHOULD BE : %d\n", nbr);
    remove("test");
}

__________________________________________________________________________
BONUS
__________________________________________________________________________

***LSTNEW
#include <stdio.h>
int main()
{
    t_list *list; 
    list = NULL;
    char *str = "Article 1";
    list = ft_lstnew(str);
    while (list)
    {
        printf("%s\n", list->content);
        list = list->next;
    }
}

***LSTADD_FRONT
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *elem = malloc(sizeof(t_list));
	t_list *first = malloc(sizeof(t_list));
	t_list *first_null = NULL;
	printf("\n -- = Protection Test = -- \n");
	ft_lstadd_front(0, elem);
	ft_lstadd_front(&first, 0);
	ft_lstadd_front(&first, 0);
	ft_lstadd_front(0, 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list **lst;
    t_list *item;
    t_list *item2;
    t_list *item3;

    item3 = malloc(sizeof(t_list));
    item3->content = "hello3";
    item3->next = NULL;

    item2 = malloc(sizeof(t_list));
    item2->content = "hello2";
    item2->next = item3;

    item = malloc(sizeof(t_list));
    item->content = "hello";
    item->next = item2;

    t_list *new;
    new = malloc(sizeof(t_list)); 
    new->content = "hello NEW";

    lst = &item;
    ft_lstadd_front(lst, new);
    
    while (item)
    {
        printf("%s\n", item->content);
        item = item->next;
    }
}

***LSTSIZE
#include <stdio.h>
int main(void)
{
    t_list *item;
    t_list *item2;
    t_list *item3;

    item3 = malloc(sizeof(t_list));
    item3->content = "hello3";
    item3->next = NULL;

    item2 = malloc(sizeof(t_list));
    item2->content = "hello2";
    item2->next = item3;

    item = malloc(sizeof(t_list));
    item->content = "hello";
    item->next = item2;

    printf("list size : %d\n", ft_lstsize(item));
}

***LSTLAST
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	printf("\n -- = Protection Test = -- \n");
	ft_lstlast(0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *item3;
    item3 = malloc(sizeof(item3));
    item3->content = "hello3";
    item3->next = NULL;

    t_list *item2;
    item2 = malloc(sizeof(item2));
    item2->content = "hello2";
    item2->next = item3;

    t_list *item1;
    item1 = malloc(sizeof(item2));
    item1->content = "hello1";
    item1->next = item2;

    t_list *lst;
    lst = malloc(sizeof(lst));
    lst->next = item1;
    
    printf("=> Output    : %s\n", ft_lstlast(lst)->content);
    printf("=> Should be : hello3\n");
}


***LSTADD_BACK
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *elem = malloc(sizeof(t_list));
	printf("\n -- = Protection Test = -- \n");
	ft_lstadd_back(0, elem);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *list1;
    t_list *list2;
    t_list *item1;
    t_list *item2;
    t_list *item3;
    t_list *item4;
    t_list *item5;

    item4 = malloc(sizeof(t_list));
    item4->content = "hello4";
    item4->next = NULL;

    item3 = malloc(sizeof(t_list));
    item3->content = "hello3";
    item3->next = NULL;

    item2 = malloc(sizeof(t_list));
    item2->content = "hello2";
    item2->next = NULL;

    item1 = malloc(sizeof(t_list));
    item1->content = "hello1";
    item1->next = NULL;

    list1 = NULL;
    list2 = NULL;

    ft_lstadd_back(&list1, item1);
    ft_lstadd_back(&list1, item2);
    ft_lstadd_back(&list1, item3);
    ft_lstadd_back(&list2, item4);       
    ft_lstadd_back(&list1, list2);
    
    printf("=> OUTPUT :\n");
    while (list1)
    {
        printf("%s\n", list1->content);
        list1 = list1->next;
    }
	printf("=> SHOULD BE :\n");
    printf("Hello1\n");
    printf("Hello2\n");
    printf("Hello3\n");
    printf("Hello4\n");
}


***LSTDELONE
void    ft_del(void *item)
{
    free(item);
}
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *lsttest = malloc(sizeof(t_list));
	printf("\n -- = Protection Test = -- \n");
	ft_lstdelone(lsttest, 0);
	ft_lstdelone(0, &free);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *list;
    t_list *item1;
    t_list *item2;

    item2 = malloc(sizeof(t_list));
    item2->content = ft_strdup("2: You");
    item2->next = NULL;

    item1 = malloc(sizeof(t_list));
    item1->content = ft_strdup("1: To");
    item1->next = item2;

    list = malloc(sizeof(t_list));
    list->content = ft_strdup("0: Hello");
    list->next = item1;

    t_list *ptr;
    ptr = list;
    printf("- BEFORE :\n");
    while (list)
    {
        printf("%s\n", list->content);
        list = list->next;
    }
    ft_lstdelone(item1, &ft_del);
    printf("- AFTER :\n");
    list = ptr;
    while (list)
    {
        printf("%s\n", list->content);
        list = list->next;
    }
}

***LSTCLEAR
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *lsttest = malloc(sizeof(t_list));
	printf("\n -- = Protection Test = -- \n");
	ft_lstclear(&lsttest, 0);
	ft_lstclear(0, &free);
	ft_lstclear(0, 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *item1;
    t_list *item2;
    t_list *item3;

    item3 = malloc(sizeof(t_list));
    item3->content = ft_strdup("Hello3");
    item3->next = NULL;

    item2 = malloc(sizeof(t_list));
    item2->content = ft_strdup("Hello2");
    item2->next = item3;

    item1 = malloc(sizeof(t_list));
    item1->content = ft_strdup("Hello1");
    item1->next = item2;

    t_list *ptr = item1;
    printf("\n- BEFORE :\n");
    while (item1)
    {
        printf("%s\n", item1->content);
        item1 = item1->next;
    }
    printf("End of list\n");
    item1 = ptr;
    printf("* PTR of list = %p\n", item1);
    ft_lstclear(&item1, &free);
    printf("\n- AFTER :\n");
    while (item1)
    {
        printf("%s\n", item1->content);
        item1 = item1->next;
    }
    printf("End of list\n");
    printf("* PTR of list : %p (should be 0x0)\n\n", item1);
}

***LSTITER
void     ft_setmaj(void *str)
{
    char *dst = str;
    if (*dst >= 'a' && *dst <= 'z')
        *dst = *dst - 32;
}
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *testlst = malloc(sizeof(t_list));
	printf("\n -- = Protection Test = -- \n");
	ft_lstiter(testlst, 0);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello1")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello2")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello3")));
    
    t_list *ptr;
    ptr = list;
    printf("BEFORE :\n");
    while (ptr)
    {
        printf("%s\n", ptr->content);
        ptr = ptr->next;
    }
    ft_lstiter(list, &ft_setmaj);  
    printf("AFTER :\n");
    ptr = list;
    while (ptr)
    {
        printf("%s (1st letter should be maj)\n", ptr->content);
        ptr = ptr->next;
    }
}

***LSTMAP
#include <stdio.h>
void    *ft_allmaj(void *str)
{
    char *src = str;
    char *dst;
    int i;

    dst = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (dst == NULL)
        return (NULL);
    i = 0;
    while (src[i])
    {
        if (src[i] >= 'a' && src[i] <= 'z')
            dst[i] = src[i] - 32;
        else
            dst[i] = src[i];
        i++;
    }
    return ((void*)dst);
}
#include <stdio.h>
int main(void)
{
	/* Protection Test */
	t_list *testlst = ft_lstnew(ft_strdup("hello1"));
	printf("\n -- = Protection Test = -- \n");
	ft_lstmap(testlst, &ft_allmaj, 0);
	ft_lstmap(testlst, 0, &free);
	ft_lstmap(0, &ft_allmaj, &free);
	printf("|         => OK <=        |\n"); 
	printf(" ------------------------- \n\n");
	/* Protection Test */
	
    t_list *list = NULL;
    t_list *new = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello1")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello2")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("hello3")));
    
    printf("-- BEFORE --\n");
    t_list *ptr;
    ptr = list;
    while (ptr)
    {
        printf("%s\n", ptr->content);
        ptr = ptr->next;
    }
    new = ft_lstmap(list, &ft_allmaj, &free);
    printf("-- AFTER --\n");
    while (new)
    {
        printf("%s (should be in MAJ)\n", new->content);
        new = new->next;
    }
}