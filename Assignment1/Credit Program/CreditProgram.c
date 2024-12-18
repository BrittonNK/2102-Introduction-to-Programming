//Brittonnetic
#include "stdio.h"
#include "stdbool.h"

int main(){
    int n_customers,quantity;
    float credit_limit,price,value_of_goods;
    char proceed;
    n_customers = 1;
    bool next = true;
    while (next==true){

        printf("Customer No.%d \n",n_customers);
        printf("Enter your credit limit: \n");
        scanf("%f",&credit_limit);
        printf("Enter the price of the commodity you wish to purchase: \n");
        scanf("%f",&price);
        printf("Enter the quantity of the commodity you intend to purchase: \n");
        scanf("%d",&quantity);
        //Calculations
        value_of_goods= price*(float)quantity;
        while(value_of_goods>credit_limit){
            printf("Sorry you cannot purchase goods worth such a value on credit!\n");
            printf("Credit limit:%.2f \n Declined Value of goods:%.2f\n",credit_limit,value_of_goods);
            printf("Input a different quantity value: \n");
            scanf("%d",&quantity);
            getchar();

            value_of_goods=price*(float)quantity;

        }
        printf("Thank you for purchasing from us!\n");
        printf("Value of Purchase: %.2f\n",value_of_goods);
        n_customers++;
        printf("---------------------------------------------------------------------\n");
        printf("Do you wish to proceed to the next customer? (Input \"Y\" for Yes and \"N\" for No)\n");
        getchar();
        scanf(" %c",&proceed);
        while (proceed!='Y'&& proceed!='N') {
            printf("Input either \"Y\" or \"N\"\n");
            getchar();
            scanf(" %c",&proceed);
        }
        printf("---------------------------------------------------------------------\n");
        if(proceed=='N'){
            next=false;
        } else if(proceed=='Y'){
            next=true;
        }
    }
    printf("Customers Served: %d",n_customers-1);

    return  0;
    
}
//Brittonnetic
