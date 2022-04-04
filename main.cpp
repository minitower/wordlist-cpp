#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include "numberGenerator.h"
#include "logLib.h"
#include "phoneGenerator.h"
using namespace std;

int main() {
    int length;
    cout << "Please, write min. length of password" << endl;
    cin >> length;
    Logger::addInfo("Start for build answer vector");
    vector<string> answer = NumberGenerator::nGenerator(length);
    string answerStr = Logger::vectorToStr(answer);
    Logger::addInfo("Answer strring builded!");
    cout << "Answer-list with all possible pass with length " << length << ":\n\n" << answerStr<< endl;
    Logger::answerSave(answerStr);
    Logger::addInfo("Answer saved!");
    return 0;
}
