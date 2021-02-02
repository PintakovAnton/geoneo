#pragma once
#include <string>
typedef struct City
{
	std::string name;
	double population;
	bool isCapital;
	struct City* next;

}City;
enum Continent
{
	Eurasia, Africa, NorthAmerica, SouthAmerica, Australia, Antarctic
};
class Country
{
private:
	std::string name;
	Continent continent;
	std::string currency;
	City* capital;
	City* head;
public:
	Country(std::string name, Continent continent, std::string currency)
	{
		this->name = name;
		this->currency = currency;
		head = nullptr;
		capital = nullptr;
		this->continent = continent;
		
	};
	bool isEmpty() { return head == nullptr; };
	std::string getCurrency() { return this->currency; };
	City* add(std::string name, double population, bool isCapital, City* node = nullptr)
	{

		City* elem = new City();
		elem->name = name;
		elem->population = population;
		elem->isCapital = isCapital;
		if (elem->isCapital == true) // Если столица печатаем в столицу
		{
			capital = elem;
		}
		if (node == nullptr) // Добавление нового корня
		{
			if (head == nullptr) {
				elem->next = nullptr;
				head = elem;
			}
			else {
				elem->next = head;
				head = elem;
			}
			return elem;
		}
		elem->next = node->next; // Добавление узла после текущего
		node->next = elem;

		return elem;
	}

	std::string getName(City* p) { return p->name; }
	int getPopulation(City* p) { return p->population; }

	std::string getName() { return name; }
	Continent getContinent() { return continent; }
	City* getCapital() { return capital; }
	City* getHead() { return head; }
};
