#ifndef NOSESHELL_COMMON_HPP
#define NOSESHELL_COMMON_HPP
namespace common {
    void tokenize(std::string const &str, const char delim, std::vector<std::string> &out);
    void debugPrint(std::string text, int colorCode, std::string stringEnd = "\n");
    void returnPrint(int cmdRet, std::string text);
    void refreshConsoleInfo(int& w, int& h);
    void enableAnsiCodes();
    std::string vectorToString(std::vector<std::string> strings);
    std::string getTrueValue(std::string command);
    std::string colorFromCode(int code);
    std::string getDir();
    std::string getTime();
}
#endif
