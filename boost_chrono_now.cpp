#include <iostream>
#include <boost/chrono/include.hpp>
#include <ctime>

int main(int argc, char** argv)
{
    using namespace boost::chrono;
    system_clock::time_point t1 = system_clock::now();
    std::time_t tt;
    tt = system_clock::to_time_t(t1);
    std::cout << ctime(&tt) << std::endl;
    return 0;
}