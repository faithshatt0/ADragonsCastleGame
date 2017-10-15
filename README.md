# ADragonsCastleGame

A Dragon’s Castle

Faith Shatto, Raju Kumar, Juhi Park 

https://youtu.be/F7fqUVL70js

*DISCLAIMER: ORIGINAL PROJECT CREATION WAS NOT ORGANIZED THROUGH GITHUB*

Our game is a single player user-driven game consisting of an adventurous story line and tasks the user must complete to continue. A player must win two of the challenges we've included in order to progress the main story of adventure. In the end, they must defeat a ferocious fire-breathing dragon that has created chaos and turmoil in the user's town.


	The Bingo class, created by Juhi,  sets up 2-D array in size of 3 by 3 grid with row and cols integer valuables in the type char array, named board.  This game started with the basic ‘Tic Tac Toe’ strategies where two player play and match against each other in a board where they mark in the board with each two different unique symbols and wins whenever they match his/her own unique symbol before their opponent. With random number generator, it was able to obtain functionality where the user can play Tic Tac Toe with computer. The Bingo class has functions to assert player not to reserve a spot that is already been chosen in previous turn. Each time user marks ‘X’ on the Bingo board, it prints out changes immediately to console and same thing for computer when it marks ‘O’ on ingo board. When the board is filled, it tells the user who had won. Later we changed our code for Bingo class so that it can display in the end whether the game player had decoded the game of castle.
	The Hangman class has the constant int variable named, MaxWrong to limit the maximum trial times that play can guess and to keep track of it. If the variable reaches its limit, the player loses and has to start the game again. Using constant int variable for MaxWrong will allow coder to easily access and change the number of tries later on when further advances in difficulty of levels are needed. Instead of changing the value at several different places, we can change constant integer that functions as global variable just once in the beginning.
Raju created the hangman game. It has an array with list of words stored in it, that can generate different words using random function. It also displays which char you have entered so far. Every time the players guesses wrong, a different cout prints out. When the player guesses correctly, a default cout prints out.
Juhi created the header and implementation file for the Bingo class and she used a random number generator in order to obtain functionality where the user can play Tic Tac Toe with computer. This game developed under the idea where the player can play against with the computer and by providing the functionality to generate different bingo board each time the player do it. 

 Faith created the header and implementation files for the mini games and created the  ending battle scene. The main driver file was organized by Faith along with everyone else’s input. She put together many of the images with photoshop and coded the graphics associated with SDL that are shown all throughout the project. She also structured much of the storyline for the game. 
One of the difficulties was that working with SDL was confusing and took too much time. Therefore we had to abandon that idea to develop our game totally in SDL. Since graphics is what appeals to most players, all of the group members had agreed to have graphics embedded into the text based game code. We think that it would have brought a much better outcome if it were entirely through SDL. If we could restart the project would be focus more on the graphics and animation.

To come of this project: We want to include more paths to the story as well as configure the player's avatars to change based on gender. We would also like the graphics to be played all on the same set of surfaces rather than having the graphics pop up separately from the console. 

References

[1]C. 3), "Programmer's Ranch", Programmersranch.blogspot.com, 2017. [Online]. Available: http://programmersranch.blogspot.com. [Accessed: 07- May- 2017].

[2]"Stack Overflow", Stackoverflow.com, 2017. [Online]. Available: http://Stackoverflow.com. [Accessed: 09- May- 2017].

[3]"Lazy Foo' Productions", Lazyfoo.net, 2017. [Online]. Available: http://Lazyfoo.net/tutorials. [Accessed: 08- May- 2017].

[4]"Udemy Online Courses - Learn Anything, On Your Schedule", Udemy, 2017. [Online]. Available: http://udemy.com. [Accessed: 11- May- 2017].
