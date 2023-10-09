// C++ Overworld System
// Written By: Trentyne Morgan

#include <iostream>  // Standard C++ Input/Output Library
#include <stdlib.h>	 // Standard C Library

/* This is a user-defined header, so we surround it in double quotes "",
instead of our usual brackets "<>". This is where we can put stuff
like classes and function declarations*/
#include "map.hpp"   

// Using standard namespace
using namespace std;

//=================
/* Main Function */
//=================
int main(){

	/* Show the title screen. (Declared in map.hpp/Defined in map.cpp) */
	titleScreen();
	
	/* In our map.hpp file, we declared a Map class. We create a new object
	from that Map class called testMap. We use a constructor method in map.cpp
	so when we create a new map object, we can pass a width and height to the class. 
	
	We do the same thing with our testPlayer object, except we use the constructor method
	to pass the player's starting coordinates.*/
	Map testMap(5,5);			
	Player testPlayer(0,0);		
	
	// This controls our program loop
	bool programRun = true;	    
	
	// While our programRun boolean is true,
	while (programRun == true) {
	
		/* We call the displayMapArea() function from inside of our testMap object.
		Functions inside of a class are called "methods". This function
		tells us our defined map area. (method from class in map.hpp). 
		
		We call methods from inside functions using classObject.classMethod().
		(don't forget the period in-between)
		
		We also call a method from the testPlayer object to display their X/Y position */
		testMap.displayMapArea();
		testPlayer.displayPlayerPosition();
		
		/* Create a new variable to hold our player's direction.
		
		Then, in map.hpp we declare a function called movementInput that takes
		player input and returns it if it is valid. Then in map.cpp we define
		movmentInput()'s code. */
		
		std::string playerDirection;
		playerDirection = movementInput();
	
	
		/* -- Summary of Movement Code -------------------------------------------------------*/
		
		/* 1. If the player moves in any direction, hold the attempted move
		in a new variable (testPlayer's position + movement on X/Y axis by 1.)
		The variable should be named after which direction the player moves.
		
		2. If the attemptedMove is not greater than the map height/width AND (&&)
		the attemptedMove up is not less than 0 (negative numbers would mean out of range)
		
		3. Allow the player to move, and either add/subtract 1 to the X/Y player's position.
		Otherwise, it's an invalid move */
	
		/* --------------------------------------------------------------------------------- */
	
		// If player inputs up,
		if (playerDirection == "up"){
	
			// We make a variable to hold the testPlayer Object's Y position
			// plus 1 on Y axis.
			int attemptMoveUp = testPlayer.playerPositionY + 1;
		
			// If the attempted move up is less than or equal to the testMap's set height AND
			// the attempted move up is not 0, allow movement upward on map by 1
			if (attemptMoveUp <= testMap.mapHeight && attemptMoveUp != -1){
			
				std::cout << "\n\n" << "You go upward." << "\n\n";
				testPlayer.playerPositionY++;
			
			// Otherwise don't allow movement
			} else {
		
				std::cout << "\n\n" << "You can't go that way." << "\n\n";
			}


		// If player inputs down,
		} else if (playerDirection == "down") {
	
			// For down, we make another variable to hold the testPlayer Object's Y position
			// subtracted by 1.
			int attemptMoveDown = testPlayer.playerPositionY - 1;
		
			// If the attempted move down is less than or equal to the testMap's set height AND
			// the attempted move up is not 0, allow movement downward by 1
			if (attemptMoveDown <= testMap.mapHeight && attemptMoveDown != -1){
		
				std::cout << "\n\n" << "You go downward." << "\n\n";
				testPlayer.playerPositionY--;
		
			// Otherwise don't allow movement
			} else {
		
				std::cout << "\n\n" << "You can't go that way." << "\n\n";
			}
	
	
		// If player inputs left,
		} else if (playerDirection == "left") {
	
			// Now on our X Axis, we make a variable to hold the testPlayer Object's X position
			// subtracted by 1.
			int attemptMoveLeft = testPlayer.playerPositionX - 1;
		
			// If the attempted move left is less than or equal to the testMap's set height AND 
			// the attempted move up is not 0, allow movement left by 1
			if (attemptMoveLeft <= testMap.mapWidth && attemptMoveLeft != -1){
		
				std::cout << "\n\n" << "You go left." << "\n\n";
				testPlayer.playerPositionX--;
		
			// Otherwise don't allow movement.
			} else {
		
				std::cout << "\n\n" << "You can't go that way." << "\n\n";
			}
	

		// If player inputs right,
		} else if (playerDirection == "right") {
	
			// Still on X Axis, we make a variable to hold the testPlayer's Object's X position
			// plus 1.
			int attemptMoveRight = testPlayer.playerPositionX + 1;
		
			// If the attempted move right is less than or equal to the testMap's set height AND
			// the attempted move up is not 0, allow movement right by 1
			if (attemptMoveRight <= testMap.mapWidth && attemptMoveRight != -1){
		
				std::cout << "\n\n" << "You go right." << "\n\n";
				testPlayer.playerPositionX++;
			
			// Otherwise don't allow movement.
			} else {
		
				std::cout << "\n\n" << "You can't go that way." << "\n\n";
		
			}
			
		// If player inputs exit, leave the program
		} else if (playerDirection == "exit"){
		
			std::cout << "\n\nExiting..\n\n";
			exit(1);
		
		// Otherwise, throw an error, as movementInput()
		// should catch invalid string inputs.
		} else {
	
			// Error for if movementInput() returns something it's not supposed to
			std::cout << "\n\n" << "ERROR: Invalid option outside of movement input." << "\n\n";
		}
	}
}