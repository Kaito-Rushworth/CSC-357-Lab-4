#ifndef TASK2_H
#define TASK2_H

struct ArrayList {  // Struct
    char **data;
    int size;
    int capacity;
};

typedef struct ArrayList arraylist; // Rename

// Prototype
arraylist *array_list_new();
int array_list_add_to_end(arraylist *list, char *str);

#endif
