#include "Worker.h"

Worker::Worker(const std::string& name_, const std::string& profession_, double salary_,int ID_) :name_(name_), profession_(profession_), salary_(salary_),ID_(ID_)
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
	std::cout << "Employee ID: " << ID_ << "\n";
	std::cout << "\n";
}
