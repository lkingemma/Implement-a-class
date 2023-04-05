// Emma King
// This program implements a class and tests each of the functions within a driver / main program.
#include <iostream>
#include <iomanip>
#include "GameStock.h"

using namespace std;

int main()
{
    // Declare an object named game1 that uses the default constructor
    GameStock game1;
    
    // Declare an object named game2 that uses the constructor with parameters
    GameStock game2("Apples to Apples", "Board Game", 24.99, 2.0, 10);
    
    // Call the set functions to set all the members of game1 appropriately
    game1.setName("Mario Kart");
    game1.setType("GameBoy");
    game1.setPrice(19.99);
    game1.setVersion(1.0);
    game1.setNumberOfGames(5);
    
    // Call the get functions to get and display the individual members of game1
    cout << left << setw(20) << "Game 1: " << endl;
    cout << left << setw(20) << "Name: " << game1.getName() << endl;
    cout << setw(20) << "Type: " << game1.getType() << endl;
    cout << setw(20) << "Price: " << fixed << setprecision(2) << "$" << game1.getPrice() << endl;
    cout << setw(20) << "Version: " << fixed << setprecision(2) << game1.getVersion() << endl;
    cout << setw(20) << "Number of Games: " << game1.getNumberOfGames() << endl;
    cout << endl;
  
    // Call the display function to display game2
    cout << "Game 2: " << endl;
    game2.display();
    
    // Call increaseNumGames to increase the number of games in stock for game1
    game1.increaseNumGames(10);
    cout << endl;
  
    // Call the display function with game1 to ensure increaseNumGames
    cout << "Game 1 after increaseNumGames: " << endl;
    game1.display();
    
    // Call decreaseNumGames to decrease the number of games stock of game2
    game2.decreaseNumGames(2);
    cout << endl;
  
    // Call the display function with game2 to ensure decreaseNumGames
    cout << "Game 2 after decreaseNumGames: " << endl;
    game2.display();
    
    return 0;
}