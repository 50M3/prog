#include <iostream>
#include <time.h>

/* Initialisiere das int-Array a der Länge len mit Werten zwischen min und max */
void random_init(int *a, int min, int max, int len){
    for (int i = 0; i < len; i++){
        a[i] = rand() % (max - min) + min;
    }
}

/* Initialisiere das float-Array f der Länge len mit Werten zwischen min und max */
void random_init(float *a, float min, float max, int len)
{
    for (int i = 0; i < len; i++){
        a[i] = (((float)rand() / (float)RAND_MAX) * (max - min)) + min;
    }
}

/* Initialisiere das int mit einem Wert zwischen 0 und RAND_MAX */
void random_init(int *a){
    random_init(a, 0, RAND_MAX, 1);
}

/* Initialisiere das int-Array a der Länge len mit Werten zwischen 0 und RAND_MAX */
void random_init(int *a, int len){
    random_init(a, 0, RAND_MAX, len);
}

/* Initialisiere int a mit einem Wert zwischen min und max */
void random_init(int *a, int min, int max){
    random_init(a, min, max, 1);
}

/* Initialisiere float f mit einem Wert zwischen 0 und 1.0 */
void random_init(float *f){
    random_init(f, 0.0, 1.0, 1);
}

/* Initialisiere das float-Array f der Länge len mit Werten zwischen 0.0 und 1.0 */
void random_init(float *f, int len){
    random_init(f, 0.0, 1.0, len);
}

/* Initialisiere float f mit einem Wert zwischen min und max */
void random_init(float *f, float min, float max){
    random_init(f, min, max, 1);
}

void print_array(int *a, int min, int max, int len){
    for(int i = 0; i < len; i++){
        std::cout << "Int-Array [ Min: "<< min << " - Max: " << max <<" ]: " << a[i] << std::endl;
    }
}

void print_array(float *a, float min, float max, int len){
    for(int i = 0; i < len; i++){
        std::cout << "Float-Array [ Min: "<< min << " - Max: "<< max <<" ]: " << a[i] << std::endl;
    }
}

int main()
{
    int int_number = 0;
    float float_number = 0.0;

    int array_size = 5;

    int* int_array = new int[array_size];
    float* float_array = new float[array_size];

    random_init(&int_number);
    std::cout << "Int [ Min: 0 - Max: RAND_MAX ]: " << int_number << std::endl;

    random_init(&int_number, 30, 40);
    std::cout << "Int [ Min: 30 - Max: 40 ]: " << int_number << std::endl;

    random_init(&float_number);
    std::cout << "Float [ Min: 0.0 - Max: 1.0 ]: " << float_number << std::endl;

    random_init(&float_number, 3.5, 5.5);
    std::cout << "Float [ Min: 3.5 - Max: 5.5 ]: " << float_number << std::endl;

    random_init(int_array, array_size);
    print_array(int_array, 0, RAND_MAX, array_size);

    random_init(int_array, 30, 40, array_size);
    print_array(int_array, 30, 40, array_size);

    random_init(float_array, array_size);
    print_array(float_array, 0.0, 1.0, array_size);

    random_init(float_array, 3.5, 5.5, array_size);
    print_array(float_array, 3.5, 5.5, array_size);

    return 0;
}