#pragma once

#ifndef Monster_H_
#define Monster_H_
#include "Status.h"


class Monster
{
private:
    Status status;

public:
    
    Monster();
    ~Monster();

    /*�׽�Ʈ�� ���� ��� �Լ�*/
    void setStatus();

   /*getter: �ܺο��� ���� �ּ� ���ٿ�*/
    Status* GetStatus();

};
#endif
