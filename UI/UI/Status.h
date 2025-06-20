#pragma once

#ifndef Status_H_
#define Status_H_
struct Status
{
    int Level = 1;
    int HP = 100;
    int ATK = 20;
    int Gold = 50;

    Status* next = nullptr;
};

#endif;