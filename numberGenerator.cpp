#include <vector>
#include <string>
#include "numberGenerator.h"
using namespace std;

long long NumberGenerator::permutation(int num){
    long long answer = 1;
    const int base = 10;
    for(int i=0;i<num;i++){
        answer *= base;
    }
    return answer;
}


vector<string> NumberGenerator::nGenerator(int length)
{
    int lastValue = NumberGenerator::permutation(length)-1;
    // ADD LOGER
    int intPass = 0;
    string strPass = "";
    vector<string> answer;
    const char fillChar = '0';
    string fillStr;
    while(intPass != lastValue){
        intPass +=1;
        string tmpStrPass = to_string(intPass);
        size_t len = tmpStrPass.size();
        if(len < length){
            for(int i=0;i<length - (int)len;i++){
                fillStr += fillChar;
            }
            tmpStrPass = fillStr + tmpStrPass;
            fillStr = "";
            answer.push_back(tmpStrPass);
        }
        else{
            answer.push_back(tmpStrPass);
        }
    }
    return answer;
};
