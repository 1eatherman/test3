#include <stdlib.h>

// Task 1: Find the maximum value in a 2D array
int max_2d(const int size, int array[][size]) {
    if (array == NULL) return -1; // Handle null input

    int max = array[0][0]; // Initialize max with the first element
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    return max;
}

// Task 2: Count the number of vowels in a 2D character array
int vowels_count_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) return -1; // Handle null input

    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = strings[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
    }
    return count;
}

// Task 3: Check if a number exists in a 2D array
int is_in_array_2d(const int num, const int size, int array[][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == num) {
                return 1; // Found
            }
        }
    }
    return 0; // Not found
}

// Task 4: Find the row with the largest sum in a 2D array
int largest_line(const int size, int array[][size]) {
    if (array == NULL) return -1; // Handle null input

    int max_sum = -1, max_row = -1;
    for (int i = 0; i < size; i++) {
        int row_sum = 0;
        for (int j = 0; j < size; j++) {
            row_sum += array[i][j];
        }
        if (row_sum > max_sum) {
            max_sum = row_sum;
            max_row = i;
        }
    }
    return max_row;
}

// Task 5: Swap case of letters in a 2D character array
void swap_case_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) return; // Handle null input

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (strings[i][j] >= 'a' && strings[i][j] <= 'z') {
                strings[i][j] -= 32; // Convert to uppercase
            } else if (strings[i][j] >= 'A' && strings[i][j] <= 'Z') {
                strings[i][j] += 32; // Convert to lowercase
            }
        }
    }
}

// Task 6: Find the column with the largest sum in a 2D array
int largest_col(const int size, int array[][size]) {
    if (array == NULL) return -1; // Handle null input

    int max_sum = -1, max_col = -1;
    for (int j = 0; j < size; j++) {
        int col_sum = 0;
        for (int i = 0; i < size; i++) {
            col_sum += array[i][j];
        }
        if (col_sum > max_sum) {
            max_sum = col_sum;
            max_col = j;
        }
    }
    return max_col;
}

int count_zeroes_2d(const int size, int array[][size]) {
    if (array == NULL) {
        return -1;
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

void swap_sign_2d(const int size, int array[][size]) {
    if (array == NULL) {
        return;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = -array[i][j];
        }
    }
}

int is_in_array_2d(const int num, const int size, int array[][size]) {
    if (array == NULL) {
        return -1;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == num) {
                return 1; // Number found
            }
        }
    }
    return 0; // Number not found
}