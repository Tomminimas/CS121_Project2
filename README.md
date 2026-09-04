# CS121_Project2

## Algorithm for guesser name

```
main():
    make a 20-length char array userName
    make an integer called guess initialize -999
    make an integer called secretNumber will be randomly generated and hold the answer
    make sn integer called turns, initialize to 0 (FALSE)
    make an integer (boolean) called keepGoing start true as -1

    seed random number generator
    generate a random number between 1 and 100 put in correct
    ask user name put in userName
    greet user with name
    
    while keepGoing is true:
        Add 1 to turnCount
        ask user for a number put it in guess
        if guess < correct:
            tell them "too low"
        else if guess > correct:
            tell them "too high"
        else:
            say "you got it"

evaluate the performance
if turnCount < 7:
    say "That's great"
else if turnCount > 7:
    say "You could do better"
else:
    say "Good job"

to run the program:
gcc guessNumber.c -o guess
then:
./guess

```

1. ask for the user's name and store it in a character array
2. greet the user by name
3. seed the random number generator using the current time
4. generate random number between 1 and 100, store as secretNumber
5. set turnCount to 0
6. set keepGoing to TRUE
7. while keepGoing is TRUE:
    a. add 1 to turnCount
    b. print the turn numebr and ask user for a guess
    c. read the guess into an integer variable
    d. if the guess is greater than secretNumber, print "too high"
    e. else if the guess is less than secretNumber, print "too low"
    f. else print "you got it" and set keepGoing to FALSE
8. if turnCount is less than 7, print praise
9. else if turnCount equals 7, print "average" 
10. else print a poor-performance message
