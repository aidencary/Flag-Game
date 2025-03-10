// Aiden Cary
// Lab 7 out
// Flag Quiz Main
#include <iostream>
#include <string>
#include "graph1.h"
#include "Configuration.h"
#include "Menu.h"
#include "Game.h"

using namespace std;

int main()
{
	displayGraphics();
    srand(time(0));
	int questions = 0;
	int choices = 0;
	int flagNames = 224;
	char repeat;
    string names[] = { "Afghanistan", "Albania", "Algeria", "American_Samoa", "Andorra", "Angola", "Anguilla",
       "Antigua_and_Barbuda", "Argentina", "Armenia", "Aruba", "Australia", "Austria", "Azerbaijan",
       "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Belarus", "Belgium", "Belize", "Benin",
       "Bermuda", "Bhutan", "Bolivia", "Bosnia", "Botswana", "Brazil", "British_Virgin_Islands",
       "Brunei", "Bulgaria", "Burkina_Faso", "Burundi", "Cambodia", "Cameroon", "Canada", "Cape_Verde", "Cayman_Islands",
       "Central_African_Republic", "Chad", "Chile", "China", "Christmas_Island", "Colombia", "Comoros", "Cook_Islands",
       "Costa_Rica", "Croatia", "Cuba", "Cyprus", "Cyprus_Northern", "Czech_Republic", "Cte_dIvoire",
       "Democratic_Republic_of_the_Congo", "Denmark", "Djibouti", "Dominica", "Dominican_Republic", "Ecuador", "Egypt",
       "El_Salvador", "Equatorial_Guinea", "Eritrea", "Estonia", "Ethiopia", "Falkland_Islands", "Faroe_Islands",
       "Fiji", "Finland", "France", "French_Polynesia", "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Gibraltar",
       "Greece", "Greenland", "Grenada", "Guam", "Guatemala", "Guinea", "Guinea_Bissau", "Guyana", "Haiti", "Honduras",
       "Hong_Kong", "Hungary", "Iceland", "India", "Indonesia", "Iran", "Iraq", "Ireland", "Israel", "Italy", "Jamaica",
       "Japan", "Jordan", "Kazakhstan", "Kenya", "Kiribati", "Kuwait", "Kyrgyzstan", "Laos", "Latvia", "Lebanon", "Lesotho",
       "Liberia", "Libya", "Liechtenstein", "Lithuania", "Luxembourg", "Macao", "Macedonia", "Madagascar", "Malawi",
       "Malaysia", "Maldives", "Mali", "Malta", "Marshall_Islands", "Martinique", "Mauritania", "Mauritius", "Mexico",
       "Micronesia", "Moldova", "Monaco", "Mongolia", "Montserrat", "Morocco", "Mozambique", "Myanmar", "Namibia", "Nauru",
       "Nepal", "Netherlands", "Netherlands_Antilles", "New_Zealand", "Nicaragua", "Niger", "Nigeria", "Niue", "Norfolk_Island",
       "North_Korea", "Norway", "Oman", "Pakistan", "Palau", "Panama", "Papua_New_Guinea", "Paraguay", "Peru", "Philippines",
       "Pitcairn_Islands", "Poland", "Portugal", "Puerto_Rico", "Qatar", "Republic_of_the_Congo", "Romania", "Russian_Federation",
       "Rwanda", "Saint_Kitts_and_Nevis", "Saint_Lucia", "Saint_Pierre", "Saint_Vicent_and_the_Grenadines", "Samoa", "San_Marino",
       "Sao_Tom‚_and_Prncipe", "Saudi_Arabia", "Senegal", "Serbia_and_Montenegro", "Seychelles", "Sierra_Leone", "Singapore",
       "Slovakia", "Slovenia", "Soloman_Islands", "Somalia", "South_Africa", "South_Georgia", "South_Korea", "Soviet_Union",
       "Spain", "Sri_Lanka", "Sudan", "Suriname", "Swaziland", "Sweden", "Switzerland", "Syria", "Taiwan", "Tajikistan",
       "Tanzania", "Thailand", "Tibet", "Timor-Leste", "Togo", "Tonga", "Trinidad_and_Tobago", "Tunisia", "Turkey", "Turkmenistan",
       "Turks_and_Caicos_Islands", "Tuvalu", "UAE", "Uganda", "Ukraine", "United_Kingdom", "United_States_of_America", "Uruguay",
       "US_Virgin_Islands", "Uzbekistan", "Vanuatu", "Vatican_City", "Venezuela", "Vietnam", "Wallis_and_Futuna", "Yemen",
       "Zambia", "Zimbabwe" };

    // 1.
    Configuration config(names, flagNames);

    // 2. 
	do {
		cout << "Enter # of questions for the quiz: ";
		cin >> questions;

		config.setNoQuestions(questions); // 3.
	} while (config.setNoQuestions(questions) == false);

    // 4. 
	do {
		cout << "Enter the number of choices per questions: ";
		cin >> choices;

		config.setNoChoices(choices); // 5.
	} while (config.setNoChoices(choices) == false);

    // 6.
    Menu menu;

    // 7.
    menu.setConfig(config);

    /*
    int i = 0;
    int randNum;

        for (i = 0; i < config.getNoChoices(); i++)
        {
            randNum = 0;
            randNum = rand() % 225;

            menu.setChoice(i, config.getFlagNameAt(randNum));
        }
    */

    // 8.
    Game game;

    game.play();

    
    




	
}