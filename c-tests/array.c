#include "capi_testcase.h"

int main() {
    uint64_t b[] = {99, 98, 97, 96, 95, 94};
    uint64_t a[] = {1, 2, 3};
    array_test(a);
    array_test(b + 3);
    pointer_test(a);
    pointer_test(b + 3);
    print_from_rust();

    return 0;
}
