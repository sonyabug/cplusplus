int gt(point_2d a, point_2d b) {
    return a.x - b.x;
}

int lt(point_2d a, point_2d b) {
    return b.x - a.x;
}

int gt(int a, int b) {
    return a - b;
}

int lt(int a, int b) {
    return b - a;
}

double gt(double a, double b) {
    return a - b;
}

double lt(double a, double b) {
    return b - a;
}
char gt(char a, char b) {
    return a - b;
}

char lt(char a, char b) {
    return b - a;
}

void swap(point_2d* array, int i, int j) {
    point_2d temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void swap(int* array, int i, int j) {
    int temp = array[i];
    array[i]= array[j];
    array[j] = temp;
}

void swap(double* array, int i, int j) {
    double temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void swap(char* array, int i, int j) {
    char temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void sort(point_2d* array, int length, int (*predicate) (point_2d, point_2d)) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i; j < length; j++) {
            if (predicate(array[i], array[j]) > 0) {
                swap(array, i, j);
            }
        }
    }
}

void sort(int* array, int length, int (*predicate) (int, int)) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i; j < length; j++) {
            if (predicate(array[i], array[j]) > 0) {
                swap(array, i, j);
            }
        }
    }
}


void sort(char* array, int length, char (*predicate) (char, char)) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i; j < length; j++) {
            if (predicate(array[i], array[j]) > 0) {
                swap(array, i, j);
            }
        }
    }
}


void sort(double* array, int length, double (*predicate) (double, double)) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i; j < length; j++) {
            if (predicate(array[i], array[j]) > 0) {
                swap(array, i, j);
            }
        }
    }
}
