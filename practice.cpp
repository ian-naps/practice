#include <iostream>
using namespace std;

int main(){
    int numOfJudges;
    //contestant array
    const int scoreArray = 10;
    int contestantLoopCounter=0;
    int contestantNumber[scoreArray];

    cout << "Please enter the number of judges:\n";
    cin >> numOfJudges;

    cout << "Please enter the contestant number, followed by the judge's scores.\n";
    while (contestantNumber > 0) {

    cin >> contestantNumber[contestantLoopCounter];
    contestantLoopCounter++;
    }



    return 0;
}