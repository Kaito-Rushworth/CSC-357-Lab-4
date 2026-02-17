#include "checkit.h"
#include "task1.h"

void test1() {
    char input[] = "Hello THERE";
    char result[15];
    char *expected = "hello there";

    str_lower(input, result);

    checkit_string(result, expected);
}

void test2() {
    char input[] = "INFLATABLE DARTBOARD";
    char result[67];
    char *expected = "inflatable dartboard";

    str_lower(input, result);

    checkit_string(result, expected);
}

void test3() {
    char input[] = "GLOW In The DARK SUNGLASSES";
    char *expected = "glow in the dark sunglasses";

    str_lower_mutate(input);

    checkit_string(input, expected);
}

int main(void) {
    test1();
    return 0;
}
