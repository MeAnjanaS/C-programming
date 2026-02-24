#include<stdio.h>
struct Product{
    float price;
    float disc;
};
void calcdiscount(struct Product p){
    float final;
    final=p.price-(p.price*p.disc/100);
    printf("\n[Call by Value]");
    printf("\nDiscounted Price = %.2f\n", final);   
}
void updatePrice(struct Product *p){
    p->price=p->price-(p->price*p->disc/100);
    printf("\n[Call by Address]");
    printf("\nUpdated Price inside function = %.2f\n", p->price);
}
int main(){
    struct Product p1;
    p1.price=1000;
    p1.disc=20;
    printf("Original price %.2f\n",p1.price);
    calcdiscount(p1);
    printf("After Call by Value, Price: %.2f\n", p1.price);
    updatePrice(&p1);
    printf("After Call by Address, Price: %.2f\n", p1.price);
    return 0;
}