#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    
    cout << "Введите количество элементов в массиве: ";
    int N;
    cin >> N;
    int* arr = new int[N];
    system("cls");
    cout << "Задайте элементы массива по порядку: \n";
    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    system("cls");

    cout << "Заданный вами массив: \n";
    cout << "arr[" << N << "] = ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nВведите число, которое хотите найти в массиве: ";
    int search, middle, key;
    bool isFind = false;
    cin >> search;

    int left = 0, right = N - 1;

    while (left <= right) {
        middle = (left + right) / 2;
        if (search > arr[middle]) {
            left = middle + 1;
        }
        if (search < arr[middle]) {
            right = middle - 1;
        }
        if (search == arr[middle]) {
            isFind = true;
            key = middle;
            break;
        }
    }

    if (isFind == true) {
        cout << "\nИскомое вами число " << search << " находится на " << key + 1 << " позиции в массиве.\n";

    }

    else {
        cout << "\nИскомое вами число не было найдено в массиве.\n";
    }



}