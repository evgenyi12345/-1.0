#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::printInfo() const
{
	std::cout << "Responsibilities: The (sales) manager is in charge of sales." << "\n";     // "Обязанности: Менеджер(по продажам)  занимается продажами."
	std::cout << "Responsibilities: The (purchasing) manager handles the purchases." << "\n";          // "Обязанности: Менеджер(по закупке) занимается закупками."
}
