#include "service.h"

void WebRuntime::Service::hello() {
    std::cout << "hello world" << std::endl;
}

std::shared_ptr<WebRuntime::Program> WebRuntime::Service::createProgramFromBundle(std::string appid, std::string bundle){

}
