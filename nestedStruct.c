#include<stdio.h>
struct Customer{
    int customerId;
    char name[50];
    char phone[15];
};
struct Item{
    int itemId;
    char itemname[50];
    float price;
    int quantity;
};
struct Order{
    int orderId;
    struct Customer customer;
    struct Item item;

};
void printOrderdetails(struct Order o){
    printf("Order Details\n");
    printf("Order ID   : %d\n", o.orderId);
    printf("Customer Details\n");
    printf("Customer ID   : %d\n", o.customer.customerId);
    printf("Customer Name   : %s\n", o.customer.name);
    printf("Customer Phone   : %s\n", o.customer.phone);
    printf("Item Details\n");
    printf("Item ID   : %d\n", o.item.itemId);
    printf("Item itemname   : %s\n", o.item.itemname);
    printf("Item price  : %f\n", o.item.price);
    printf("Item quantity   : %d\n", o.item.quantity);
    
}
int main(){
    struct Order o1={100,{24,"Anjana","9003929898"},{10,"book",500.0,2}};
    printOrderdetails(o1);
}