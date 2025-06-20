#include "Monster.h"

#include<cstdlib>
#include<ctime>
Monster::Monster()
{
    status.Level = 1;
    status.HP = 111;
    status.ATK = 22;
    status.Gold = 55;

}

Monster::~Monster(){}


void Monster::setStatus()

{    /*테스트용 랜덤 출력 함수*/
    srand((unsigned int)time(NULL));
    status.Level = rand() % 100 + 1;
    status.HP = rand() % 100 + 1;;
    status.ATK = rand() % 100 + 1;
    status.Gold = rand() % 100 + 1;

}
Status* Monster::GetStatus()
{
    return &status;
}
