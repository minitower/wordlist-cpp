#ifndef PHONEGENERATOR_H
#define PHONEGENERATOR_H
#include <string>
#include <map>
using namespace std;

struct PhoneGenerator{
    long long permutation(int num);
    std::string phoneGen(std::string cc, std::string \
                            operatorName, std::string region);
    void checkMask();
    inline bool isInteger(const std::string & s);
};


#endif
