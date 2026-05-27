#include "Logger.h"
#include <iostream>

Logger::Logger()
{
	std::cout << "===The program has started working.===" << "\n";                  // "===Программа начала работу.==="
}

Logger::~Logger()
{
	std::cout << "===The program has finished its work.===" << "\n";                      // "===Программа закончила работу.==="
}
