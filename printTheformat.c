#include <stdio.h>
void print_(int howMuch){
    printf("\n");
    printf("+");
    for (int i = 0; i < howMuch; i++) {
        printf("-");
    }
    printf("+");
}
void printRow(char name[], int id, int units, double amount){
    int i;
    for(i=0; name[i]!='\0';i++);
    printf("\n%d\t\t %-4.15s\t\t %8d\t %8.2lf\n",id, name, units, amount); //"    %-10d\t\t %-12s\t\t %8d\t %8.2f\n\n" "\n| %6.d | %*.20s| %5.d | %8.lf |\n"
}

void printHead(char col1[],char col2[],char col3[],char col4[] ){
    printf("\n%s\t\t %-4.15s\t\t %8s\t %8s\n",col1, col2, col3, col4);
}
int main() {
    print_(70);
    printHead("id", "name", "units", "amount");
    printRow("bharath P ", 9, 890, 5768);
    printRow("official", 9, 890, 5768);
    printRow("P official", 9, 890, 5768);
    printRow("P", 9, 890, 5768);
}