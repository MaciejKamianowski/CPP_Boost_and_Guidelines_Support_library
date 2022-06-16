#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, char * argv[]) {
    if (argc < 2) {
        std::cerr << "Missing filepath as second argument" << std::endl;
        return 1;
    }
    boost::filesystem::path file_path(argv[1]);
    if (boost::filesystem::exists(file_path)) {
        if (boost::filesystem::is_regular_file(file_path)) {
            uintmax_t file_size = boost::filesystem::file_size(argv[1]);
            std::cout << file_path << " size is " << file_size << std::endl;
        } else if (boost::filesystem::is_directory(file_path)) {
            std::cout << file_path << " is a directory " << std::endl;
        } else {
            std::cout << file_path << " exists, but it's not a regular file or directory" << std::endl;
        }
    } else {
        std::cout << file_path << " does not exist."<< std::endl;
    }
    return 0;
}