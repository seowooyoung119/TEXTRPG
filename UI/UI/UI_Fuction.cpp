#include "UI_Function.h"
#include "Title.h"
using namespace std;

UI::UI(){}
UI::~UI(){}

/*CMD ��� ��ġ ����ִ� �Լ�*/
void UI::SetCursorPosition(int X, int Y)
{
	COORD coord;
	coord.X = static_cast<SHORT>(X);
	coord.Y = static_cast<SHORT>(Y);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

/*�̸� �޾ƿ���*/
void UI::GetName()
{
	std::string Name = "";
	std::cout << "Add Name Plz : ";
	std::cin >> Name;
	PlayerName = Name;
	system("cls");
}

/* ĳ���� ���� UI*/
void UI::POS_STATUS()
{
	SetCursorPosition(UI_XY::POS_STATUS_X, UI_XY::POS_STATUS_Y);
	cout << "=======STATUS=======" << endl;
	cout << "|  Name : " << PlayerName << endl;
	cout << "|  Level : " << PlayerLevel << endl;
	cout << "|     HP : " << PlayerHP << endl;
	cout << "|    ATK : " << PlayerATK << endl;
	cout << "|   Gold : " << PlayerGold << endl;
	cout << "____________________" << endl;
}

/* �κ��丮 UI*/
void UI::POS_INVENTORY()
{
	SetCursorPosition(UI_XY::POS_INVENTORY_X, UI_XY::POS_INVENTORY_Y);
	cout << "=====INVENTORY======" << endl;
	cout << "| item A : AAAAAAA" << endl;
	cout << "| item B : BBBBBBB" << endl;
	cout << "| item C : CCCCCCC" << endl;
	cout << "| item D : CCCCCCC" << endl;
	cout << "____________________" << endl;

}

/* �ൿ ���� ���� UI*/
void UI::POS_ACTION()
{

	SetCursorPosition(UI_XY::POS_ACTION_X, UI_XY::POS_ACTION_Y);
	cout << "=======ACTION=======" << endl;
	cout << "|   BATTLE : 1 " << endl;
	cout << "|     SHOP : 2 " << endl;
	cout << "|      ESC : 3 " << endl;
	cout << "____________________" << endl;
}

/* �������� UI*/
void UI::POS_STAGE()
{
	SetCursorPosition(UI_XY::POS_STAGE_X, UI_XY::POS_STAGE_Y);
	cout << "-STAGE : " << StageCount << " -" << endl;
}

/* ���� UI (�湮 �� ���� ��)*/
void UI::POS_SHOP()
{
	SetCursorPosition(UI_XY::POS_SHOP_X, UI_XY::POS_SHOP_Y);
	cout << "========SHOP========" << endl;
	cout << "| NOT Visiting NOW " << endl;
	cout << "____________________" << endl;
}

/*���� �α�*/
void UI::POS_BATTLE_LOG()
{
	SetCursorPosition(UI_XY::POS_BATTLE_TITLE_X, UI_XY::POS_BATTLE_TITLE_Y);
	cout << "======= BATTLE =======" << endl;

	if (!BattleLog.empty())
	{

		for (int i = 0; i < BattleLog.size(); ++i)
		{
			if (BattleLog.size() > 20)
			{
				BattleLog.erase(BattleLog.begin());
			}

			SetCursorPosition(UI_XY::POS_BATTLE_LOG_X, UI_XY::POS_BATTLE_LOG_Y + i + 1);
			cout << BattleLog[i] << endl;
		}
	}
}

/*�÷��̾� ���� ����â*/
void UI::POS_PLAYER_SUMMARY()
{
	SetCursorPosition(UI_XY::POS_PLAYER_SUMMARY_X, UI_XY::POS_PLAYER_SUMMARY_Y);
	cout << "=   PLAYER   =" << endl;
	SetCursorPosition(UI_XY::POS_PLAYER_SUMMARY_X, UI_XY::POS_PLAYER_SUMMARY_Y+1);
	cout << "=  HP : " << PlayerHP << " =" << endl;
	SetCursorPosition(UI_XY::POS_PLAYER_SUMMARY_X, UI_XY::POS_PLAYER_SUMMARY_Y+2);
	cout << "= ATK : " << PlayerATK << " =" << endl;
}

/*���� ���� ����â*/
void UI::POS_MONSTER_SUMMARY()
{
	SetCursorPosition(UI_XY::POS_MONSTER_SUMMARY_X, UI_XY::POS_MONSTER_SUMMARY_Y);
	cout << "=   MONSTER  =" << endl;
	SetCursorPosition(UI_XY::POS_MONSTER_SUMMARY_X, UI_XY::POS_MONSTER_SUMMARY_Y+1);
	cout << "=  HP : " << MonsterHP << " =" << endl;
	SetCursorPosition(UI_XY::POS_MONSTER_SUMMARY_X, UI_XY::POS_MONSTER_SUMMARY_Y+2);
	cout << "= ATK : " << MonsterATK << " =" << endl;
}

/*��� ��� �α�*/
void UI::POS_FULL_LOG()
{
	SetCursorPosition(UI_XY::POS_FULL_LOG_X, UI_XY::POS_FULL_LOG_Y);
	cout << "======= FULL LOG =======" << endl;

	if (!Log.empty())
	{
		for (int i = 0; i < Log.size(); ++i)
		{
			if (Log.size() > 28)
			{
				Log.erase(Log.begin());
			}

			SetCursorPosition(UI_XY::POS_FULL_LOG_X, UI_XY::POS_FULL_LOG_Y + i + 1);
			cout << Log[i] << endl;
		}
	}
}

/*�÷��̾� �������ͽ� ���� ALL in one part1*/
void UI::GetPlayerVal(int Lv, int HP, int ATK, int Gold)
{
	system("cls");
	PlayerLevel = Lv;
	PlayerHP = HP;
	PlayerATK = ATK;
	PlayerGold = Gold;
}

/*���� �������ͽ� ���� ALL in one part2*/
void UI::GetMonsterVal(int M_HP, int M_ATK)
{
	MonsterHP = M_HP;
	MonsterATK = M_ATK;
}

/*UI �������ͽ� ���� ALL in one part3*/
void UI::CheckVal()
{
	    system("cls");
		POS_STATUS();
		POS_INVENTORY();
		POS_STAGE();
		POS_SHOP();
		POS_MONSTER_SUMMARY();
		POS_PLAYER_SUMMARY();
		POS_FULL_LOG();
		POS_BATTLE_LOG();
		POS_ACTION();
}

/* �ൿ ���� UI*/
void UI::Choose_ACTION()
{
	int ChooseAction = 0;
	bool IsAction = false;
	while (IsAction==false)
	{
		if(PlayerHP <= 0)
		{
			Title Over;
			Over.GameOver();
			break;
		}

		if (BoosHP <= 0 && 10 <= StageCount)
		{
			Title Win;
			Win.Victory();
			break;
		}

		CheckVal();
		SetCursorPosition(UI_XY::POS_ACTION_X, UI_XY::POS_ACTION_Y + 7);
		cout << "Action? : ";
		cin >> ChooseAction;

		switch (ChooseAction)
		{
		case 1:
			Log.push_back(to_string(++LogCount) + " Start Battle");
			BattleLog.push_back(to_string(++BattleCount) + " This is Battle");
			CheckVal();
			SetCursorPosition(UI_XY::POS_ACTION_X, UI_XY::POS_ACTION_Y + 7);
			cout << "                        ";
			++StageCount;;
			IsAction = true;
			break;

		case 2:
			Log.push_back(to_string(++LogCount) + " Start Shopping");
			CheckVal();
			SetCursorPosition(UI_XY::POS_ACTION_X, UI_XY::POS_ACTION_Y + 7);
			cout << "                        ";
			IsAction = true;
			break;

		case 3:
			Log.push_back(to_string(++LogCount) + " End Game");
			system("cls");
			IsAction = true;
			exit(0);

		default :
			cin.clear();
			cin.ignore();
			system("cls");
		}
	}
}
