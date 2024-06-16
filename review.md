# Midterm reviews


## Question 1
This program reads numbers from the user until a 0 is read.   You may assume that no more than 50 numbers will be entered.  Once all the data has been entered, it will then print out the following:
* every number entered (except 0)
* The biggest number entered
* The smallest number entered
* The average of the numbers entered

the general steps have been written into comments to help guide you in this solution

```c
#include <stdio.h>
int main(void){
  //declare the variables you need to store the data.  Based on the specs think of what you will need

  //read data until 0 is entered

  //print out result  

}
```
## Question 2

What is the output of the following program?




## Question 3

Complete the following program to play "Rock, Paper, Scissors".  Rock beats Scissors, Scissors beat Paper, Paper beats Rock.   The program prints out the following menu:

```
1. Rock
2. Paper
3. Scissors
```
It then asks user to enter a choice of 1 to 3.  Any input outside of that should result in an error message and reprompt.

Program will generate a random move and output what it chose to the user.  Program then prints out who won (computer or player)

```c
#include <stdio.h>
int main(void){
  //this generates a random number between 0 and 2 billion
  int computerChoice = rand();

  //change the choice so that it will be between 1 and 3 (hint..think about what mod will do)
  

  //print menu

  //prompt and read user choice

  //verify correct and loop if not until proper choice is read

  //output computer choice

  //output winner

}
```
