// Logger for wordlist generator tools
#include "logLib.h"
#include <filesystem>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fs::path logPath = fs::path("/home/minitower/projects/WordlistGenerator/logPath/log.txt");
fs::path answerPath = fs::path("/home/minitower/projects/WordlistGenerator/logPath/answer.txt");

void Logger::addInfo (string info){
    //Func for add string to log file
    ofstream fout;
    fout.open(logPath);
    fout << info;
    fout.close();
}

void Logger::answerSave(string answer){
    ofstream fout;
    fout.open(answerPath);
    fout << answer;
    fout.close();
}

string Logger::vectorToStr(vector<string> answer){
    std::string answerStr = "";
    while(!answer.empty()){
        answerStr += "\n" + answer.back();
        answer.pop_back();
    }
    return answerStr;
}
