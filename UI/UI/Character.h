#pragma once

#ifndef Character_H_
#define Character_H_
#include "Status.h"
class Character
{
private:
    Status status; 

public:
    Character();
    ~Character();

    /*�׽�Ʈ�� ���� ��� �Լ�*/
    void setStatus();

    /*getter: �ܺο��� ���� �ּ� ���ٿ�*/
    Status* GetStatus();

};
#endif;