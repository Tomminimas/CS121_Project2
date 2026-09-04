#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE -1
#define FALSE 0

int main() {
	char name [20];
	int secretNumber;
	int guess = -999;
	int turnCount = 0;
	int keepGoing = TRUE;

	srand(time(0));
	secretNumber = rand() % 100 + 1;

	printf("Hi, what's your name? ");
	scanf("%s", name);
	printf("Nice to meet you %s. Let's play a game \n", name);

	while (keepGoing) {
turnCount  = turnCount + 1;
		printf("turn %d) Please guess a number: ", turnCount);
		scanf("%d", &guess);

		if (guess > secretNumber) {
			printf("too high\n");
		} else if (guess < secretNumber) {
			printf("too low\n");
		} else {
			printf("you got it\n");
			keepGoing = FALSE;
		}

	}

	if (turnCount < 7) {
		printf("Great job, %s! That was very good.\n", name);
	} else if (turnCount == 7) {
		printf("Nice, %s. Seven turns is right about average.\n", name);
	} else {
		printf("You got there eventually, %s. Try halving the range next time.\n", name);
	}
	return 0; // end main
 }
