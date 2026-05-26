#include "Logger.h"
#include <iostream>

Logger::Logger()
{
	std::cout << "===Программа начала работу.===" << "\n";
}

Logger::~Logger()
{
	std::cout << "===Программа закончила работу.===" << "\n";
}
