#include <iostream>
// #include "Sales.h"

using namespace std;

class Sales_item{
public:
    Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){}
    Sales_item(std::istream &is){ is >> *this;}
    friend std::istream& operator>>(std::istream &,Sales_item &);
    friend std::ostream& operator<<(std::ostream &,const Sales_item &);
public:
    Sales_item & operator+=(const Sales_item&);
public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs)const{
    return isbn == rhs.isbn;
    }
    Sales_item():units_sold(0),revenue(0.0){}
public:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};

double Sales_item::avg_pr()const  {
    


}

int main() {
    
}

