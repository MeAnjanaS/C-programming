#include <stdio.h>
enum Status {
    Pending,
    Shipped,
    Delivered
};
void displayStat(enum Status s) {
    if (s==Pending)
        printf("Order Status: Pending\n");
    else if (s == Shipped)
        printf("Order Status: Shipped\n");
    else if (s == Delivered)
        printf("Order Status: Delivered\n");
    else
        printf("Order Status: Invalid\n");
}
int main() {
    enum Status order=Pending;
    displayStat(order);
    order = Shipped;
    displayStat(order);
    order = Delivered;
    displayStat(order);
    return 0;
}
