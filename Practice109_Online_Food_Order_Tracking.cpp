#include <iostream>
using namespace std;






class OrderStatus
{
public:
    virtual void showStatus()
    {
        cout << "Order Status uUnavailable" << endl;
    }
};

class Preparing : public OrderStatus
{
public:
    void showStatus()
    {
        cout << "Order is Being Prepped" << endl;
    }
};

class OutForDelivery : public OrderStatus
{
public:
    void showStatus()
    {
        cout << "Order is out for Delivery" << endl;
    }
};

class Delivered : public OrderStatus
{
public:
    void showStatus()
    {
        cout << "Order has Been Delivered" << endl;
    }
};




int main()
{
    OrderStatus* status_pointer;

    Preparing preparing_object;
    OutForDelivery out_for_delivery_object;
    Delivered delivered_object;

    status_pointer = &preparing_object;
    status_pointer->showStatus();

    status_pointer = &out_for_delivery_object;
    status_pointer->showStatus();

    status_pointer = &delivered_object;
    status_pointer->showStatus();


    return 0;
}
