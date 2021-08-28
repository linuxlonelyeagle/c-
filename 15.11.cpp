#include <iostream>
#include <string>

using namespace std;

class Quote{
public:
    Quote() = default;
    Quote(const string &book, double sales_price):bookno(book),
    price(sales_price){ }
    string isbn() const {return bookno;}
    virtual double net_price(size_t n) const 
    { return n*price; }
    virtual ~Quote() = default;   // 对构造函数进行动态绑定
    virtual void debug()
    {
        cout << "bookno " << bookno <<  endl;
        cout << "price " << price << endl;
    }

private:
    string bookno;
protected:
    double price = 0.0;
};

class Bulk_quote : public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const string &, double, size_t, double);
    double net_price(size_t ) const override;
    void debug() override
    {
        cout << "bookno " << isbn() << endl;   
        cout << "price " << price << endl;
        cout <<  "min_qty " << min_qty << endl;
        cout << "discount " << discount << endl;          
    }

private:
    size_t min_qty = 0;
    double discount = 0.0;

};
double Bulk_quote::net_price(size_t cnt) const 
{
    if (cnt >= min_qty)
    return cnt * (1 - discount) * price;
    else
    return cnt * price;
}
Bulk_quote::Bulk_quote(const string &name,double price,size_t n,double discout):Quote(name,price)
{min_qty = n; discount = discout;}

int main(void)
{
    Quote a("斗破苍穹",20);
    Bulk_quote b("斗破苍穹",20,100,0.75);
    a.debug();
    b.debug();

}