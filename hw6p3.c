/*Write an interactive program that plays a game of hangman.Store the characters of the word to be guessed in anarray of type char(you can initialize your character array at declaration).

Words are seven letters long.Initially, the program displays the length of the word to be guessed.This is in the form of successive stars(see example).
The player guesses letters belonging to the secret word one by one.After each guess, the letters that have beenguessed and the number of wrong guesses are displayed on screen.
Your program should terminate when either theentire word is guessed or4 incorrect guesseshave been attempted.
Your program must be modular.
Create at least two meaningful functions that abstract details such as printingthe word state after a letter guess is attempted or searching for a letter within a word.
Test your program for thewords:  abandon, annoyed, nance, aerobic, inferno, infancy.
Sample execution for word abandon : Hi, let's play hangman. 
The secret word is:
******
Guess a letter:t
Letter t is not part of the secret word, You have 3 attempts left.
******
Guess a letter:a
Letter a exists 2 times in the secret word, You have 3 attempts left.
a*a****
Guess a letter:e
Letter e is not part of the secret word, you have 2 attempts left.......
For this problem, submit your pseudocode
Submit  your  .c   les  named  hw6p1.c,  hw6p2.c,  and  hw6p3.c  via  the  D2L  dropbox  and  on  Zy-books*/

/*initialize main void

initilize letterGuesses, and guess
declare and initalize the secret word(s) to use, either in a string or array setup
intialize some loop placeholders x and y

initialize the variable to count Total number of attempts

print to the screen to prompt user for input 
"Hi, let's play hangman
The secret word is:"

pull down the secret word from the string or array and print to the string
to print to the string a loop will be setup to read the characters one by one and print an * for each letter from the word


set up Do while loop so that if total attempts reaches zero terminate the game
prompt the user to guess 
"Guess a letter:"
scan for the character that is guess
set up a second for loop to scan through the word to match the letter to the secret word
	if the letter matches change the asterisk to the letter (may have to set up loop for multiple hits?)

	else do nothing count the attempt
		print "Letter (guess) is not part of the secret word, you have (total attempts) left....." guess will be the user guessed letter, total attempts will be (total attempts - attempts)
	
	total attempts = total attempts - attempts

	


	*/