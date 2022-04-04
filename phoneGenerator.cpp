#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <map>
#include "phoneGenerator.h"
#include "logLib.h"
using namespace std;


const int MINIMUM_LENGTH = 10;
const string maskRU = "89xxxxxxxxx";
string currentMask;
const size_t maskLength = maskRU.size();
map<int,bool> checkMap;

long long PhoneGenerator::permutation(int num){
    long long answer = 1;
    const int base = 10;
    for(int i=0;i<num;i++){
        answer *= base;
    }
    return answer;
}

void PhoneGenerator::checkMask(){
    if(maskLength < MINIMUM_LENGTH){
        cout << "Mask: " << maskRU << endl;
        throw invalid_argument("Min value of mask is larger, then current mask length");
    }
    for(int i=0;i<maskLength;i++){
        if(int(maskRU[i]) <= 9){
            checkMap[i] = true;
        }
        else{
            checkMap[i] = false;
        }
    }
}

string strToMachineAnswer(string input){
    if(input == "maskRU"){
        currentMask = maskRU;
    }
    else{
        currentMask = input;
    }
    return currentMask;
}

string phoneGen(string cc, string operatorName, string region){
    cout << "Phone generation script succsessfuly running" << endl;
    Logger::addInfo("Phone generation script succsessfuly running");
    cout << "Please, enter your mask or make a choise from default mask (current only maskRU: " << maskRU << ")" << endl;
    Logger::addInfo("Please, enter your mask or make a choise from default mask (current only maskRU: " + maskRU + ")");
    string maskFromUser;
    cin >> maskFromUser;
    strToMachineAnswer(maskFromUser);
    string answer;
    for(int i=0;i<maskLength;i++){
        if(int(maskRU[i]) <= 9){
            checkMap[i] = true;
        }
        else{
            checkMap[i] = false;
        }
    }

    return answer;
}
