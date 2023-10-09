// Map System Function Definitions

#include <iostream>  // Standard C++ Input/Output


/* MAKE SURE you include this so your constructor methods will
not throw an error */
#include "map.hpp"	 

/* Here we define our constructor methods, we give them new variables as parameters
and then use them in main.cpp to pass a width and height when a mapObject is created.

We do the same for our player object so we can pass X/Y coordinates for it's starting position */
Map::Map(int newWidth, int newHeight)
  : mapWidth(newWidth), mapHeight(newHeight){}
  
Player::Player(int newPosX, int newPosY)
  : playerPositionX(newPosX), playerPositionY(newPosY){}

// Title Screen Function
void titleScreen(){

	std::cout << "\n\n";
	std::cout << "==== C++ Overworld Map System ====";
	std::cout << "=== Written By: Trentyne Morgan ===";
	std::cout << "\n\n";
	
}

// Function to allow for Player Movement.
std::string movementInput(){

	bool allowInput;	// Allow player input?
	std::string input;  // Holds player input.
	
	// Allow for player input as soon as this function is run
	allowInput = true;
	
	// Only return the input if it is one of the four directions.
	while (allowInput == true){
	
		std::cout << "\n";
		std::cout << "== Command List ==\n";
		std::cout << "1.) 'up'    - Go up.\n";
		std::cout << "2.) 'down'  - Go down.\n";
		std::cout << "3.) 'left'  - Go left.\n";
		std::cout << "4.) 'right' - Go Right.\n";
		std::cout << "5.) 'exit'  - Exit Program.\n";
		std::cout << "\n\n";
		
		std::cout << "Enter a command and press 'Enter': ";
		std::cin >> input;
		
		if (input == "up"){
		
			return input;
		
		} else if (input == "down"){
		
			return input;
		
		} else if (input == "left"){
		
			return input;
		
		} else if (input == "right"){
		
			return input;
			
		} else if (input == "exit"){
		
			return input;
			
		} else {
		
			std::cout << "\n\n" << "Invalid Input, Please try again." << "\n\n";
			
		}
		
	}
}