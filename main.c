#include <stdio.h>
#include <string.h>

void animalia(char domesticAnimals[5][10], char wildAnimals[5][10], char result[10][10]) {
    int i = 0, j = 0, k = 0;

    
    while (i < 5 && j < 5) {
        if (strcmp(domesticAnimals[i], wildAnimals[j]) < 0) {
            strcpy(result[k++], domesticAnimals[i++]);
        } else {
            strcpy(result[k++], wildAnimals[j++]);
        }
    }


    while (i < 5) {
        strcpy(result[k++], domesticAnimals[i++]);
    }

  
    while (j < 5) {
        strcpy(result[k++], wildAnimals[j++]);
    }
}

int main() {
    char domesticAnimals[5][10] = {"cat", "cow", "dog", "goat", "sheep"};
    char wildAnimals[5][10] = {"elephant", "leopard", "lion", "monkey", "tiger"};

 
    char result[10][10];

 
    animalia(domesticAnimals, wildAnimals, result);


    printf("Merged Sorted Animal List:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", result[i]);
    }


 return 0;
}
