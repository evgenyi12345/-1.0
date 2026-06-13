#ifndef COMPANY_H
#define COMPANY_H
#include "EmployeeBase.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>


class Company  {
public:
	Company             ();
	Company             (const std::string& companyName_,const std::string& profession_,int totalEmployees_);       // Конструктор параметризованный      
	~Company            ();                                                                     // Виртуальный деструктор
	void                addEmployee(std::unique_ptr<EmployeeBase> employee);                    // Добавление сотрудника
	std::string         getName() const;                                                        // Возвращаем имя
	void                listAll()const;                                                              // Перечисляем всех сотрудников
	void                totalPay();                                                             // Сумма фонда
	void                printInfo() const ;                                             // Выводим всю информацию
	void                findByld();
	
private:
	std::string         companyName_;
	std::string         profession_;
	std::vector         <std::unique_ptr<EmployeeBase>>employees;
	int                 totalEmployees_;
};
#endif // !COMPANY_H

