#pragma once

#ifndef BATTLE_SYSTEM_H_
#define BATTLE_SYSTEM_H_

#include "BattleSystem.h"
#include "Character.h"
#include "Monster.h"

class BattleSystem
{
public: 
	BattleSystem();
	~BattleSystem();
	Character Player;
	Monster Mon;

	void Test();

};


#endif
