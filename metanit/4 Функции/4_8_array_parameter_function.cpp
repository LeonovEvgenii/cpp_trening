#include <iostream>

// Заголовок
void print(int[]);

void print(int numbers[]) // передача параметра
{
    std::cout << numbers[0] << "\n";
}


void print_2(int*);

void print_2(int *numbers)
{
    std::cout << *numbers << "\n";
}

int main()
{
    std::cout << "Инициализация массива\n";
    int nums[] {1,2,3,4,5};
    print(nums);

    print_2(nums); // еще одна форма передачи указателя на первый элемент

    // для char можно отслеживать '\0' конец массива
    // для ограничения прохода с помощью for
    // можно еще в ручную передавать размер массива

    // в результате, если работать с массивом проще передавать его размер, вместе с указателм на первый элемент

    // не дочитал тему ... 


    std::cout << "hw\n";
    return 0;
}