#include <iostream>

#include <gamebox.h>
#include <game.h>

void Gamebox::add_game(Game* gptr)
{
    games.push_back(gptr);
}


void Gamebox::display_games()
{
    for (int i = 0; i < (int) games.size(); i++)
    {
        std::cout << i << ". " << games[i]->get_title() << std::endl;
    }

}

/*
void Gamebox::pick_game()
{
    std::cout << "Enter a number from the list:\n";
    char user_input;
    std::cin >> user_input;
    int i = user_input - '0';
    std::cin.clear();
    if (std::isdigit(user_input) && i >= 0 && i < (int)games.size())
    {
        selected_game = i;
    }
    else
    {
        pick_game();
    }
}
*/

void Gamebox::start()
{
    // Display all the games and let the user choose
    std::cout << "Welcome to my text based gamebox :)\n";
    display_games();
    // pick_game();
    selected_game = 0;
    std::cout << selected_game << std::endl;
    std::cout << "You picked: " << games[selected_game]->get_title() << std::endl;
    games[selected_game]->play();
}
