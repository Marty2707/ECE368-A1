#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int quarter = 25;  // Value of a quarter in cents
    int dime = 10;     // Value of a dime in cents
    int nickel = 5;    // Value of a nickel in cents
    //int penny = 1;     // Value of a penny in cents

/*
Find the number of quarters needed and reduce number of quarters to 0
For each quarter find the number of dimes that would be needed to make up the remaining amount of money and reduce to 0
For each dime reduce find the number of nickels that would be needed to make up the remaining amount of money and reduce to 0
For each nickel find the number of pennies needed to complete the money required
When you find each penny value, print quarters, dimes, nickels, pennies
*/  
    
    
for (int remaining = n / quarter; remaining >= 0; remaining--) {
    int n_temp = n - (quarter * remaining);  
        for (int new_remaining = n_temp / dime; new_remaining >= 0; new_remaining--) {
            int n_temp2 = n_temp - (dime * new_remaining);  
                for (int new_new_remaining = n_temp2 / nickel; new_new_remaining >= 0; new_new_remaining--) {
                    int n_temp3 = n_temp2 - (nickel * new_new_remaining);  
                    printf("%d quarter(s) %d dime(s), %d nickel(s) %d pennie(s)\n", remaining, new_remaining, new_new_remaining, n_temp3);
               }
           }
       }

       return 0;
   }
