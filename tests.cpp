//
// Created by Vlad on 29.11.2020.
//

#include <gtest/gtest.h>
#include "../LineClass.h"

TEST(LineConstructor,Params){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string(a.GetOrd(0)),"6.762196");
}

TEST(LineMethods,Ord){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string(a.GetOrd(2)),"30.308233");
}

TEST(LineMethods,Len){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string(a.GetLen(2,0)),"23.663057");
}

TEST(LineMethods,Rad){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string(a.GetRadius(2)),"41908.492188");
}

TEST(LineMethods,CenterCoord){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string((a.GetCentrCoord(0)).X), "-885.577332");
    ASSERT_EQ(std::to_string((a.GetCentrCoord(0)).Y),"250.808228");
}

TEST(LineMethods,Sqr){
    Object a;
    a.SetDataParam_a(1);
    a.SetDataParam_b(2);
    a.SetDataParam_c(3);
    ASSERT_EQ(std::to_string(a.GetSq(2,10)),"81374.109375");
}