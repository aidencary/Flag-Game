#ifndef GAME_H
#define GAME_H

class Game
{
private:
    Menu menu;
    int no_correct;


public:
    Game();
    int play();
    void setMenu(Menu menu);
    Menu getMenu();
    int getNoCorrect();


};


#endif // !GAME_H

