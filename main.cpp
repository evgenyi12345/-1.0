#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "EmployeeBase.h"
#include "Company.h"
#include "Logger.h"
#include "Intern.h"
#include "Manager.h"
#include "Worker.h"

int main() {
	setlocale(LC_ALL, "RU");
	Logger log;

	std::unique_ptr<EmployeeBase> user1 = std::make_unique<EmployeeBase>("Tom", "Accountant", 100);
	std::unique_ptr<EmployeeBase> user2 = std::make_unique<EmployeeBase>("Ric", "Sales Manager", 80);
	std::unique_ptr<EmployeeBase> user3 = std::make_unique<EmployeeBase>("Nadia", "Purchasing Manager", 80);
	std::unique_ptr<EmployeeBase> user4 = std::make_unique<EmployeeBase>("John", "CNC Operator Station", 80);
	std::unique_ptr<EmployeeBase> user5 = std::make_unique<EmployeeBase>("Victor", "Intern", 55);

	Company company("SmartGrain", "Production of grain dryers");

	company.addEmployee(std::move(user1));
	company.addEmployee(std::move(user2));
	company.addEmployee(std::move(user3));
	company.addEmployee(std::move(user4));
	company.addEmployee(std::move(user5));
	company.printInfo();
	company.listAll();

}