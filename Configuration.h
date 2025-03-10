// Aiden Cary
// Lab 7 out
// Configuration class declaration
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

class Configuration
{
private:
    int noChoices;
    int noQuestions;
    int noFlagNames;
    string* flagNames;
    string flagName;

public:
    Configuration();
    Configuration(string* value, int noFlagNames);
    ~Configuration();
    Configuration(const Configuration& config);
    bool setNoChoices(int no_choices);
    bool setNoQuestions(int no_questions);
    void setFlagNameAt(string flagName, int position);
    string getFlagNameAt(int index);
    string* getAllFlagNames();
    void setNoFlagNames(int noFlagNames);
    int getNoChoices();
    int getNoQuestions();
    int getNoFlagNames();

};


#endif // !CONFIGURATION_H

