#include <iostream>
#include <boost/chrono/include.hpp>
#include <ctime>
#include "current_time.hpp"

std::string current_time() {
    using namespace boost::chrono;
    system_clock::time_point t1 = system_clock::now();
    std::time_t tt;
    tt = system_clock::to_time_t(t1);
    return std::string(ctime(&tt));
}