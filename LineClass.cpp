#include <iostream>
#include <cmath>
#include "LineClass.h"

    float param_a,param_b,param_c;

    void Object::SetDataParam(float new_param_a,float new_param_b,float new_param_c){
        param_a = new_param_a;
        param_b = new_param_b;
        param_c = new_param_c;
    }

    void Object::GetData(){
        std::cout << "Уравнение Цепной Линии: y=a*(Cosh((x+b)/a))+c, где a=" << param_a << " ,b=" << param_b << " ,c=" << param_c << std::endl;
    }

    float Object::GetOrd(float Abs){
        float val = cosh((Abs+param_b)/param_a);
        float Ord = param_a*val+param_c;
        return Ord;
    }

    float Object::GetLen(float Abs1,float Abs2){
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

    float Object::GetRadius(float Abs){
        Abs += param_b;
        return ((GetOrd(Abs))*(GetOrd(Abs))/param_a);
    }

    Coord Object::GetCentrCoord(float Abs){
        float Radius = GetRadius(Abs);
        float Ord = GetOrd(Abs);
        float delta_x = 0.001;
        float delta_y = Ord - GetOrd(Abs + delta_x);
        Coord point;
        point.X = (Radius/(sqrt(delta_x*delta_x +delta_y*delta_y)))*delta_y+Abs;
        point.Y = (Radius/(sqrt(delta_x*delta_x +delta_y*delta_y)))*delta_x+Ord;
        return point;
    }

    float Object::GetSq(float Abs1, float  Abs2){
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