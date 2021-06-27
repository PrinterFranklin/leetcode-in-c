#include <stddef.h>
#include <stdio.h>
#include "contiguous_array.h"

int test_contiguous_array1() {
        return 0;
}

int test_contiguous_array2() {
        return 0;
}

int test_contiguous_array3() {
        return 0;
}

int test_contiguous_array4() {
        return 0;
}

int main()
{
        if (test_contiguous_array1()) {
                printf("Run test case 1 failed!\n");
                return 1;
        } else if (test_contiguous_array2()) {
                printf("Run test case 2 failed!\n");
                return 1;
        } else if (test_contiguous_array3()) {
                printf("Run test case 3 failed!\n");
                return 1;
        } else if (test_contiguous_array4()) {
                printf("Run test case 4 failed!\n");
                return 1;
        } else {
                printf("Run all test cases success!\n");
                return 0;
        }
}