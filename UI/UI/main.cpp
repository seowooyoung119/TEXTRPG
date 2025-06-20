#include "Title.h"
#include "UI_Function.h"
#include "Character.h"
#include "Monster.h"
int main()
{
	Title Game;
	UI InterFace;
	Character Player;
	Monster Monster;

	Game.GameStart();
	InterFace.GetName();

	while (true)
	{
		InterFace.GetPlayerVal(Player.Level, Player.HP, Player.ATK, Player.Gold);
		InterFace.GetMonsterVal(Monster.HP, Monster.ATK);
		InterFace.Choose_ACTION();
	}
}