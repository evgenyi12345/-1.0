#include "Worker.h"

Worker::Worker(const std::string& name_, const std::string& profession_, double salary_) :name_(name_), profession_(profession_), salary_(salary_)
{
}

Worker::~Worker()
{
}

void Worker::printInfo() const
{
	std::cout << "Name-" << name_ << "\n";
	std::cout << "Profession-" << profession_ << "\n";
	std::cout << "Salary-" << salary_ << "\n";
	std::cout << "\n";
}
