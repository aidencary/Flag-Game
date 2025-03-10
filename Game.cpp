// AIden Cary
// Lab 7 out
// Game ccp
#include <iostream>
#include <string>
#include "graph1.h"
#include "Game.h"
#include "Menu.h"
#include "Configuration.h"

Game::Game()
{
	no_correct = 0;
}

int Game::play()
{
	// 1.
	int flagRandNum = 0;
	flagRandNum = rand() % 224;
	
	// 2.
	string correct = menu.getConfig().getFlagNameAt(flagRandNum);
	
	// 3.
	int i = 0;
	int randNum;

	// Sets subscript 0 of menu private data field choices to correct.
	menu.setChoice(0, correct);

	// 4.
	// Sets rest of choices
	for (i = 1; i < menu.getConfig().getNoChoices(); i++)
	{
		randNum = 0;
		randNum = rand() % 225;
		
		menu.setChoice(i, menu.getConfig().getFlagNameAt(randNum));
	}

	menu.displayFlag(menu.getChoice(0));

	menu.displayMenu();




	
}

void Game::setMenu(Menu menu)
{
	this->menu.setSelection(menu.getSelection());

	int choices = menu.getConfig().getNoChoices();

	for (int i = 0; i < choices; i++)
	{
		this->menu.setChoice(i,menu.getChoice(i));
	}

	this->menu.setConfig(menu.getConfig());
}

Menu Game::getMenu()
{
	return menu;
}

int Game::getNoCorrect()
{
	return no_correct;
}
