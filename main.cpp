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

	std::unique_ptr<EmployeeBase> user1 = std::make_unique<Worker>("Tom", "Accountant", 100);
	std::unique_ptr<EmployeeBase> user2 = std::make_unique<Manager>("Ric", "Sales Manager", 80);
	std::unique_ptr<EmployeeBase> user3 = std::make_unique<Manager>("Nadia", "Purchasing Manager", 80);
	std::unique_ptr<EmployeeBase> user4 = std::make_unique<Intern>("John", "CNC Operator Station", 80);
	std::unique_ptr<EmployeeBase> user5 = std::make_unique<Intern>("Victor", "Intern", 55);

	Company company("SmartGrain", "Production of grain dryers");
	
	company.addEmployee(std::move(user1));
	company.addEmployee(std::move(user2));
	company.addEmployee(std::move(user3));
	company.addEmployee(std::move(user4));
	company.addEmployee(std::move(user5));

	std::cout << "\nList of employees" << "\n";
	company.printInfo();
	company.listAll();

}