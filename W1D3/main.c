//
//  main.c
//  W1D3
//
//  Created by Cory Alder on 2015-06-09.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//void incrementBy10(int input) {
//    input = input + 10;
//    printf("incremented input to %i\n", input);
//}
//
//int main(int argc, const char * argv[]) {
//    // pass by value
//    
//    int myNumber = 10;
//    
//    incrementBy10(myNumber);
//    
//    printf("The value of myNumber is %i\n", myNumber);
//    
//    return 0;
//}

// ------------------------------


//
//int main(int argc, const char * argv[]) {
//    // pointers.
//    int myNumber = 10;
//    
//    int *aNumber = &myNumber;
//    
//    printf("aNumber is %p\n", aNumber);
//    
//    
//    *aNumber = *aNumber + 10;
//    
//    printf("myNumber is %i\n", myNumber);
//    
//    return 0;
//}

// ------------------------------

//int *getANumber() {
//    int myNumber = 10;
//    
//    int *myPointer = &myNumber;
//    
//    return myPointer;
//}
//
//
//int main(int argc, const char * argv[]) {
//    // pointers and stack frames
//    int *myPointer = getANumber();
//    
//    printf("address is %p and value is %i", myPointer, *myPointer);
//    
//    // create a fn that returns a reference to a stack variable.
//    return 0;
//}


// ------------------------------


//void incrementReferenceBy10(int *input) {
//    *input = *input + 10;
//    printf("incremented input to %i\n", *input);
//}
//
//
//int main(int argc, const char * argv[]) {
//    // pass by reference
//    
//    int number = 10;
//    
//    int *pointerToNumber = &number;
//    
//    printf("pointer address is %p\n", pointerToNumber);
//    
//    printf("pointer references value %i\n", *pointerToNumber);
//
//    incrementReferenceBy10(pointerToNumber);
//    
//    printf("The value of number is %i\n", number);
//    
//    return 0;
//}



// ------ MALLOC -----
//
//
//
//typedef struct {
//    float height;
//    float width;
//} Square;
//
//
//
//
//void incrementBy10(int input) {
//    input += 10; // does not work.
//}
//
//
//void incrementByReference10(int *input) {
//    *input = *input + 10;
//}
//
//Square *createSquare1(float h, float w) {
//    Square *mySquare = malloc(sizeof(Square));
//    
//    mySquare->height = h;
//    mySquare->width = w;
//    
//    return mySquare;
//}
//
//void createSquare2(Square **mySquare, float height, float width) {
//    *mySquare = malloc(sizeof(Square));
//    (*mySquare)->height = height;
//}
//
//
//
//int main(int argc, const char * argv[]) {
//    
//    Square *mySquare = createSquare1(10, 11);
//    
//    
//    void *myfunction = &createSquare2;
//    
//    
//    Square *mySquare2;
//    
//    createSquare2(&mySquare2, 10, 11);
//    
//    free(mySquare);
//    // create a square using single pointer style.
//    // create a square using double-pointer style.
//    return 0;
//}





// ------ Linked List -----


typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(int argc, const char * argv[]) {
    // create two nodes, append them.
    
    Node node1;
    node1.data = 10;
    
    
    Node node2;
    node2.data = 10000;
    
    node1.next = &node2;
    
    printf("node1's data is %i, node2's data is %i", node1.data, node1.next->data);
    
    
    // box up the create code into a function.
    return 0;
}