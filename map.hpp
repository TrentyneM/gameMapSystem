/* This is our user-defined header. Here we can put things
such as classes and function declarations. We then define these functions
in map.cpp */

/* This is our Map class. We will be creating Map Objects from
this class */
class Map{

/* This keyword allows us to access all attributes and methods
inside of our map class (as long as they are created below this keyword) */
public:

	/* Here we create the width and height variables for our map class.
	So when we construct a new object with this class using a constructor method,
	
	we can pass a width and height parameter when the class is created (X, Y),
	and they'll be stored here. 
	
	As a sidenote: any variable inside of a class is an attribute or member variable*/
	int mapWidth;
	int mapHeight;	
	
	/* Any function we declare and define inside of a class is method or member function.
	This function displays our mapWidth and mapHeight attributes. */
	void displayMapArea(){
	
		std::cout << "\n";
		std::cout << "Map Current Width: " << mapWidth << "\n";
		std::cout << "Map Current Height: " << mapHeight;
		std::cout << "\n";
	}
	
	/* Constructor methods let us pass data to a function when it's created.
	in this case, we'd want to create one to accept a width and height when a new map object is created. */
	Map(int newWidth, int newHeight); 
};


/* Class to create our player objects from */
class Player{

/* Remember, Below this keyword everything (methods and attributes) 
can be accessed outside the function */
public:

	/* These variables (attributes) are for the Player's X/Y Position */
	int playerPositionX; 
	int playerPositionY;  
	
	// Here's a method to reset our player's position.
	void positionReset(){
	
		playerPositionX = 0;
		playerPositionY = 0;
	}
	
	// Display our Player's X and Y position
	void displayPlayerPosition(){
	
		std::cout << "\n";
		std::cout << "Player Position X: " << playerPositionX << "\n";
		std::cout << "Player Position Y: " << playerPositionY << "\n";
	
	}
	
	/* Here is another constructor method that takes an X and Y as a "spawn point"
	for the new player object when it's created. */
	Player(int newPosX, int newPosY);
};


/* Here we can declare our functions that we want to keep
neat and seperate, now we move over to map.cpp... -> */

void titleScreen();	         // Show the Title Screen
std::string movementInput(); // Input for Player Movement