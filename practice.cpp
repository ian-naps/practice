#include <iostream>
using namespace std;

//global variables
int numOfJudges;

//array notes: contestants are in column 0 of 2d Array. Judges scores are numOfJudges columns, and the average score is in the final column.
//This is the array column number
const int contestantPlusJudgesPlusAverage = numOfJudges+2;
//assume that there are 10 contestants
//this is the number of rows
const int rowsOfAllContestant = 10;
int highestScore[rowsOfAllContestant];

//stores contestant number and judge scores in row format with contestant # starting at row 0 column 0.
//highest value is stored in last position of array
double allContestantJudgeScores[contestantPlusJudgesPlusAverage][rowsOfAllContestant] = {NULL};

int findAverageScore(const int contestantPlusJudgesPlusAverage[const int][const int], double allContestantJudgeScores, int column);{
    //used in for loop
    int count;
    //find element of array and make it equal zero
    int highestValue = 0;
    //find element of array and make it equal zero
    int lowestValue=0;
    //array columns
    int columns=0;
    //average score
    double averageScore = 0.0;
    //array position of highest score
    int arrayPosition = 0;

    //find highest value
    for (count = 1; count<contestantPlusJudgesPlusAverage-1; count++)
    {
        if (allContestantJudgeScores[columns][count]>highestValue){
        highestValue = allContestantJudgeScores[count][0];
        //take note of count value for deletion
        arrayPosition = count;
        }
    }

    //remove highest value from array
    allContestantJudgeScores[columns][arrayPosition] = 0




    //increment column number to next contestant that uses the function
    columns+= columns;

    return score;
}

int main(){
    

    int contestantLoopCounter=0;
    int contestantNumber;
    
    
    //stores scores of contestants

    cout << "Please enter the number of judges:\n";
    cin >> numOfJudges;

    cout << "Please enter the contestant number, followed by the judge's scores.\n";
    while(contestantNumber>0)
    {

        while (contestantLoopCounter <= numofJudges) {
            cin >> contestantNumber[contestantLoopCounter];
            cout << ", ";
            contestantLoopCounter++;
        }
    }

    cout<<"Contestant "<<highestScore[0]<< " had the highest score.\n";

    return 0;
}