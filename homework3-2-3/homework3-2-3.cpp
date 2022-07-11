#include <iostream>
#include <cstring>

struct adress
{
    std::string city;
    std::string street;
    int building = 0;
    int appartment = 0;
    int index = 0;
};

void printAdress(adress adr)
{
    std::cout << "Город: " << adr.city << std::endl;
    std::cout << "Улица: " << adr.street << std::endl;
    std::cout << "Номер дома: " << adr.building << std::endl;
    std::cout << "Номер квартиры: " << adr.appartment << std::endl;
    std::cout << "Индекс: " << adr.index << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int adress_count = 3;
    adress* adr = new adress[adress_count];
    adr[0].city = "Москва";
    adr[0].street = "Победы";
    adr[0].building = 11;
    adr[0].appartment = 24;
    adr[0].index = 177000;

    adr[1].city = "Санкт-Петербург";
    adr[1].street = "Мира";
    adr[1].building = 9;
    adr[1].appartment = 42;
    adr[1].index = 192000;

    adr[2].city = "Екатеринбург";
    adr[2].street = "Горького";
    adr[2].building = 18;
    adr[2].appartment = 110;
    adr[2].index = 142000;

    for (int i = 0; i < adress_count; i++)
    {
        printAdress(adr[i]);
    }

    delete[] adr;
    return 0;
}