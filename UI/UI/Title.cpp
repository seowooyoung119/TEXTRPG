#include "Title.h"

Title::Title()
{
}

Title::~Title()
{
}

/* ���� ���� ȭ��*/
void Title::GameStart()
{
	std:: cout << "====START GAME=====" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

/* ���� ���� ȭ��*/
void Title::GameOver()
{
	system("cls");
	std::cout << "____________________" << std::endl;
	std::cout << std::endl;
	std::cout << "     GAME OVER";
	std::cout << std::endl;
	std::cout << "____________________" << std::endl;
}

/* ���� �¸� ȭ��*/
void Title::Victory()
{
	system("cls");
	std::cout << "____________________" << std::endl;
	std::cout << std::endl;
	std::cout << "      VICTORY";
	std::cout << std::endl;
	std::cout << "____________________" << std::endl;
	
}





