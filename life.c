#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void PlayGameofLife();
#define ROWS 7
#define COLUMNS 7
int count;
char values[ROWS][COLUMNS];

int main() {
	char c;
	printf("Welcome! Press 'q' to quit or any other key to continue: \n"); //prints starting statement
	scanf("%c", &c); //gets player's input to continue playing
	getchar();
	while (c != 'q') { //while the player does not type q to quit
		PlayGameofLife(); //main game method to play the game
		printf("Press 'q' to quit or any other key to continue: \n");
		scanf("%c", &c); //gets player's input to continue playing
		getchar();
	}
	printf("Bye Bye !");
}

void getInputs() {
	char c;
	printf("Enter the offsets for the live cells: ");
	scanf("%c", &c);
}

void placeInputs() {

}

void PlayGameofLife() {
	getInputs();
	for (int i = 0; i < 7; i++) {
		printf("generation = %d: \n", i);
		for (int i = 1; i < ROWS - 1; i++) {
			for (int j = 1; i < COLUMNS - 1; i++) {
				printf(values[i][j]);
			}
		}
	}
}

void checkNeighbors(char values[ROWS][COLUMNS]) {
	char nextGen[ROWS][COLUMNS];
	for (int i = 1; i < ROWS - 1; i++) {
		for (int j = 1; i < COLUMNS - 1; i++) {
			count = 0;
			if ((nextGen[i - 1][j]) == '*') {
				count++;
			}
			if ((nextGen[i - 1][j-1]) == '*') {
				count++;
			}
			if ((nextGen[i][j-1]) == '*') {
				count++;
			}
			if ((nextGen[i + 1][j]) == '*') {
				count++;
			}
			if ((nextGen[i + 1][j + 1]) == '*') {
				count++;
			}
			if ((nextGen[i][j + 1]) == '*') {
				count++;
			}
			if ((nextGen[i - 1][j + 1]) == '*') {
				count++;
			}
			if ((nextGen[i + 1][j - 1]) == '*') {
				count++;
			}
			if (count == 3) {
				values[i][j] == '*';
			}
			else {
				values[i][j] == ' ';
			}
		}
	}

}
