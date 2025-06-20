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

    /*테스트용 랜덤 출력 함수*/
    void setStatus();

    /*getter: 외부에서 상태 주소 접근용*/
    Status* GetStatus();

};
#endif;