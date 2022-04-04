#ifndef LOGLIB_H
#define LOGLIB_H

#include <filesystem>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

namespace fs = std::filesystem;

struct Logger{
    static std::string logString;
    static void addInfo (std::string info);
    static void answerSave (std::string answer);
    static std::string vectorToStr (std::vector<std::string> answer);
};

#endif /* LOGLIB_H */
