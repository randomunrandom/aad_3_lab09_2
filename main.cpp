/*
 * created by Danil Kireev, PFUR NFI-201, 25.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 *  № 2
 *  В массиве из n чисел найти первый отрицательный элемент и его индекс в массиве.
 */

int main() {
    cout << "проверка элементов массива на чередуемость, ";
    cout << "а если не чередуюься - вывести номер нарущающего элемента" << endl;
    int n, *a, n_res;
    cout << "введите размер массива : ";
    cin >> n;
    while(n <= 0) {
        cout << "введите положительное число: ";
        cin >> n;
    }
    a = new int(n);
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
    Q obj(n, a);
    obj.print();
    n_res = obj.check();
    if (n_res == -1) cout << "в массиве нет отрицательных эллементов";
    else cout << "номер отрицательного элемента в массиве: " << n_res + 1 << endl;
    return 0;
}
