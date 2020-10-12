#include <iostream>
#include "Tools.h"
using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    int Ans ;
    Object Line;
    Line.SetDataParam_a(NULL);Line.SetDataParam_b(NULL);Line.SetDataParam_c(NULL);
    do {
        cout << "0: Прекратить работу. \n  1: Задать параметр кривой a. \n  2: Задать параметр кривой b. \n  3: Задать параметр кривой c. \n  4: Просмотр всех параметров кривой. \n  5: Просмотр параметра кривой a. \n  6: Просмотр параметра кривой b. \n  7: Просмотр параметра кривой c. \n  8: Получить ординату по значению абсциссы. \n  9: Получить длину дуги кривой, ограниченной данными абсциссами. \n  10: Получить радиус кривизны к точке с данной абсциссой. \n  11: Получить координаты центра кривизны в точке с данной абсциссой. \n  12: Получить площадь под линией между точками с данными абсциссами. " << endl;
        cin >> Ans;
        if ((Ans > 0)&&(Ans < 13)){
            cout << "============" << endl;
            switch (Ans) {
                case 1:
                    Line = ans_1_a(Line);
                    break;
                case 2:
                    Line = ans_1_b(Line);
                    break;
                case 3:
                    Line = ans_1_c(Line);
                    break;
                case 4:
                    cout << Line.GetData() << endl;
                    break;
                case 5:
                    cout << Line.GetData_a() << endl;
                    break;
                case 6:
                    cout << Line.GetData_b() << endl;
                    break;
                case 7:
                    cout << Line.GetData_c() << endl;
                    break;
                case 8:
                    ans_3(Line);
                    break;
                case 9:
                    ans_4(Line);
                    break;
                case 10:
                    ans_5(Line);
                    break;
                case 11:
                    ans_6(Line);
                    break;
                case 12:
                    ans_7(Line);
                    break;
            }
            cout << "============" << endl;
        } else {
            if (Ans != 0){
                cout << "!!! Некорректный выбор. Повторите ввод." << endl;
            }
        }
    } while (Ans != 0);
    return 0;
}
