#ifndef PROGRAM_H
#define PROGRAM_H
#include <string>
#include <vector>
#include <map>


namespace WebRuntime {

class Program
{
public:
    Program(std::string id, std::string appid);
};


private:
    std::string wxConfig;


}


#endif // PROGRAM_H
