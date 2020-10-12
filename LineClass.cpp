#include <iostream>
#include <cmath>
#include "LineClass.h"

    void Object::SetDataParam_a(float new_param_a){
        param_a = new_param_a;
    }

    void Object::SetDataParam_b(float new_param_b){
        param_b = new_param_b;
    }

    void Object::SetDataParam_c(float new_param_c){
        param_c = new_param_c;
    }

    std::string Object::GetData() const {
        std::stringstream ss;
        ss << "Уравнение Цепной Линии: y=a*(Cosh((x+b)/a))+c, где a=" << param_a << " ,b=" << param_b << " ,c=" << param_c << std::endl;
        return ss.str();
    }

    std::string Object::GetData_a() const {
        std::stringstream ss;
        ss << "Уравнение Цепной Линии: y=a*(Cosh((x+b)/a))+c, где a=" << param_a << std::endl;
        return ss.str();
    }

    std::string Object::GetData_b() const {
        std::stringstream ss;
        ss<< "Уравнение Цепной Линии: y=a*(Cosh((x+b)/a))+c, где b=" << param_b << std::endl;
        return ss.str();
    }

    std::string Object::GetData_c() const {
        std::stringstream ss;
        ss << "Уравнение Цепной Линии: y=a*(Cosh((x+b)/a))+c, где c=" << param_c << std::endl;
        return ss.str();
    }

    float Object::GetOrd(float Abs) const {
        float val = cosh((Abs+param_b)/param_a);
        float Ord = param_a*val+param_c;
        return Ord;
    }

    float Object::GetLen(float Abs1,float Abs2) const {
        if (Abs1<Abs2){
            int value = Abs1;
            Abs1 = Abs2 + param_b;
            Abs2 = value + param_b;
        } else{
            Abs1 += param_b;
            Abs2 += param_b;
        }

        float dop1 = sinh(Abs1/param_a);
        float dop2 = sinh(Abs2/param_a);
        return (param_a*(dop1-dop2)) ;
    }

    float Object::GetRadius(float Abs) const {
        Abs += param_b;
        return ((GetOrd(Abs))*(GetOrd(Abs))/param_a);
    }

    Coord Object::GetCentrCoord(float Abs) const {
        float Radius = GetRadius(Abs);
        float Ord = GetOrd(Abs);
        float delta_x = 0.001;
        float delta_y = Ord - GetOrd(Abs + delta_x);
        Coord point;
        point.X = (Radius/(sqrt(delta_x*delta_x +delta_y*delta_y)))*delta_y+Abs;
        point.Y = (Radius/(sqrt(delta_x*delta_x +delta_y*delta_y)))*delta_x+Ord;
        return point;
    }

    float Object::GetSq(float Abs1, float  Abs2) const {
        if (Abs1<Abs2){
            int value = Abs1;
            Abs1 = Abs2 + param_b;
            Abs2 = value + param_b;
        }
        else{
            Abs1 += param_b;
            Abs2 += param_b;
        }
        float val1 = sinh(Abs1/param_a);
        float val2 = sinh(Abs2/param_a);
        return (param_a*(param_a*(val1-val2)) + (Abs1-Abs2)*param_c);
    }
