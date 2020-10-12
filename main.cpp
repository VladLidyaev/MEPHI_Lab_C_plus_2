#include <iostream>
#include "Tools.h"
using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    int Ans ;
    Object Line;
    Line.SetDataParam(NULL,NULL,NULL);
    do {
        cout << "0: Прекратить работу. \n  1: Задать параметры кривой. \n  2: Просмотр параметров кривой. \n  3: Получить ординату по значению абсциссы. \n  4: Получить длину дуги кривой, ограниченной данными абсциссами. \n  5: Получить радиус кривизны к точке с данной абсциссой. \n  6: Получить координаты центра кривизны в точке с данной абсциссой. \n  7: Получить площадь под линией между точками с данными абсциссами. " << endl;
        cin >> Ans;
        if ((Ans > 0)&&(Ans < 8)){
            cout << "============" << endl;
            switch (Ans) {
                case 1:
                    Line = ans_1(Line);
                    break;
                case 2:
                    Line.GetData();
                    break;
                case 3:
                    ans_3(Line);
                    break;
                case 4:
                    ans_4(Line);
                    break;
                case 5:
                    ans_5(Line);
                    break;
                case 6:
                    ans_6(Line);
                    break;
                case 7:
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
