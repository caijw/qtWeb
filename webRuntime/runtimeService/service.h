#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <memory>
#include "program.h"

namespace WebRuntime {

class Service
{
public:
    static Service& getInstance(){
        static Service instance;
        return instance;
    }
    Service(Service const&) = delete;
    void operator=(Service const&)  = delete;
private:
    Service() {}
public:
    void hello();
    // TODO
    void createProgram();
    // DOING
    std::shared_ptr<WebRuntime::Program> createProgramFromBundle(std::string appid, std::string bundle);
};

}


#endif // SERVICE_H
