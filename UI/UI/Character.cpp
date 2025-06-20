#include "Character.h"

#include<cstdlib>
#include<ctime>
Character::Character()
{
    status.Level = 1;
    status.HP = 100;
    status.ATK = 20;
    status.Gold = 50;
}

Character::~Character(){}

/*테스트용 랜덤 출력 함수*/
void Character::setStatus()
{
    srand((unsigned int)time(NULL));
    status.Level = rand() % 100 + 1;
    status.HP = rand() % 100 + 1;;
    status.ATK = rand() % 100 + 1;
    status.Gold = rand() % 100 + 1;

}

Status* Character::GetStatus()
{
    return &status;
}

