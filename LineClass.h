#include <cmath>
#include <iostream>

    struct Coord{
        float X;
        float Y;
    };

    class Object{
        private:
            float param_a,param_b,param_c;

        public:
            void SetDataParam(float new_param_a,float new_param_b,float new_param_c);
            void GetData();
            float GetOrd(float Abs);
            float GetLen(float Abs1,float Abs2);
            float GetRadius(float Abs);
            Coord GetCentrCoord(float Abs);
            float GetSq(float Abs1, float  Abs2);
    };