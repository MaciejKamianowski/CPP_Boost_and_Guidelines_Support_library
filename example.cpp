#include <iostream>
#include <boost/filesystem.hpp>
#include <gsl/gsl>
void show_all_data_in_directory();

int main(int argc, char **argv)
{
	show_all_data_in_directory();
	return 0;
}
void show_all_data_in_directory()
{
	gsl::span<int> z;
	auto path = boost::filesystem::current_path();
	std::cout << path << std::endl;

	for (auto &entry : boost::filesystem::directory_iterator(path))
	{
		std::cout << entry << std::endl;
	}
}