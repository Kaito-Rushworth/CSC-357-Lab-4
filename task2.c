#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

//Make new array list
arraylist *array_list_new() {
    int initial_size = 10;
    // Memory for arraylist struct
    arraylist *list_ptr = malloc(sizeof(arraylist));

    if (list_ptr == NULL) {
        printf("Malloc Failed\n");
        exit(1);
    }

    list_ptr->size = 0;
    list_ptr->capacity = initial_size;
    // Memory for the internal array of char*
    list_ptr->data =  malloc(initial_size * sizeof(*list_ptr->data));
    if (list_ptr->data == NULL) {
        printf("Malloc Failed\n");
        exit(1);
    }

    // Return pointer to the new array list
    return list_ptr;
}

// Adds a string to the end of array list
int array_add_to_end(arraylist *list_ptr, char *str) {
    // Resize array if it is full
    if (list_ptr->size == list_ptr->capacity) {
        int new_capacity = list_ptr->capacity * 2;
        // Resize the array
        char **new_data = realloc(list_ptr->data, new_capacity * sizeof(*list_ptr->data));
        if (new_data == NULL) {
            printf("Realloc Failed\n");
            return 1;
        }
        // Update struct to use new array
        list_ptr->data = new_data;
        list_ptr->capacity = new_capacity;
    }
    // Make a copy
    char *str_copy = strdup(str);
    if (str_copy == NULL) {
        printf("Malloc Failed\n");
        return 1;
    }
    // Store string pointer at next index
    list_ptr->data[list_ptr->size] = str_copy;
    // Increase size because we added one element
    list_ptr->size++;
    return 0;
}
