// Aiden Cary
// Lab 7 out
// Menu ccp
#include <iostream>
#include <string>
#include "graph1.h"
#include "Configuration.h"
#include "Menu.h"
#include "Game.h"

Menu::Menu()
{
	choices = nullptr;
	selection = 0;
}

Menu::~Menu()
{
	delete[] choices;
}

Menu::Menu(const Menu& menu)
{
	int size = config.getNoChoices();
	choices = new string[size];

	for (int i = 0; i < size; i++) {
		this->choices[i] = menu.choices[i];
	}

	// Copy other member variables
	this->selection = menu.selection;

}

void Menu::setConfig(Configuration config)
{
	this->config.setNoChoices(config.getNoChoices());
	this->config.setNoFlagNames(config.getNoFlagNames());
	this->config.setNoQuestions(config.getNoQuestions());
	
	/*
	int i = 0;
	int randNum;
	int count = 0;
	do {
		
			for (i = 0; i < config.getNoChoices(); i++)
		{
			randNum = 0;
			randNum = rand() % 225;

			choices[i] = config.getFlagNameAt(randNum);
		}

			count++;
	} while (count < config.getNoChoices());
	*/
	
}

Configuration Menu::getConfig()
{
	return config;
}

void Menu::setSelection(int selection)
{
	this->selection = selection;
}

void Menu::setChoice(int index, string flag_name)
{
	this->choices[index] = flag_name;
}

string Menu::getChoice(int index)
{
	string choice = ";";

	choice = this->choices[index];

	return choice;
}

int Menu::getSelection()
{
	return selection;
}

int Menu::displayMenu()
{
	static int i = 0;;
	gout << setPos(200, 30) << setColor(0, 255, 0)
		<< "Questions #" << (++i) << endg;

	gout << setPos(200, 220) << setColor(0, 255, 0)
		<< "Choose from the following:" << endg;

	int y = 235;

	for (int i = 0; i < config.getNoChoices(); i++)
	{
		gout << setPos(200, y) << setColor(0, 255, 0)
			<< (i + 1) << ". " << choices[i] << endg;

		y += 15;
	}

	gout << setPos(200, y) << setColor(0, 255, 0)
		<< "Enter Choice on Console: " << endg;

	int userSelection = 0;
	cout << "Choose your selection: ";
	cin >> userSelection;


	return userSelection;
}

void Menu::displayFlag(string flag_name)
{
	string bmp = ".bmp";
	string fn = flag_name + bmp;

	displayBMP(&fn[0], 200, 50);
	
}