#pragma once

#ifndef UI_H_
#define UI_H_

#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

/* ȭ�� ��¿� �ʿ��� x,y��*/
#include "UI_XY.h"

class UI
{
public:

	UI();
	~UI();

    /*�̸� �޾ƿ���*/
    void GetName();

    /* �ൿ ���� UI*/
    void Choose_ACTION();

    /*�������ͽ� ���� ALL in one part1*/
    void GetPlayerVal(int Lv, int HP, int ATK, int Gold);
    void GetMonsterVal(int M_HP, int M_ATK);

    /*CMD ��� ��ġ ����ִ� �Լ�*/
    void SetCursorPosition(int X, int Y);

    /* ĳ���� ���� UI*/
    void POS_STATUS();

    /* �κ��丮 UI*/
    void POS_INVENTORY();

    /* �ൿ ���� ���� UI*/
    void POS_ACTION();
    
    /* �������� UI*/
    void POS_STAGE();

    /* ���� UI*/
    void POS_SHOP();

    /*���� �α�*/
    void POS_BATTLE_LOG();

    /*�÷��̾� ���� ����â*/
    void POS_PLAYER_SUMMARY();
    
    /*���� ���� ����â*/
    void POS_MONSTER_SUMMARY();
    
    /*��� ��� �α�*/
    void POS_FULL_LOG(); 

    /*�������ͽ� ���� ALL in one part2*/
    void CheckVal();

    /* �÷��̾� ĳ���� �̸�*/
    std::string PlayerName = "";

    /* �÷��̾� ĳ���� ����*/
    int PlayerLevel = 0, PlayerHP = 10, PlayerATK = 0, PlayerGold = 0;

    /* ���� ����*/
    int MonsterHP = 10, MonsterATK = 0;

    /* ���� ���� ����*/
    int BoosHP = 10, BoosATK = 0;

    /* �α׿� ī��Ʈ*/
    int StageCount = 0, BattleCount = 0, LogCount = 0;
   
    /* �α׿� �迭*/
    std::vector<std::string> Log, BattleLog;

};


#endif 