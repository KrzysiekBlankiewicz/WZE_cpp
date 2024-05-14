
#include <iostream>
#include <list>
#include <string>

struct osoba{
    std::string first_name;
    std::string last_name;
    int age;
};

void print_list(std::list<osoba>* list_address)
{
    for(auto i : *list_address)
        std::cout << i.first_name << " " << i.last_name << " " << i.age << std::endl;
}

int main()
{
    std::list<osoba> list;

    osoba x;
    std::cin >> x.first_name >> x.last_name >> x.age;

    osoba y;
    std::cin >> y.first_name >> y.last_name >> y.age;
    
    list.push_back(x);
    list.push_back(y);
    
    //std::cout << list.front().age << std::endl;
    print_list(&list);
}
