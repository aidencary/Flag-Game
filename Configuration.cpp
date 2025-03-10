// Aiden Cary
// Lab 7 out
// Config Main
#include <iostream>
#include <string>
#include "graph1.h"
#include "Configuration.h"
#include "Menu.h"
#include "Game.h"

using namespace std;

Configuration::Configuration()
{
	noChoices = 4;
	noQuestions = 10;
	noFlagNames = 224;
	flagNames = new string[noFlagNames];
}

Configuration::Configuration(string* value, int noFlagNames)
{
	this->flagNames = new string[noFlagNames];

	// Copy each flagName from value to flagNames
	for (int i = 0; i < noFlagNames; ++i) {
		this->flagNames[i] = value[i];
	}

	// Set the number of flagNames
	this->noFlagNames = noFlagNames;
}

Configuration::~Configuration()
{
	delete[] flagNames;
}

Configuration::Configuration(const Configuration& config)
{
	this->noChoices = config.noChoices;
	this->noQuestions = config.noQuestions;
	this->noFlagNames = config.noFlagNames;
	
	this->flagNames = new string[config.noFlagNames];

}

bool Configuration::setNoChoices(int no_choices)
{
	bool result = false;
	if (no_choices < 2) {
		this->noChoices = 2;
		return result;
	}
	else if (no_choices > 6) {
		this->noChoices = 6;
		return result;
	}
	else {
		this->noChoices = no_choices;
		result = true;
		return result;
	}
}

bool Configuration::setNoQuestions(int no_questions)
{
	bool result = false;
	if (no_questions < 3) {
		this->noQuestions = 3;
		return result;
	}
	else if (no_questions > 20) {
		this->noQuestions = 20;
		return result;
	}
	else {
		this->noQuestions = no_questions;
		result = true;
		return result;
	}
}

void Configuration::setFlagNameAt(string flagName, int position)
{
	
}

string Configuration::getFlagNameAt(int index)
{
	string flagName = "";

	flagName = this->flagNames[index];

	return flagName;		
}

string* Configuration::getAllFlagNames()
{
	return flagNames;
}

void Configuration::setNoFlagNames(int noFlagNames)
{
	this->noFlagNames = noFlagNames;
}

int Configuration::getNoChoices()
{
	return noChoices;
}

int Configuration::getNoQuestions()
{
	return noQuestions;
}

int Configuration::getNoFlagNames()
{
	return noFlagNames;
}