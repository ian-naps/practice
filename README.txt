Sample Exam 
Part 1

1 Write a complete C++ program that takes the judges' scores for a gymnastic event and finds each contestant's score. 
It should satisfy all the following specifications: it first reads in an integer N that gives the number of judges. It then reads in a contestant number followed by N integers
which are the scores given the contestant by the N judges. The scores should be read into an array, and then the program calls a function called findAverageScore that takes 
N and the array of judges' scores as arguments. The function should find and drop the highest score and the lowest score, and then find and return the average of the remaining
 N-2 scores. The main should then print the contestant number and the average score he/she receives for the event to the screen. It will continue to do this (read in the 
contestant number, then the N integers, then print the contestant number and the calculated score on a new line) until a negative value is entered for the contestant number. 
The program will then print the contestant nuber who scored the highest. (You may assume no ties will occur.) All input will be from the keyboard and you may also assume
that N will never be greater than 10 and never less than 3. You may format the output in any way as long as it is readable and correct, and you may assume all inputs are
correct.
