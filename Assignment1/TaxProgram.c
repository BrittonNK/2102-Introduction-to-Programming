//Brittonnetic
#include "stdio.h"
#include "stdbool.h"

int main() {
    float gross_pay,net_pay, tax_payable;
    int n_dependants,counter;
    char proceed;
    counter = 1;
    while(true) {
        printf("-----------------------------------------------------------------------------------\n");
        printf("Employee No.%d\n",counter);
        printf("Enter the gross pay for employee No.%d\n",counter);
        scanf("%f",&gross_pay);
        printf("Enter the number of descendants for employee No.%d\n",counter);
        scanf("%d",&n_dependants);
        if(gross_pay<=10000) {
            if(n_dependants<3) {
                tax_payable=0*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
            else {
                tax_payable=0*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
        }
        else if (gross_pay<=20000) {
            if(n_dependants<3) {
                tax_payable=0.15*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
            else {
                tax_payable=0.10*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
        }
        else {
            if(n_dependants<3) {
                tax_payable=0.35*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
            else {
                tax_payable=0.25*gross_pay;
                net_pay=gross_pay-tax_payable;
            }
        }
        printf("The Gross pay is: %.2f\n",gross_pay);
        printf("The Tax payable is: %.2f\n",tax_payable);
        printf("The Net pay is: %.2f\n",net_pay);
        printf("-----------------------------------------------------------------------------------\n");
        printf("Do you want to compute another employee? (Input \"Y\" for Yes and \"N\" for No)\n");
        getchar();
        scanf("%c",&proceed);
        while (proceed!='Y'&& proceed!='N') {
            printf("Input either \"Y\" or \"N\"\n");
            getchar();
            scanf("%c",&proceed);

        }
        if(proceed=='N') {
            break;
        }
        counter++;
    }
}
//Brittonnetic
