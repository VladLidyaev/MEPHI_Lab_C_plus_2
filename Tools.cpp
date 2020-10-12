#include <iostream>
#include "Tools.h"

    Object ans_1_a(Object Line){
        float a;
        std::cout << "Введите параметр a (!=0) из уравнения y=a*(Cosh((x+b)/a))+c" << std::endl;
        std::cin >> a;
        Line.SetDataParam_a(a);
        return Line;
    };

    Object ans_1_b(Object Line){
        float b;
        std::cout << "Введите параметр b из уравнения y=a*(Cosh((x+b)/a))+c" << std::endl;
        std::cin >> b;
        Line.SetDataParam_b(b);
        return Line;
    };

    Object ans_1_c(Object Line){
        float c;
        std::cout << "Введите параметр c из уравнения y=a*(Cosh((x+b)/a))+c" << std::endl;
        std::cin >> c;
        Line.SetDataParam_c(c);
        return Line;
    };

    void ans_3(Object Line){
        float Abs;
        std::cout << "Введите абсциссу: " << std::endl;
        std::cin >> Abs;
        std::cout << "Значение ординаты : " << Line.GetOrd(Abs) << std::endl;
    };

    void ans_4(Object Line){
        float Abs1,Abs2;
        std::cout << "Введите первую абсциссу: " << std::endl;
        std::cin >> Abs1;
        std::cout << "Введите вторую абсциссу: " << std::endl;
        std::cin >> Abs2;
        std::cout << "Длина дуги кривой, ограниченная точками с введёнными абсциссами : " << Line.GetLen(Abs1,Abs2) << std::endl;
    };

    void ans_5(Object Line){
        float Abs;
        std::cout << "Введите абсциссу: " << std::endl;
        std::cin >> Abs;
        std::cout << "Радиус кривизны кривой в точке с введённой абсциссой : " << Line.GetRadius(Abs) << std::endl;
    };

    void ans_6(Object Line){
        float Abs;
        std::cout << "Введите абсциссу: " << std::endl;
        std::cin >> Abs;
        std::cout << "Кординаты центра кривизны кривой в точке с введённой абсциссой : X = " << Line.GetCentrCoord(Abs).X << " , Y = " << Line.GetCentrCoord(Abs).Y << std::endl;
    };

    void ans_7(Object Line){
        float Abs1,Abs2;
        std::cout << "Введите первую абсциссу: " << std::endl;
        std::cin >> Abs1;
        std::cout << "Введите вторую абсциссу: " << std::endl;
        std::cin >> Abs2;
        std::cout << "Площадь под кривой, ограниченная точками с введёнными абсциссами : " << Line.GetSq(Abs1,Abs2) << std::endl;
    };
