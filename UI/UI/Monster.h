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

    /*테스트용 랜덤 출력 함수*/
    void setStatus();

   /*getter: 외부에서 상태 주소 접근용*/
    Status* GetStatus();

};
#endif
