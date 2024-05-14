
#include <iostream>
#include <list>
#include <string>

const int n = 2;

struct osoba{
    std::string first_name;
    std::string last_name;
    int age;
};

void print_list(std::list<osoba>* list_address)
{
    if(list_address != nullptr)
        for(auto i : *list_address)
            std::cout << i.first_name << " " << i.last_name << " " << i.age << std::endl;
}

osoba osoba_from_cin()
{
    std::string f_name, l_name;
    int age;

    std::cin >> f_name >> l_name >> age;
    
    return osoba{f_name, l_name, age};
}

void remove_second_position(std::list<osoba>* list_address)
{
    if(list_address == nullptr)
        return;

    if(list_address->size() >= 2)
    {
        osoba first_elem = list_address->front();
        list_address->pop_front();
        list_address->pop_front();
        list_address->push_front(first_elem);
    }
}

void new_elem_on_second_position(std::list<osoba>* list_address)
{
    if(list_address == nullptr)
        return;

    if(list_address->size() >= 1)
    {
        osoba first_elem = list_address->front();
        list_address->pop_front();
        osoba new_osoba = osoba_from_cin();
        list_address->push_front(new_osoba);
        list_address->push_front(first_elem);
    }
}

void delete_list(std::list<osoba>* list_address)
{
    list_address->clear();
}

int main()
{
    std::list<osoba> list;

    int input_size = n;

    for(int i = 0; i < input_size; ++i){
        list.push_back(osoba_from_cin());
    }
    print_list(&list);
    
    remove_second_position(&list);
    new_elem_on_second_position(&list);
    print_list(&list);

    delete_list(&list);
    print_list(&list);
}