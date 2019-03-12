#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream passwordFile;
    ofstream firstSet, secondSet, thirdSet, fourthSet, firstNumbers, secondNumbers, thirdNumbers, fourthNumbers;
    string CurrentLine = "";
    string firstCharacter = "";
    string A_F = "aAbBcCdDeEfF";
    string G_L = "gGhHiIjJkKlL";
    string M_R = "mMnNoOpPqQrR";
    string S_Z = "sStTuUvVwWxXyYzZ";
    string one_two = "012";
    string three_four = "34";
    string five_six = "56";
    string seven_eight_nine = "789";

    passwordFile.open("C:/pwnedpasswords/pwnedpasswords.txt");
    firstSet.open("C:/pwnedpasswords/A_F.txt");
    secondSet.open("C:/pwnedpasswords/G_L.txt");
    thirdSet.open("C:/pwnedpasswords/M_R.txt");
    fourthSet.open("C:/pwnedpasswords/S_Z.txt");
    firstNumbers.open("C:/pwnedpasswords/one_two.txt");
    secondNumbers.open("C:/pwnedpasswords/three_four.txt");
    thirdNumbers.open("C:/pwnedpasswords/five_six.txt");
    fourthNumbers.open("C:/pwnedpasswords/seven_eight_nine.txt");

    if (!passwordFile.is_open()) {
        cout << "Password file did not open";
    } else {

        while (!passwordFile.eof()) {
            getline(passwordFile, CurrentLine);
            firstCharacter = CurrentLine[0];

            if (A_F.find(firstCharacter) != string::npos) {
                firstSet << CurrentLine << endl;
            } else if (G_L.find(firstCharacter) != string::npos) {
                secondSet << CurrentLine << endl;
            } else if (M_R.find(firstCharacter) != string::npos) {
                thirdSet << CurrentLine << endl;
            } else if (S_Z.find(firstCharacter) != string::npos) {
                fourthSet << CurrentLine << endl;
            } else if (one_two.find(firstCharacter) != string::npos) {
                firstNumbers << CurrentLine << endl;
            } else if (three_four.find(firstCharacter) != string::npos) {
                secondNumbers << CurrentLine << endl;
            } else if (five_six.find(firstCharacter) != string::npos) {
                thirdNumbers << CurrentLine << endl;
            } else if (seven_eight_nine.find(firstCharacter) != string::npos) {
                fourthNumbers << CurrentLine << endl;
            }
        }
    }


    passwordFile.close();
    firstSet.close();
    secondSet.close();
    thirdSet.close();
    fourthSet.close();
    firstNumbers.close();
    secondNumbers.close();
    thirdNumbers.close();
    fourthNumbers.close();
    return 0;
}