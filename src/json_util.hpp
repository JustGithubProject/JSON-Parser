// This file implements the JsonUtil class
#pragma once

#include "json_type.hpp"


#include <string>
#include <map>
#include <fstream>


namespace util {

class JsonUtil {
public:
    // Returns a json string
    std::string dumps(JSON& obj);


    // Write JSON to a file
    void dump(const std::string& outputFile);


    // Loading JSON from a string and converting it to an object
    JSON loads(const std::string& jsonString);

    
    // Read JSON from file
    JSON load(const std::string& inputFile);
private:
    // ...
};

}


