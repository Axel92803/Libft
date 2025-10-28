#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "libft.h"

int passed = 0;
int failed = 0;

#define TEST(condition) \
    if (condition) { \
        printf("✅ "); \
        passed++; \
    } else { \
        printf("❌ "); \
        failed++; \
    }

int main(void) {
    printf("Testing functions...\n\n");

    // Test ft_isalpha
    printf("ft_isalpha tests:\n");
    TEST(ft_isalpha('a') != 0);
    printf("ft_isalpha('a') returns non-zero\n");
    TEST(ft_isalpha('Z') != 0);
    printf("ft_isalpha('Z') returns non-zero\n");
    TEST(ft_isalpha('1') == 0);
    printf("ft_isalpha('1') returns 0\n");
    TEST(ft_isalpha(' ') == 0);
    printf("ft_isalpha(' ') returns 0\n");
    printf("\n");

    // Test ft_isdigit
    printf("ft_isdigit tests:\n");
    TEST(ft_isdigit('0') != 0);
    printf("ft_isdigit('0') returns non-zero\n");
    TEST(ft_isdigit('9') != 0);
    printf("ft_isdigit('9') returns non-zero\n");
    TEST(ft_isdigit('a') == 0);
    printf("ft_isdigit('a') returns 0\n");
    TEST(ft_isdigit(' ') == 0);
    printf("ft_isdigit(' ') returns 0\n");
    printf("\n");

    // Test ft_isalnum
    printf("ft_isalnum tests:\n");
    TEST(ft_isalnum('a') != 0);
    printf("ft_isalnum('a') returns non-zero\n");
    TEST(ft_isalnum('5') != 0);
    printf("ft_isalnum('5') returns non-zero\n");
    TEST(ft_isalnum('!') == 0);
    printf("ft_isalnum('!') returns 0\n");
    printf("\n");

    // Test ft_isascii
    printf("ft_isascii tests:\n");
    TEST(ft_isascii(0) != 0);
    printf("ft_isascii(0) returns non-zero\n");
    TEST(ft_isascii(127) != 0);
    printf("ft_isascii(127) returns non-zero\n");
    TEST(ft_isascii(128) == 0);
    printf("ft_isascii(128) returns 0\n");
    TEST(ft_isascii(-1) == 0);
    printf("ft_isascii(-1) returns 0\n");
    printf("\n");

    // Test ft_isprint
    printf("ft_isprint tests:\n");
    TEST(ft_isprint('a') != 0);
    printf("ft_isprint('a') returns non-zero\n");
    TEST(ft_isprint(' ') != 0);
    printf("ft_isprint(' ') returns non-zero\n");
    TEST(ft_isprint('\n') == 0);
    printf("ft_isprint('\\n') returns 0\n");
    TEST(ft_isprint(127) == 0);
    printf("ft_isprint(127) returns 0\n");
    printf("\n");

    // Test ft_strlen
    printf("ft_strlen tests:\n");
    TEST(ft_strlen("hello") == 5);
    printf("ft_strlen(\"hello\") == 5\n");
    TEST(ft_strlen("") == 0);
    printf("ft_strlen(\"\") == 0\n");
    TEST(ft_strlen("test string") == 11);
    printf("ft_strlen(\"test string\") == 11\n");
    printf("\n");

    // Test ft_toupper
    printf("ft_toupper tests:\n");
    TEST(ft_toupper('a') == 'A');
    printf("ft_toupper('a') == 'A'\n");
    TEST(ft_toupper('z') == 'Z');
    printf("ft_toupper('z') == 'Z'\n");
    TEST(ft_toupper('A') == 'A');
    printf("ft_toupper('A') == 'A'\n");
    TEST(ft_toupper('1') == '1');
    printf("ft_toupper('1') == '1'\n");
    printf("\n");

    // Test ft_tolower
    printf("ft_tolower tests:\n");
    TEST(ft_tolower('A') == 'a');
    printf("ft_tolower('A') == 'a'\n");
    TEST(ft_tolower('Z') == 'z');
    printf("ft_tolower('Z') == 'z'\n");
    TEST(ft_tolower('a') == 'a');
    printf("ft_tolower('a') == 'a'\n");
    TEST(ft_tolower('1') == '1');
    printf("ft_tolower('1') == '1'\n");
    printf("\n");

    // Test ft_strchr
    printf("ft_strchr tests:\n");
    char *test_str = "hello world";
    TEST(ft_strchr(test_str, 'h') == test_str);
    printf("ft_strchr finds first character\n");
    TEST(ft_strchr(test_str, 'o') == test_str + 4);
    printf("ft_strchr finds 'o' at position 4\n");
    TEST(ft_strchr(test_str, 'x') == NULL);
    printf("ft_strchr returns NULL for missing char\n");
    TEST(ft_strchr(test_str, '\0') == test_str + 11);
    printf("ft_strchr finds null terminator\n");
    printf("\n");

    // Test ft_strrchr
    printf("ft_strrchr tests:\n");
    TEST(ft_strrchr(test_str, 'o') == test_str + 7);
    printf("ft_strrchr finds last 'o' at position 7\n");
    TEST(ft_strrchr(test_str, 'h') == test_str);
    printf("ft_strrchr finds 'h' at start\n");
    TEST(ft_strrchr(test_str, 'x') == NULL);
    printf("ft_strrchr returns NULL for missing char\n");
    TEST(ft_strrchr(test_str, '\0') == test_str + 11);
    printf("ft_strrchr finds null terminator\n");
    printf("\n");

    // Test ft_strncmp
    printf("ft_strncmp tests:\n");
    TEST(ft_strncmp("hello", "hello", 5) == 0);
    printf("ft_strncmp: identical strings\n");
    TEST(ft_strncmp("hello", "world", 5) < 0);
    printf("ft_strncmp: first < second\n");
    TEST(ft_strncmp("world", "hello", 5) > 0);
    printf("ft_strncmp: first > second\n");
    TEST(ft_strncmp("hello", "helloworld", 5) == 0);
    printf("ft_strncmp: compare first 5 chars only\n");
    TEST(ft_strncmp("test", "test", 0) == 0);
    printf("ft_strncmp: n=0 returns 0\n");
    printf("\n");

    // Test ft_strlcpy
    printf("ft_strlcpy tests:\n");
    char dst1[10];
    TEST(ft_strlcpy(dst1, "hello", 10) == 5);
    printf("ft_strlcpy returns source length\n");
    TEST(strcmp(dst1, "hello") == 0);
    printf("ft_strlcpy copies string correctly\n");
    char dst2[3];
    TEST(ft_strlcpy(dst2, "hello", 3) == 5);
    printf("ft_strlcpy returns full src length even when truncated\n");
    TEST(strcmp(dst2, "he") == 0);
    printf("ft_strlcpy truncates correctly\n");
    printf("\n");

    // Test ft_strlcat
    printf("ft_strlcat tests:\n");
    char dst3[20] = "hello";
    TEST(ft_strlcat(dst3, " world", 20) == 11);
    printf("ft_strlcat returns final length\n");
    TEST(strcmp(dst3, "hello world") == 0);
    printf("ft_strlcat concatenates correctly\n");
    char dst4[8] = "hello";
    TEST(ft_strlcat(dst4, " world", 8) == 11);
    printf("ft_strlcat handles truncation\n");
    printf("\n");

    // Test ft_strnstr
    printf("ft_strnstr tests:\n");
    char *haystack = "hello world";
    TEST(ft_strnstr(haystack, "world", 11) == haystack + 6);
    printf("ft_strnstr finds substring\n");
    TEST(ft_strnstr(haystack, "world", 8) == NULL);
    printf("ft_strnstr respects len limit\n");
    TEST(ft_strnstr(haystack, "", 11) == haystack);
    printf("ft_strnstr: empty needle returns haystack\n");
    TEST(ft_strnstr(haystack, "xyz", 11) == NULL);
    printf("ft_strnstr: missing substring returns NULL\n");
    printf("\n");

    // Test ft_atoi
    printf("ft_atoi tests:\n");
    TEST(ft_atoi("0") == 0);
    printf("ft_atoi(\"0\") == 0\n");
    TEST(ft_atoi("42") == 42);
    printf("ft_atoi(\"42\") == 42\n");
    TEST(ft_atoi("-42") == -42);
    printf("ft_atoi(\"-42\") == -42\n");
    TEST(ft_atoi("+42") == 42);
    printf("ft_atoi(\"+42\") == 42\n");
    TEST(ft_atoi("   42") == 42);
    printf("ft_atoi(\"   42\") == 42\n");
    TEST(ft_atoi("42abc") == 42);
    printf("ft_atoi(\"42abc\") == 42\n");
    TEST(ft_atoi("abc") == 0);
    printf("ft_atoi(\"abc\") == 0\n");
    TEST(ft_atoi("2147483647") == 2147483647);
    printf("ft_atoi(\"2147483647\") == INT_MAX\n");
    printf("\n");

    // Test ft_bzero
    printf("ft_bzero tests:\n");
    char buf1[10] = "hello";
    ft_bzero(buf1, 5);
    TEST(buf1[0] == 0 && buf1[1] == 0 && buf1[2] == 0);
    printf("ft_bzero zeroes out bytes\n");
    char buf2[5] = "test";
    ft_bzero(buf2, 0);
    TEST(strcmp(buf2, "test") == 0);
    printf("ft_bzero with n=0 doesn't modify\n");
    printf("\n");

    // Test ft_memset
    printf("ft_memset tests:\n");
    char buf3[10];
    ft_memset(buf3, 'A', 10);
    TEST(buf3[0] == 'A' && buf3[9] == 'A');
    printf("ft_memset fills memory\n");
    ft_memset(buf3, 0, 10);
    TEST(buf3[0] == 0 && buf3[9] == 0);
    printf("ft_memset can zero memory\n");
    printf("\n");

    // Test ft_memcpy
    printf("ft_memcpy tests:\n");
    char src1[] = "hello";
    char dst5[10];
    ft_memcpy(dst5, src1, 6);
    TEST(strcmp(dst5, "hello") == 0);
    printf("ft_memcpy copies memory\n");
    int arr1[] = {1, 2, 3};
    int arr2[3];
    ft_memcpy(arr2, arr1, sizeof(arr1));
    TEST(arr2[0] == 1 && arr2[1] == 2 && arr2[2] == 3);
    printf("ft_memcpy works with int arrays\n");
    printf("\n");

    // Test ft_memmove
    printf("ft_memmove tests:\n");
    char buf4[20] = "hello world";
    ft_memmove(buf4 + 6, buf4, 5);
    TEST(strncmp(buf4 + 6, "hello", 5) == 0);
    printf("ft_memmove handles overlapping memory\n");
    char buf5[] = "abcdef";
    ft_memmove(buf5, buf5 + 2, 4);
    TEST(strncmp(buf5, "cdef", 4) == 0);
    printf("ft_memmove handles backward overlap\n");
    printf("\n");

    // Test ft_memchr
    printf("ft_memchr tests:\n");
    char buf6[] = "hello";
    TEST(ft_memchr(buf6, 'e', 5) == buf6 + 1);
    printf("ft_memchr finds byte\n");
    TEST(ft_memchr(buf6, 'x', 5) == NULL);
    printf("ft_memchr returns NULL if not found\n");
    TEST(ft_memchr(buf6, 'o', 3) == NULL);
    printf("ft_memchr respects n limit\n");
    printf("\n");

    // Test ft_memcmp
    printf("ft_memcmp tests:\n");
    TEST(ft_memcmp("hello", "hello", 5) == 0);
    printf("ft_memcmp: equal memory\n");
    TEST(ft_memcmp("abc", "abd", 3) < 0);
    printf("ft_memcmp: first < second\n");
    TEST(ft_memcmp("abd", "abc", 3) > 0);
    printf("ft_memcmp: first > second\n");
    printf("\n");

    // Test ft_calloc
    printf("ft_calloc tests:\n");
    int *arr3 = (int *)ft_calloc(5, sizeof(int));
    TEST(arr3 != NULL);
    printf("ft_calloc returns non-NULL\n");
    TEST(arr3[0] == 0 && arr3[1] == 0 && arr3[4] == 0);
    printf("ft_calloc initializes to zero\n");
    free(arr3);
    char *str1 = (char *)ft_calloc(10, sizeof(char));
    TEST(str1 != NULL && str1[0] == 0);
    printf("ft_calloc works with chars\n");
    free(str1);
    printf("\n");

    // Test ft_strdup
    printf("ft_strdup tests:\n");
    char *dup1 = ft_strdup("hello");
    TEST(dup1 != NULL);
    printf("ft_strdup returns non-NULL\n");
    TEST(strcmp(dup1, "hello") == 0);
    printf("ft_strdup copies string\n");
    free(dup1);
    char *dup2 = ft_strdup("");
    TEST(dup2 != NULL && strcmp(dup2, "") == 0);
    printf("ft_strdup handles empty string\n");
    free(dup2);
    printf("\n");

    // Test ft_substr
    printf("ft_substr tests:\n");
    char *sub1 = ft_substr("hello world", 6, 5);
    TEST(sub1 != NULL && strcmp(sub1, "world") == 0);
    printf("ft_substr extracts substring\n");
    free(sub1);
    char *sub2 = ft_substr("hello", 0, 2);
    TEST(sub2 != NULL && strcmp(sub2, "he") == 0);
    printf("ft_substr from start\n");
    free(sub2);
    char *sub3 = ft_substr("hello", 10, 5);
    TEST(sub3 != NULL && strcmp(sub3, "") == 0);
    printf("ft_substr: start beyond string\n");
    free(sub3);
    printf("\n");

    // Test ft_strjoin
    printf("ft_strjoin tests:\n");
    char *join1 = ft_strjoin("hello", " world");
    TEST(join1 != NULL && strcmp(join1, "hello world") == 0);
    printf("ft_strjoin concatenates strings\n");
    free(join1);
    char *join2 = ft_strjoin("", "test");
    TEST(join2 != NULL && strcmp(join2, "test") == 0);
    printf("ft_strjoin handles empty first string\n");
    free(join2);
    printf("\n");

    // Test ft_strtrim
    printf("ft_strtrim tests:\n");
    char *trim1 = ft_strtrim("  hello  ", " ");
    TEST(trim1 != NULL && strcmp(trim1, "hello") == 0);
    printf("ft_strtrim removes spaces\n");
    free(trim1);
    char *trim2 = ft_strtrim("xxhelloxx", "x");
    TEST(trim2 != NULL && strcmp(trim2, "hello") == 0);
    printf("ft_strtrim removes custom chars\n");
    free(trim2);
    char *trim3 = ft_strtrim("hello", "x");
    TEST(trim3 != NULL && strcmp(trim3, "hello") == 0);
    printf("ft_strtrim: nothing to trim\n");
    free(trim3);
    printf("\n");

    // Test ft_split
    printf("ft_split tests:\n");
    char **split1 = ft_split("hello world test", ' ');
    TEST(split1 != NULL);
    TEST(strcmp(split1[0], "hello") == 0);
    TEST(strcmp(split1[1], "world") == 0);
    TEST(strcmp(split1[2], "test") == 0);
    TEST(split1[3] == NULL);
    printf("ft_split splits by space\n");
    for (int i = 0; split1[i]; i++) free(split1[i]);
    free(split1);
    char **split2 = ft_split("", ' ');
    TEST(split2 != NULL && split2[0] == NULL);
    printf("ft_split handles empty string\n");
    free(split2);
    printf("\n");

    // Test ft_itoa
    printf("ft_itoa tests:\n");
    char *num1 = ft_itoa(42);
    TEST(num1 != NULL && strcmp(num1, "42") == 0);
    printf("ft_itoa(42) == \"42\"\n");
    free(num1);
    char *num2 = ft_itoa(-42);
    TEST(num2 != NULL && strcmp(num2, "-42") == 0);
    printf("ft_itoa(-42) == \"-42\"\n");
    free(num2);
    char *num3 = ft_itoa(0);
    TEST(num3 != NULL && strcmp(num3, "0") == 0);
    printf("ft_itoa(0) == \"0\"\n");
    free(num3);
    printf("\n");

    // Test ft_putchar_fd
    printf("ft_putchar_fd tests:\n");
    printf("ft_putchar_fd('A', 1): ");
    ft_putchar_fd('A', 1);
    printf(" (should print 'A')\n");
    printf("\n");

    // Test ft_putstr_fd
    printf("ft_putstr_fd tests:\n");
    printf("ft_putstr_fd(\"hello\", 1): ");
    ft_putstr_fd("hello", 1);
    printf(" (should print 'hello')\n");
    printf("\n");

    // Test ft_putendl_fd
    printf("ft_putendl_fd tests:\n");
    printf("ft_putendl_fd(\"hello\", 1):\n");
    ft_putendl_fd("hello", 1);
    printf("(should print 'hello' with newline)\n");
    printf("\n");

    // Test ft_putnbr_fd
    printf("ft_putnbr_fd tests:\n");
    printf("ft_putnbr_fd(42, 1): ");
    ft_putnbr_fd(42, 1);
    printf(" (should print '42')\n");
    printf("ft_putnbr_fd(-42, 1): ");
    ft_putnbr_fd(-42, 1);
    printf(" (should print '-42')\n");
    printf("\n");

    printf("\n%d passed, %d failed\n", passed, failed);
    return failed;
}
