#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<int> removeLastEven(vector<int> arr) {
    int lastIndex = -1; // Переменная для хранения индекса последнего чётного числа

    // Поиск последнего чётного числа в массиве
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            lastIndex = i;
        }
    }

    // Если было найдено чётное число
    if (lastIndex != -1) {
        // Удаление последнего чётного числа из массива
        arr.erase(arr.begin() + lastIndex);
    }

    return arr;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> modifiedArr = removeLastEven(arr);
    cout << "Изменённый массив: ";
    for (int i = 0; i < modifiedArr.size(); i++) {
        cout << modifiedArr[i] << " ";
    }

    return 0;
}
