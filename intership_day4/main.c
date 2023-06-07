#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\nLibrary Catalog\n");
        printf("1. Add a book\n");
        printf("2. Search for a book by title\n");
        printf("3. Search for a book by author\n");
        printf("4. Display all books\n");
        printf("5. Remove a book\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBookByTitle();
                break;
            case 3:
                searchBookByAuthor();
                break;
            case 4:
                displayAllBooks();
                break;
            case 5:
                removeBook();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}