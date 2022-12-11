#include "t3.h"

void change(int *pa, int *pla, int arr[], int N) {
   
    pa = &arr[0];
    pla = &arr[0 + N - 1];
    int  tmp = *pa;
    *pa = *pla;
    *pla = tmp;
}

int main()
{
    int n; // задаетс€ размер массива
    std:: cout << "Enter integer value: ";
   std:: cin >> n; // получение от пользовател€ размера массива

    int* array = new int[n]; // ¬ыделение пам€ти дл€ массива
    for (int i = 0; i < n; i++) {
        // «аполнение массива и вывод значений его элементов
        array[i] = i;
        std::cout << "Value of " << i << " element is " << array[i] << std::endl;
    }
    
    
    std::cout <<"Array after changes: " << change(0, 0, array, n) << std::endl;


    return 0;
}