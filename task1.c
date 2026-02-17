#include <ctype.h>
#include "task1.h"
void str_lower (char *orig, char *copy) {
    for (int i = 0; orig[i] != '\0'; i++) {
        orig[i] = tolower(orig[i]);
    }
    copy[i] = '\0';

}

void str_lower_mutate(char *orig) {
    for (int i = 0; orig[i] != '\0'; i++) {
        orig[i] = tolower(orig[i]);
    }
}
