#include <cmath>
#include <iostream>
#include <string.h>
#include <sstream>

    struct Coord{
        float X;
        float Y;
    };

    class Object{
        private:
            float param_a,param_b,param_c;

        public:
            void SetDataParam_a(float a);
            void SetDataParam_b(float b);
            void SetDataParam_c(float c);
            std::string GetData();
            std::string GetData_a();
            std::string GetData_b();
            std::string GetData_c();
            float GetOrd(float Abs);
            float GetLen(float Abs1,float Abs2);
            float GetRadius(float Abs);
            Coord GetCentrCoord(float Abs);
            float GetSq(float Abs1, float  Abs2);
    };
