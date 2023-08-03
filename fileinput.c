#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 10
#define MAX_FIELD_LEN 50

// Define your structure to hold the CSV data
struct CSVData {
    char fields[MAX_ROWS][MAX_COLS][MAX_FIELD_LEN];
    int num_rows;
    int num_cols;
};

// Function to read CSV file and store data in the structure
int readCSVFile(const char *filename, struct CSVData *csvData) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Unable to open the file '%s'.\n", filename);
        return -1;
    }

    char buffer[MAX_FIELD_LEN];
    int row = 0, col = 0;

    while (fgets(buffer, sizeof(buffer), file) && row < MAX_ROWS) {
        char *field = strtok(buffer, ",");
        col = 0;

        while (field && col < MAX_COLS) {
            strncpy(csvData->fields[row][col], field, MAX_FIELD_LEN);
            field = strtok(NULL, ",");
            col++;
        }

        csvData->num_cols = col;
        row++;
    }

    csvData->num_rows = row;

    fclose(file);
    return 0;
}

int main() {
    char filename[MAX_FIELD_LEN];
    struct CSVData csvData;
    
    printf("Enter the CSV file path: ");
    scanf("%s", filename);

    int result = readCSVFile(filename, &csvData);

    if (result == 0) {
        printf("CSV File has been read successfully.\n");
        printf("Number of rows: %d\n", csvData.num_rows);
        printf("Number of columns: %d\n", csvData.num_cols);

        // You can access the CSV data using csvData.fields[row][col]
        // For example, printing the first row and first column:
        printf("Data at [0][0]: %s\n", csvData.fields[0][0]);
    }

    return 0;
}
