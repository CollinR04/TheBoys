#include <iostream>
#include "../ChallengeProject/Pars.h"
#include "../ChallengeProject/Scores.h"
#include "../ChallengeProject/Results.h"
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<int>(time(0)));
    cout << "Would you like to play a round of Disc Golf?" << endl;
    cout << "Y or N" << endl;

    char start = ' ';
    int location = NULL;
    bool choice1 = false;
    bool choice2 = false;
    int holes = 1;
    int input = NULL;
    bool parChoice = false;
    int parInput = NULL;
    string temp = " ";
    Scores score{};
    Pars par{};
    Results result{};

    cin >> start;

    while (choice1 == false) {
        switch (start) {
        case 'y':
        case 'Y':
            cout << "Starting Now....." << endl;
            cout << "What park are you going to play at?" << endl;
            cout << "1. Phellen (9 holes)" << endl;
            cout << "2. Wakanda (14 holes)" << endl;
            cout << "3. Menomonie Middle School (18 holes)" << endl;
            cout << "4. End the round" << endl;


            cin >> location;

            while (choice2 == false) {
                switch (location) {
                case 1:
                {
                    score.setName(0);

                    cout << "Would you like to play Regular Par or Youth Par?" << endl;
                    cout << "1. Regular Par" << endl;
                    cout << "2. Youth Par" << endl;

                    cin >> parInput;

                    while (parChoice == false) {
                        switch (parInput) {
                        case 1:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 2;
                                par.setRegularPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        case 2:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 3;
                                par.setYouthPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        default:
                            cin.clear();
                            getline(cin, temp);
                            cout << "Invalid Input" << endl;
                            cout << "Would you like to play Regular Par or Youth Par?" << endl;
                            cout << "1. Regular Par" << endl;
                            cout << "2. Youth Par" << endl;
                            parChoice = false;
                            cin >> parInput;
                            break;
                        }
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << "Please enter in your score for hole ";
                        cout << holes << endl;
                        cin >> input;
                        score.setScore(input, i);
                        holes++;
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << score.getScore(i) << endl;
                    }

                    result.compareScore(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printResults(score.getSize());
                    result.printFinalCompare(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printTotal(par.getParsArr(), score.getScoreArr(), score.getSize());

                    choice2 = true;
                    break;
                }

                case 2:
                    score.setName(1);

                    cout << "Would you like to play Regular Par or Youth Par?" << endl;
                    cout << "1. Regular Par" << endl;
                    cout << "2. Youth Par" << endl;

                    cin >> parInput;

                    while (parChoice == false) {
                        switch (parInput) {
                        case 1:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 2;
                                par.setRegularPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        case 2:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 3;
                                par.setYouthPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        default:
                            cin.clear();
                            getline(cin, temp);
                            cout << "Invalid Input" << endl;
                            cout << "Would you like to play Regular Par or Youth Par?" << endl;
                            cout << "1. Regular Par" << endl;
                            cout << "2. Youth Par" << endl;
                            parChoice = false;
                            cin >> parInput;
                            break;
                        }
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << "Please enter in your score for hole ";
                        cout << holes << endl;
                        cin >> input;
                        score.setScore(input, i);
                        holes++;
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << score.getScore(i) << endl;
                    }

                    result.compareScore(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printResults(score.getSize());
                    result.printFinalCompare(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printTotal(par.getParsArr(), score.getScoreArr(), score.getSize());

                    choice2 = true;
                    break;

                case 3:
                    score.setName(2);

                    cout << "Would you like to play Regular Par or Youth Par?" << endl;
                    cout << "1. Regular Par" << endl;
                    cout << "2. Youth Par" << endl;

                    cin >> parInput;

                    while (parChoice == false) {
                        switch (parInput) {
                        case 1:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 2;
                                par.setRegularPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        case 2:
                            cout << "Here is your par for the course" << endl;
                            for (int i = 0; i < score.getSize(); i++) {
                                int ran = (rand() % 3) + 3;
                                par.setYouthPars(ran, i);
                            }
                            par.printPars(score.getSize());
                            parChoice = true;
                            break;

                        default:
                            cin.clear();
                            getline(cin, temp);
                            cout << "Invalid Input" << endl;
                            cout << "Would you like to play Regular Par or Youth Par?" << endl;
                            cout << "1. Regular Par" << endl;
                            cout << "2. Youth Par" << endl;
                            parChoice = false;
                            cin >> parInput;
                            break;
                        }
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << "Please enter in your score for hole ";
                        cout << holes << endl;
                        cin >> input;
                        score.setScore(input, i);
                        holes++;
                    }

                    for (int i = 0; i < score.getSize(); i++) {
                        cout << score.getScore(i) << endl;
                    }

                    result.compareScore(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printResults(score.getSize());
                    result.printFinalCompare(par.getParsArr(), score.getScoreArr(), score.getSize());
                    result.printTotal(par.getParsArr(), score.getScoreArr(), score.getSize());


                    choice2 = true;
                    break;

                case 4:
                    cout << "Ending now" << endl;
                    choice2 = true;
                    break;

                default:
                    cin.clear();
                    getline(cin, temp);
                    cout << "Invlaid input" << endl;
                    cout << "Which park would you like to play at?" << endl;
                    cout << "1. Phellen (9 holes)" << endl;
                    cout << "2. Wakanda (14 holes)" << endl;
                    cout << "3. The Middle School (18 holes)" << endl;
                    cout << "4. End the round" << endl;
                    cin >> location;
                    break;
                }
            }
            choice1 = true;
            break;

        case 'n':
        case 'N':
            cout << "Ending now" << endl;
            choice1 = true;
            break;

        default:
            cout << "Error please try again" << endl;
            cout << "Y or N" << endl;
            cin >> start;
            break;
        }
    }
    return 0;
}
