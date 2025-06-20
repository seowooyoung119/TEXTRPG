#pragma once

#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

/* 화면 출력에 필요한 x,y값*/
#include "UI_XY.h"

class UI
{
public:

	UI();
	~UI();

    /*이름 받아오기*/
    void GetName();

    /* 행동 선택 UI*/
    void Choose_ACTION();

    /*스테이터스 갱신 ALL in one part1*/
    void GetPlayerVal(int Lv, int HP, int ATK, int Gold);
    void GetMonsterVal(int M_HP, int M_ATK);

    /*CMD 출력 위치 찍어주는 함수*/
    void SetCursorPosition(int X, int Y);

    /* 캐릭터 스텟 UI*/
    void POS_STATUS();

    /* 인벤토리 UI*/
    void POS_INVENTORY();

    /* 행동 유형 선택 UI*/
    void POS_ACTION();
    
    /* 스테이지 UI*/
    void POS_STAGE();

    /* 상점 UI*/
    void POS_SHOP();

    /*전투 로그*/
    void POS_BATTLE_LOG();

    /*플레이어 전투 상태창*/
    void POS_PLAYER_SUMMARY();
    
    /*몬스터 전투 상태창*/
    void POS_MONSTER_SUMMARY();
    
    /*모든 기록 로그*/
    void POS_FULL_LOG(); 

    /*스테이터스 갱신 ALL in one part2*/
    void CheckVal();

    /* 플레이어 캐릭터 이름*/
    std::string PlayerName = "";

    /* 플레이어 캐릭터 스텟*/
    int PlayerLevel = 0, PlayerHP = 10, PlayerATK = 0, PlayerGold = 0;

    /* 몬스터 스텟*/
    int MonsterHP = 10, MonsterATK = 0;

    /* 보스 몬스터 스텟*/
    int BoosHP = 10, BoosATK = 0;

    /* 로그용 카운트*/
    int StageCount = 0, BattleCount = 0, LogCount = 0;
   
    /* 로그용 배열*/
    std::vector<std::string> Log, BattleLog;

};


#endif 