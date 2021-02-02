// geonewnew.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

#include "Country.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector<Country> arrayOfCountris;
    
    int i = 0;
    arrayOfCountris.push_back(Country("Россия", Eurasia)); // Вот это делать в цикле по счетчику
    arrayOfCountris[i].add("Комсомольск", 300000, false); 
      arrayOfCountris[i].add("Москва", 30000000, true);
      arrayOfCountris[i].add("Тамбов", 300000, false);
  
    arrayOfCountris.push_back(Country("Сша", Eurasia));
    i++;
    arrayOfCountris[i].add("Орск", 300000, false);
    arrayOfCountris[i].add("Холмск", 300000, false);
    arrayOfCountris[i].add("Вашингтон", 6000000, true);
    for (Country item : arrayOfCountris)
    {
        std::cout << item.getName() << std::endl;
        City* capital = item.getCapital();
        std::cout << "Столица" << std::endl;
        std::cout << capital->name << std::endl;
        std::cout << "Население " << capital->population << std::endl;

        City* temp = item.getHead();
        do {
            std::cout << "Город " << temp->name << std::endl;
            std::cout << "Население " << temp->population << std::endl;
            temp = temp->next;
        } while (temp != nullptr);


    }
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
