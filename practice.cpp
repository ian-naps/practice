#include <iostream>
using namespace std;


int findAverageScore(double score){
    int count=0;
    int highestValue;

    highest = highestScore[0];
    for (count = 1; count<scoreArray; count++)
    {
        if (highestScore[count]>highestValue)
        highestValue = highestScore[count];
    }
    return score;
}

int main(){
    int numOfJudges;
    //contestant array
    const int scoreArray = numOfJudges+1;

    int contestantLoopCounter=0;

    //stores contestant number and scores 
    int contestantNumber[scoreArray];
    
    //stores scores of contestants
    int highestScore[scoreArray];

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