#include <stdio.h>
#include <string.h>
#include "catalog.h"

#define MAX_BOOKS 100

struct Book catalog[MAX_BOOKS]; // array to store list of books with there information
int bookCount = 0;  // variable to keep a track on number of books...should be less than or = 100

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Catalog is full. Cannot add more books.\n");
        return;
    }

    struct Book newBook;  // variable for creating a new book

    printf("Enter the title of the book: ");
    // getchar();   // Used to skip '\n' from the buffer
    // scanf("%s", newBook.title);
    fgets(newBook.title, sizeof(newBook.title), stdin);  // fgets() reads the input including null character
    newBook.title[strcspn(newBook.title, "\n")] = '\0';  // strcspn() replaces the '\n' with '\0'

    printf("Enter the author of the book: ");
    // getchar();
    // scanf("%s", newBook.author);
    fgets(newBook.author, sizeof(newBook.author), stdin);  // fgets() reads the input including null character
    newBook.author[strcspn(newBook.author, "\n")] = '\0';  // strcspn() replaces the '\n' with '\0'
    printf("Enter the ISBN of the book: ");
    // getchar();
    // scanf("%s", newBook.isbn);
    fgets(newBook.isbn, sizeof(newBook.isbn), stdin);  // fgets() reads the input including null character
    newBook.isbn[strcspn(newBook.isbn, "\n")] = '\0';  // strcspn() replaces the '\n' with '\0'
    catalog[bookCount++] = newBook;

    printf("Book added to the catalog.\n");
}

void searchBookByTitle() {
    char searchTitle[100];

    printf("Enter the title to search for: ");
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    printf("Matching books:\n");
    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(catalog[i].title, searchTitle) == 0) {
            printf("Title: %s\n", catalog[i].title);
            printf("Author: %s\n", catalog[i].author);
            printf("ISBN: %s\n", catalog[i].isbn);
        }
    }
}

void searchBookByAuthor() {
    char searchAuthor[100];

    printf("Enter the author to search for: ");
    fgets(searchAuthor, sizeof(searchAuthor), stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = '\0';

    printf("Matching books:\n");
    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(catalog[i].author, searchAuthor) == 0) {
            printf("Title: %s\n", catalog[i].title);
            printf("Author: %s\n", catalog[i].author);
            printf("ISBN: %s\n", catalog[i].isbn);
        }
    }
}

void displayAllBooks() {
    printf("Catalog:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", catalog[i].title);
        printf("Author: %s\n", catalog[i].author);
        printf("ISBN: %s\n", catalog[i].isbn);
        printf("\n");
    }
}

void removeBook() {
    if (bookCount == 0) {
        printf("Catalog is empty. No books to remove.\n");
        return;
    }

    char searchTitle[100];

    printf("Enter the title of the book to remove: ");
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    int bookIndex = -1;

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(catalog[i].title, searchTitle) == 0) {
            bookIndex = i;
            break;
        }
   if (bookIndex != -1) {
        for (int i = bookIndex; i < bookCount - 1; i++) {
            catalog[i] = catalog[i + 1];
        }
        bookCount--;
        printf("Book removed from the catalog.\n");
    } else {
        printf("Book not found in the catalog.\n");
    }
    }
}