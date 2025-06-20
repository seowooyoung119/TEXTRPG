#include "Title.h"
#include "UI_Function.h"
#include "BattleSystem.h" 

int main()
{
	Title Game;
	UI InterFace;
	BattleSystem Battlesys;

	Game.GameStart();
	InterFace.GetName();

	while (true)
	{
		int ActionCheck = 0;

		Status* statPtr1 = Battlesys.Player.GetStatus();
		Status* statPtr2 = Battlesys.Mon.GetStatus();
		InterFace.GetPlayerVal(statPtr1->Level, statPtr1->HP, statPtr1->ATK, statPtr1->Gold);
		InterFace.GetMonsterVal(statPtr2->HP, statPtr2->ATK);

		if (1==InterFace.Choose_ACTION())
		{
			Battlesys.Mon.setStatus();
			Battlesys.Player.setStatus();
		}
		InterFace.GetPlayerVal(statPtr1->Level, statPtr1->HP, statPtr1->ATK,statPtr1->Gold);
		InterFace.GetMonsterVal(statPtr2->HP,statPtr2->ATK);
	}
}