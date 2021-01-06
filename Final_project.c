#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Menu Functions
void menu_box();
void Arrays();
void Linked_lists_menu();
int Singly_Linked_List_main();
int Doubly_Linked_List_main();
void Stacks_menu();
void Queue_menu();
void Sorting_menu();
int Bubble_sort_main();
void Selection_sort();
void Quick_sort();
int Merge_sort_main();
int Insertion_sort();
void Recursion_menu();
void Fibonacci_main();

// Operational Functions
/*
    Create working functions of the menu functions since nested functions aren't allowed in C
*/

// Stack
void Stack_Operations();
void push(int val);
int peek();
int pop();
int isEmpty();
void printStack();

// Queues
void Queue_Operations();
void ENQUEUE(int x);
int DEQUEUE();
int PEEK();
void printQUEUE();

// ***** MAIN MENU ******

void menu_box()
{
    int choice;
    printf("\n");
    printf(" Welcome to Diving into Data Structures in C!\n");
    printf("By John Piccione, CS Student @Dakota State University\n");

    for (int i = 0; i < 24; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Arrays          |\n");
    printf("|   2) Linked Lists    |\n");
    printf("|   3) Sorting         |\n");
    printf("|   4) Recursion       |\n");
    printf("|   5) Stacks          |\n");
    printf("|   6) Queues          |\n");
    printf("|   7) Quit            |\n");

    for (int i = 0; i < 24; ++i)
    {
        printf("-");
    }
    printf("\n\n");
    printf("************************\n\n");
    printf("Diving into Data Structures in C, is a brief overview of \nlinear data structures, as well as some simple sorting algorithms.\n\n");
    printf("What would you like to learn about? \n");
    printf("Please choose an option 1-7: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Option 1: Arrays\n");
        Arrays();
        break;
    case 2:
        printf("Option 2: Linked Lists\n");
        Linked_lists_menu();
        break;
    case 3:
        printf("Option 3: Sorting\n");
        Sorting_menu();
        break;
    case 4:
        printf("Option 4: Recursion\n");
        Recursion_menu();
        break;
    case 5:
        printf("Option 5: Stacks\n");
        Stacks_menu();
        break;
    case 6:
        printf("Option 6: Queues\n");
        Queue_menu();
        break;
    case 7:
        printf("Good bye!\n\n");
        exit(0);
        break;

    default:
        printf("Error! Please choose a num 1-7\n");
        break;
    }
}

// ***** ARRAY MENU ******

void Arrays()
{
    int choice;

    printf("\n\n******* Welcome to Arrays! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) 1 Dimensional Arrays  |\n");
    printf("|   2) 2 Dimensional Arrays  |\n");
    printf("|   3) Return to Main Menu   |\n");
    printf("|   4) Quit                  |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about 1 dimensional arrays *****\n\n");
        printf("- An array is a linear data structure used to store data contiguously, meaning in a sequential order.\n\n");
        printf("- Arrays can be visualized like a group of boxes next to each other. |  1  |  2  |  3  |\n\n");
        printf("- An array can be declared several ways, by specifying the type of data to be stored(integers, chars) \n  and then the number of elements in the array. Ex: int array[10]; creates an integer array that will store 10 elements.\n  The other way is to declare the array and initialise its elements. Ex: int array[5] = {1,2,3,4,5};\n  You can also omit the size of the array and C will automatically allocate the amount of space needed. Ex: int array[] = {1,2,3,4,5};\n\n");
        printf("- You can access any element of an array by calling its index, or position, within the array. \n  Arrays start counting with 0. Ex: The first element is a index 0\n\n");
        printf("- To see this is in code, array[0]; so after I initalised the array, I can assign whatever values I want in the array. Ex: array[0] = 13;\n\n");

        printf("***** Array Examples *****\n");
        printf("int array1[5] = {1,2,3,4,5};\n\n");
        int array1[5] = {1, 2, 3, 4, 5};
        printf("Element at index 3 is: %d", array1[3]);
        printf("\n\n");
        printf("Now I will change that element from 4 to 13\n\n");
        array1[3] = 13;
        for (int i = 0; i < 5; ++i)
        {
            printf("Element [%d] is at index[%d]\n", array1[i], i);
        }
        printf("\n\n");
        printf("Element at index 3 is now: %d", array1[3]);
        printf("\n\n");
        Arrays();
        break;
    case 2:
        printf("***** You have chosen to learn about 2 dimensional arrays *****\n\n");
        printf("- A 2 dimensional array(2D) is an array with 2 size parameters, an X and Y or row and column. It can be visualized as a table in excel.\n\n");
        printf("- You declare a 2D array by specifying its data type, just like a regular or 1D array, then you specify the size of the two parameters. EX: int array[3][3]={1,2,3,4,5,6,7,8,9};\n  Sometimes it's easier to visualize the structure of the 2D array by initialising it like such: int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}}\n  The 2D array's element size can be calculated by multiplying the row and column amounts(3X3=9).\n\n");
        printf("- You can access elements in a 2D array by calling BOTH the x and y indexes. Ex: say we want the number 2 and 7 in the array above, we can get 2 by calling array[0][1]; and 7 by calling array[2][0];\n\n");

        printf("***** 2D Array Examples *****\n");
        int array2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        printf("Element at array2[0][1] is: %d\n", array2[0][1]);
        printf("Element at array2[2][0] is: %d\n\n", array2[2][0]);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                printf("Element at [%d][%d] is: %d\n", i, j, array2[i][j]);
            }
        }
        Arrays();
        break;
    case 3:
        menu_box();
        break;
    case 4:
        printf("Good bye!\n\n");
        exit(0);
        break;
    default:
        printf("Error, please choose 1-4.\n");
        Arrays();
        break;
    }
}

// ***** LINKED LISTS MENU ******

void Linked_lists_menu()
{
    printf("\n\n******* Welcome to Linked Lists! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Singly Linked Lists   |\n");
    printf("|   2) Doubly Linked Lists   |\n");
    printf("|   3) Return to Main Menu   |\n");
    printf("|   4) Quit                  |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about Singly Linked Lists! *****\n\n");
        printf("- A linked list is a linear data structure where the data is stored in a variable we call a node. The node also contains a pointer to the next element in the linked list.\n Linked lists are not stored contiguously like arrays which is a good thing and bad thing. Since the data doesn't need to be stored right next to each other,\n there is more flexibility with regards to memory storage. The system doesn't need to find x number of memory slots right next to each other to allocate the space like it does for an array.\n The trade off is to access elements of the linked list is slightly slower than in an array.\n\n");
        printf("- A linked list always has what is referred to as the head node and a tail node. The data is stored in the nodes between the head and tail nodes. The singly linked list\n only has a pointer pointing to the next node, unlike a doubly linked list that has a pointer to the next node and the previous node, so you can traverse a\n doubly linked list both ways, whereas a singly linked list can only be traversed one way.\n\n");
        printf("- You can visualize a linked list like a train. Each node is a train car and the pointer is the connector to the next car. The train engine is the head node and the caboose\n is the tail node. Granted, the train cars are contiguous and linked lists aren't.\n\n");
        printf("Singly linked list Ex: [head node]|[pointer]->[node1]|[pointer]->[node2]|[pointer]->[tail node]|[NULL]\n\n");
        printf("- These are some of the operations you can perform on a singly linked list:\n");
        printf("- Add data to the front of the linked list\n");
        printf("- Add data to the end of the linked list\n");
        printf("- Add data to a specific index within the linked list\n");
        printf("- Delete data from the front of the linked list\n");
        printf("- Delete data from the end fo the linked list\n");
        printf("- Delete data from a specfic index within the linked list\n");
        printf("- Display all elements of the linked list\n");
        printf("Another Singly linked list Ex: 5-> 28-> 33-> 1\n\n");
        Singly_Linked_List_main();
        Linked_lists_menu();
        break;

    case 2:
        printf("***** You have chosen to learn about Doubly Linked Lists! *****\n\n");
        printf("- A doubly linked list is just like a singly linked list, except like mentioned in the singly linked list section, there is a pointer that points to the next element\n  and a pointer that points back to the previous element.\n\n");
        printf("- This makes traversing the doubly linked list possible in both directions.\n\n");
        printf("Doubly linked list Ex: [head node]|[pointer]<->[node1]|[pointer]<->[node2]|[pointer]<->[tail node]|[NULL]\n\n");
        printf("The same operations of a singly linked list can be performed on a doubly linked list with an additional operation that allows you to print the elements from the tail to the head.\n\n");
        printf("Another Doubly linked list Ex: 5 <-> 28 <-> 33 <-> 1 <-> 13 <-> 56\n\n");
        Doubly_Linked_List_main();
        Linked_lists_menu();
        break;

    case 3:
        menu_box();
        break;

    case 4:
        printf("Good bye!\n");
        exit(0);
        break;

    default:
        printf("Error, please choose 1-4\n");
        break;
    }
}

//***** SINGLY LINKED LIST *****

typedef struct node_def node1;
struct node_def
{
    int data;
    node1 *next;
};

node1 *makeNode(int val);
node1 *insertFront(node1 *head, node1 *new);
void printList(node1 *head);
node1 *deleteNode(node1 *head, int val);
node1 *modifyNode(node1 *head, int old, int new);
int inList(node1 *head, int val);
void lookForDupes(node1 *L);

int Singly_Linked_List_main()
{
    // this function acts like a main since I can't nest functions inside functions

    node1 *head = NULL;
    node1 *tmp = NULL;
    node1 *newNode = NULL;

    int amt, randNums, find, swap, del;

    srand(time(NULL));
    printf("How many nodes?: ");
    scanf("%d", &amt);

    for (int i = 0; i < amt; ++i)
    {
        randNums = rand() % 10000;
        newNode = makeNode(randNums);
        head = insertFront(head, newNode);
    }
    printList(head);
    printf("\n");
    printf("Enter a number to search for: ");
    scanf("%d", &find);

    int mark = inList(head, find);
    if (mark)
    {
        printf("Found %d in list\n", find);
        printf("\n");
        printf("Change %d to what value? ", find);
        scanf("%d", &swap);
        head = modifyNode(head, find, swap);
        printf("\n");
        printList(head);
    }
    else
    {
        printf("%d Not in list\n", find);
    }
    printf("\n");
    printf("Enter a number to remove: ");
    scanf("%d", &del);
    head = deleteNode(head, del);
    printf("\n");
    printList(head);
    printf("\n");
    lookForDupes(head);

    return 0;
}

node1 *makeNode(int val)
{
    node1 *tmp = malloc(sizeof(node1));
    tmp->data = val;
    tmp->next = NULL;
    return tmp;
}

node1 *insertFront(node1 *head, node1 *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
    return head;
}

void printList(node1 *head)
{
    node1 *tmp = head;

    int i = 0;

    for (i = 1; tmp != NULL; ++i)

    {

        printf("%4d ", tmp->data);

        if (i % 10 == 0)

            printf("\n");

        tmp = tmp->next;
    }

    if ((i - 1) % 10)

        printf("\n");

    return;
}

node1 *deleteNode(node1 *head, int val)
{
    node1 *tmp = head;
    node1 *curr, *prev = NULL;
    while (tmp != NULL)
    {
        if (tmp->data == val)
        {
            curr = tmp->next;
            printf("%d was deleted from the list\n", tmp->data);
            free(tmp);
            if (prev != NULL)
            {
                prev->next = curr;
                return head;
            }
            else
            {
                head = curr;
                return head;
            }
        }
        prev = tmp;
        tmp = tmp->next;
    }
    return head;
}

node1 *modifyNode(node1 *head, int old, int new)
{
    node1 *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == old)
        {
            tmp->data = new;
            break;
        }
        tmp = tmp->next;
    }
    return head;
}

int inList(node1 *head, int val)
{
    node1 *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == val)

            return 1;
        tmp = tmp->next;
    }
    return 0;
}

void lookForDupes(node1 *L)
{
    node1 *tmp = malloc(sizeof(node1));
    tmp = NULL;

    node1 *X, *Y;
    X = L;
    int mark = 0;

    while (X && X->next)
    {
        Y = X->next;
        while (Y)
        {
            if (X->data == Y->data)
            {
                if (tmp == NULL)

                    tmp = makeNode(X->data);
                tmp = insertFront(tmp, X);
                mark = 1;
            }
            Y = Y->next;
        }
        X = X->next;
    }
    if (mark == 1)
    {
        printList(tmp);
    }
    else
    {
        printf("No Dupes Found!\n");
    }
}

//***** DOUBLY LINKED LIST *****

void insert(int data);
void printTheList();
typedef struct node_def2 node3;
struct node_def2
{
    node3 *prev;
    int data;
    node3 *next;
};

node3 *head = NULL;
node3 *tail = NULL;
node3 *curr = NULL;

void insert(int data)
{
    node3 *link = malloc(sizeof(node3));

    link->data = data;
    link->prev = NULL;
    link->next = NULL;

    // If head is empty, create new list
    if (head == NULL)
    {
        head = link;
        return;
    }

    curr = head;

    // move to the end of the list
    while (curr->next != NULL)
        curr = curr->next;

    // Insert link at the end of the list
    curr->next = link;
    tail = link;
    link->prev = curr;
}

void printTheList()
{
    node3 *ptr = head;

    printf("\n[head] <->");

    while (ptr->next != NULL)
    {
        printf(" %d <->", ptr->data);
        ptr = ptr->next;
    }

    printf(" %d <->", ptr->data);
    printf(" [tail]\n");
}

int Doubly_Linked_List_main()
{
    insert(5);
    insert(28);
    insert(33);
    insert(1);
    insert(13);
    insert(56);

    printTheList();
    return 0;
}

// ***** STACKS MENU ******

void Stacks_menu()
{

    printf("\n\n******* Welcome to Stacks! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Overview of Stacks    |\n");
    printf("|   2) Stack Operations      |\n");
    printf("|   3) Return to Main Menu   |\n");
    printf("|   4) Quit                  |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about Stacks! *****\n\n");
        printf("- A stack is an abstract data type data structure. It's abstract because it can behave like a real world stack. You can think of a stack data structure like a stack of\n  plates at a buffet. Stacks have a Last In, First Out operation. This means that the last element added to the stack is the first one to leave, just as at the\n  buffet, you take the top plate off first which was the last plate placed on the stack.\n\n");
        Stacks_menu();
        break;

    case 2:
        printf("***** You have chosen Stack Operations! *****\n\n");
        printf("The operation of a Stacks are: \n");
        printf("- PUSH - means to add an element to the stack\n");
        printf("- POP - means to remove an element off the top of the stack\n");
        printf("- PEEK - means to peek at the top element of the stack\n");
        printf("- ISEMPTY - means to check and see if the stack is empty\n");
        printf("- Print out all elements of the stack\n");

        printf("EX: Here we will push the values 3, 6, 13, 555, 234 to the stack. Then display the top element, and pop(remove) an element off the top until the stack is empty.\n\n");
        Stack_Operations();
        printf("\n\n");

        Stacks_menu();
        break;

    case 3:
        menu_box();
        break;

    case 4:
        printf("Good bye!\n");
        exit(0);
        break;

    default:
        printf("Error, please choose 1-4\n");
        break;
    }
}

int stack_arr[100];
int top = 0;

void Stack_Operations()
{
    // this function acts like main since I can't nest functions inside functions
    push(3);
    push(6);
    push(-13);
    push(555);
    push(234);

    printf("Here is the entire stack: \n");
    printStack();
    printf("\n\n");

    printf("Top element is: %d\n", peek());
    printStack();
    printf("\n\n");

    printf("Popping off: %d\n", pop());
    printf("Top element is now: %d\n", peek());
    printStack();
    printf("\n\n");

    printf("Popping off: %d\n", pop());
    printf("Top element is now: %d\n", peek());
    printStack();
    printf("\n\n");

    printf("Popping off: %d\n", pop());
    printf("Top element is now: %d\n", peek());
    printStack();
    printf("\n\n");

    printf("What's left of the stack:\n");
    printStack();
    printf("\n\n");

    printf("Popping off: %d\n", pop());
    printf("Top element is now: %d\n", peek());
    printStack();
    printf("\n\n");

    printf("Popping off: %d\n", pop());
    printStack();
    isEmpty();
}

void push(int val)
{
    top++;
    stack_arr[top] = val;

    return;
}

int peek()
{
    return stack_arr[top];
}

int pop()
{
    int val = stack_arr[top];
    top--;

    return val;
}

int isEmpty()
{

    if (top == 0)
    {
        printf("Stack is empty!\n");
        return 1;
    }
    else
        return 0;
}

void printStack()
{
    int i = 0;

    for (i = top; i > 0; --i)
        printf("%2d ", stack_arr[i]);
    printf("\n");

    return;
}

// ***** QUEUE MENU ******

void Queue_menu()
{

    printf("\n\n******* Welcome to Queues! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Overview of Queues    |\n");
    printf("|   2) Queue Operations      |\n");
    printf("|   3) Return to Main Menu   |\n");
    printf("|   4) Quit                  |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about Queues! *****\n\n");
        printf("- A queue is an abstract data type data structure. It's abstract because it can behave like a real world queue. You can think of a queue data structure like a line at the retail store.\n  Queues have a First In, First Out operation. This means that the first element added to the queue is the first one to leave, just like at the\n  checkout line in a store, the first customer to the register leaves first, then the next customer and so on.\n\n");
        printf("Queues can be create using arrays or structs in C.\n\n");
        Queue_menu();
        break;

    case 2:
        printf("***** You have chosen Queue Operations! *****\n\n");
        printf("The operations of a Queue are: \n");
        printf("- ENQUEUE(push) - means to add an element to the end queue\n");
        printf("- DEQUEUE(pop) - means to remove an element from the front of the queue\n");
        printf("- PEEK - means to peek at the front element of the queue\n");
        printf("- ISEMPTY - means to check and see if the queue is empty\n");
        printf("- Print out all elements of the queue\n\n");

        printf("EX: Here we will enqueue the values 3, 6, 13, 555, 234 to the queue.\n\n");
        printf(" Front               Back\n");
        Queue_Operations();
        Queue_menu();
        break;

    case 3:
        menu_box();
        break;

    case 4:
        printf("Good bye!\n");
        exit(0);
        break;

    default:
        printf("Error, please choose 1-4\n");
        break;
    }
}

typedef struct Node node2;
struct Node
{
    int val;
    node2 *next;
};

node2 *front = NULL;

void ENQUEUE(int x)
{
    node2 *newNode = malloc(sizeof(node2));
    newNode->val = x;
    newNode->next = NULL;

    node2 *tmp = front;
    if (front == NULL)
    {
        front = newNode;
    }
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

int DEQUEUE()
{
    int data = front->val;
    node2 *tmp = front;
    front = front->next;
    free(tmp);
    return data;
}

int PEEK()
{
    return front->val;
}

void printQUEUE()
{
    node2 *tmp = front;
    while (tmp != NULL)
    {
        printf("%4d ", tmp->val);
        tmp = tmp->next;
    }
    printf("\n");
}

void Queue_Operations()
{
    // Acts as main since we can't nest functions
    ENQUEUE(3);
    ENQUEUE(6);
    ENQUEUE(13);
    ENQUEUE(555);
    ENQUEUE(234);
    printQUEUE();

    printf("\nThe front of the queue is: %d\n", PEEK());
    printf("Now lets remove the first 2 elements from the queue\n\n");
    DEQUEUE();
    DEQUEUE();
    printQUEUE();
    printf("Now the front of the queue is: %d\n\n", PEEK());

    printf("Now lets add 2 new elements to the queue\n\n");
    ENQUEUE(-5);
    ENQUEUE(999);
    printQUEUE();
}

// ***** SORTING MENU ******

void Sorting_menu()
{
    printf("\n\n******* Welcome to Sorting! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Overview of Sorting   |\n");
    printf("|   2) Types of Sorting      |\n");
    printf("|   3) Bubble Sort           |\n");
    printf("|   4) Selection Sort        |\n");
    printf("|   5) Quicksort             |\n");
    printf("|   6) Mergesort             |\n");
    printf("|   7) Insertion Sort        |\n");
    printf("|   8) Return to Main Menu   |\n");
    printf("|   9) Quit                  |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about Sorting! *****\n\n");
        printf("- Sorting algorithms are used to rearrange a given array or a list of elements in a particular order. There are many types of sorting algorithms\n  and each has it's own advantages and disadvantages in regards to their runtime/space complexities, which we won't cover here.\n\n");
        printf("- To learn about the many types of sorting algorithms, go to option 2. To see these in action, go to one of the other sorting options.\n\n");
        Sorting_menu();
        break;

    case 2:
        printf("***** You have chosen Types of Sorting! *****\n\n");
        printf("- There are many different methods to sort data. Here is a list of the few we will be going over:\n\n");
        printf("- Bubble Sort: repeatedly steps through the array or list and compares adjacent elements, then swaps them if they are in the wrong order.\n  The pass through the list or array is repeated until the list or array is sorted.\n\n");
        printf("EX: we have an array of numbers 5 1 4 2 8, and we want to sort them from lowest to highest using Bubble sort.\n\n");
        printf("FIRST PASS: The algorithm will first compare 5 and 1, since 1 is less than 5, it will swap those two. The array currently looks like this: 1 5 4 2 8\n  Now it keeps moving down the array. It compares 5 and 4, 4 is less than 5, so it swaps them as well. The array looks like this now 1 4 5 2 8\n  It keeps going, comparing 2 and 5, 2 is less than 5, it swaps places leaving the array looking as such 1 4 2 5 8\n  The last comparison is between 5 and 8, since 5 is in fact less than 8, no swap occurs and the first pass is complete.\n  The algorithm will start it's second pass starting from the beginning of the array.\n\n");
        printf("SECOND PASS: Our array is now 1 4 2 5 8, it looks at 1 and 4, they're already in order so it moves to compare 4 and 2, 2 is less than 4, so it swaps them giving us 1 2 4 5 8\n  it now looks at 4 and 5, they're in order, next it compares 5 and 8, which are in order as well. The second pass is complete.\n\n");
        printf("THIRD PASS: The algorithm doesn't know that the array is already in sorted order yet, it must go through the array without any swaps in order to confirm that it is finished.\n\n");
        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("- Selection Sort: this algorithm divides up an array into two parts, a sorted subarray of the items and a subarray of the remaining unsorted items.\n  So it creates another array but this one is empty, the sorted array. Then it goes through the array looking for the smallest(or largest,\n  depending on the order you want it sorted) and places that number in the sorted array. It does this repeatedly until the\n  unsorted array is empty and the sorted array contains all the elements in the order defined.\n\n");
        printf("EX: using the same array of numbers as before, we'll sort them from smallest to largest using Selection Sort.\n\n");
        printf("FIRST PASS:  ()<-sorted array | unsorted array->(5 1 4 2 8)   the algorithm moves through the array, determines that 1 is the lowest number, then places that numbe into the sorted array.\n\n");
        printf("SECOND PASS: (1)<-sorted array |  unsorted array->(5 4 2 8)   the algorithm moves through the array, determines that 2 is the lowest number, then places that numbe into the sorted array.\n\n");
        printf("THIRD PASS:  (1 2)<-sorted array |  unsorted array->(5 4 8)   the algorithm moves through the array, determines that 4 is the lowest number, then places that numbe into the sorted array.\n\n");
        printf("FOURTH PASS: (1 2 4)<-sorted array |  unsorted array->(5 8)   the algorithm moves through the array, determines that 5 is the lowest number, then places that numbe into the sorted array.\n\n");
        printf("FIFTH PASS:  (1 2 4 5)<-sorted array |  unsorted array->(8)   the algorithm moves through the array, determines that 8 is the lowest number, then places that numbe into the sorted array. The algorithm has determined that the array is now sorted.\n\n");
        printf("FINAL RESULT:(1 2 4 5 8)<-sorted array | unsorted array->()\n\n");
        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("- Quicksort: It first divides the input array into two smaller sub-arrays: the low elements and the high elements. It then recursively sorts the sub-arrays. This is difficult to show without graphical examples.\n\n");
        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("- Mergesort: First divide the list into the smallest unit (1 element), then compare each element with the adjacent list to sort and merge\n  the two adjacent lists. Finally all the elements are sorted and merged. This is difficult to show without graphical examples.\n\n");
        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

        printf("- Insertion Sort: Sorting is typically done in-place, by iterating up the array, growing the sorted list behind it. At each array-position,\n  it checks the value there against the largest value in the sorted list (which happens to be next to it, in the previous array-position checked).\n  If larger, it leaves the element in place and moves to the next. If smaller, it finds the correct position within the sorted list,\n  shifts all the larger values up to make a space, and inserts into that correct position. This is difficult to show without graphical examples.\n\n");

        Sorting_menu();
        break;

    case 3:
        Bubble_sort_main(2, "input.txt");
        Sorting_menu();
        break;

    case 4:
        Selection_sort();
        Sorting_menu();
        break;

    case 5:
        Quick_sort();
        Sorting_menu();
        break;

    case 6:
        Merge_sort_main();
        Sorting_menu();
        break;

    case 7:
        Insertion_sort();
        Sorting_menu();
        break;

    case 8:
        menu_box();
        break;

    case 9:
        printf("Good bye!\n");
        exit(0);
        break;

    default:
        printf("Error, please choose 1-9\n");
        break;
    }
}

// ***** BUBBLE SORT *****

void bubbleSort(int arr[], int size);
void printArr(int arr[], int size);
FILE *fp = NULL;

int Bubble_sort_main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error, Missing Arguments!\n");
        exit(1);
    }
    fp = fopen("input.txt", "r");

    int arr[20];
    int i;
    int size;
    fscanf(fp, "%d", &size);
    for (i = 0; i < size; ++i)
    {
        fscanf(fp, "%d", &arr[i]);
    }

    bubbleSort(arr, size);
    fclose(fp);
    return 0;
}

void bubbleSort(int arr[], int size)
{

    int tmp, i, j;
    printf("\n** Before Sorting**\n");
    printf(" ");
    printArr(arr, size);
    printf("\n\n");
    printf("== Bubble Sort ==\n");

    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {

            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            printf(" ");
            printArr(arr, size - i);
            printf("\n");
        }
    }

    printf("\n== Sorting Completed ==\n\n");
    printf("** After Sorting**\n");
    printf(" ");
    for (i = 0; i < size; ++i)
    {
        printf("%3d ", arr[i]);
    }
    printf("\n");
}

void printArr(int arr[], int size)
{
    int i;

    fscanf(fp, "%d", &size);
    for (i = 0; i < size; ++i)
    {
        printf("%3d ", arr[i]);
    }
}

// ***** SELECTION SORT *****

void Selection_sort()
{
    int i, j, count, temp, arr[25];

    printf("How many numbers do you want?: ");
    scanf("%d", &count);

    printf("Enter %d elements: ", count);

    for (i = 0; i < count; ++i)
        scanf("%d", &arr[i]);

    for (i = 0; i < count; ++i)
    {
        for (j = i + 1; j < count; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    printf("*** Sorting Complete ***\n\n");
    printf("*** Sorted Array ***\n");
    for (i = 0; i < count; i++)
        printf(" %d", arr[i]);
}

// ***** QUICK SORT *****

void insert_item();

int size, item;
int array[50];

void Quick_sort()
{
    int i = 0;
    int x;
    srand(time(NULL));

    printf("Enter size of array up to 50: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        array[i] = rand() % size;
    }

    printf("\n*** Before insertion ***\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the item to insert: ");
    scanf("%d", &item);

    insert_item();

    printf("\n*** After insertion ***\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Quicksort
    int j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\n*** After sort ***\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void insert_item()
{
    int i = size - 1;

    while (item < array[i] && i >= 0)
    {
        array[i + 1] = array[i];
        i--;
    }

    array[i + 1] = item;
    size++;
}

// ***** MERGE SORT *****

void Merge_sort(int arr[], int i, int j);
void merge(int arr[], int i1, int j1, int i2, int j2);

void Merge_sort(int arr[], int i, int j)
{
    // pivot variable
    int mid;

    if (i < j)
    {
        mid = (i + j) / 2;
        Merge_sort(arr, i, mid);
        Merge_sort(arr, mid + 1, j);
        merge(arr, i, mid, mid + 1, j);
    }
}

void merge(int arr[], int i1, int j1, int i2, int j2)
{
    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while (i <= j1 && j <= j2)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= j1)
        temp[k++] = arr[i++];

    while (j <= j2)
        temp[k++] = arr[j++];

    for (i = i1, j = 0; i <= j2; ++i, ++j)
        arr[i] = temp[j];
}

int Merge_sort_main()
{
    int arr[30], num, i;
    printf("Enter number of elements:");
    scanf("%d", &num);
    printf("Enter array elements:");

    for (i = 0; i < num; ++i)
        scanf("%d", &arr[i]);

    Merge_sort(arr, 0, num - 1);

    printf("\n");
    printf("*** Sorted Array ***\n");
    for (i = 0; i < num; ++i)
        printf("%d ", arr[i]);
    return 0;
}

// ***** INSERTION SORT *****

int Insertion_sort()
{
    int i, j, count, temp, arr[25];

    printf("How many numbers do you want?: ");
    scanf("%d", &count);

    printf("Enter %d elements: ", count);

    for (i = 0; i < count; ++i)
        scanf("%d", &arr[i]);

    for (i = 1; i < count; ++i)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("\n");
    printf("*** Sorted Array ***\n");
    for (i = 0; i < count; ++i)
        printf(" %d", arr[i]);

    return 0;
}

void Recursion_menu()
{
    printf("\n\n******* Welcome to Recursion! *******\n\n");
    printf("\nWhich would you like to learn about?\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    printf("|   1) Overview of Recursion  |\n");
    printf("|   2) Example of Recursion   |\n");
    printf("|   3) Return to Main Menu    |\n");
    printf("|   4) Quit                   |\n");
    for (int i = 0; i < 30; ++i)
    {
        printf("-");
    }
    printf("\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("***** You have chosen to learn about Recursion! *****\n\n");
        printf("- Recursion is the process of breaking large problems down into smaller pieces. In programming, recursion is accomplished by having the function call itself repeatedly.\n  Popular problems that can be solved with recursion are the Fibonacci sequence, and the Towers of Hanoi game. See option 2 for an explanation and example of the Fibonacci sequence.\n\n");
        Recursion_menu();
        break;

    case 2:
        printf("***** You have chosen Recursion Example! *****\n\n");
        printf("-- The Fibonacci Sequence --\n");
        printf("The Fibonacci Sequence is a set of numbers that each number is the sum of the two PRECEDING numbers. It begins at 0.\n\n");
        printf("Ex: 0,1,1,2,3,5,8,13,21,34,55,89,144...\n\n");
        Fibonacci_main();
        Recursion_menu();
        break;

    case 3:
        menu_box();
        break;

    case 4:
        printf("Good bye!\n");
        exit(0);
        break;

    default:
        printf("Error, please choose 1-4\n");
        break;
    }
}

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n - 2) + Fibonacci(n - 1);
    }
}

void Fibonacci_main()
{
    int x = Fibonacci(9);
    printf("Fibonacci 9 = %d, because 21 + 13 is %d", x, x);
}

int main()
{
    menu_box();

    return 0;
}