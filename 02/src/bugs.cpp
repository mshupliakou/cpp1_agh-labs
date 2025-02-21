#include <iostream>
#include "bugs.h"
    ///@brief the function that returns nothing and handles the memory leak bug
    // [BUG]
    void memoryLeak(){
        int* space = (int*)malloc(10*sizeof(int)); // [BUG] there is no free(space); after the using of malloc(); the memory is not freed
        std::cout<< "the function memoryLeak() calls a memory leak"<< std::endl;
    //
        int* corretedMemoryLeak = (int *)malloc(5*sizeof(int)); //the right way to allocate and free memory
        free(corretedMemoryLeak);
    }

    // [BUG]
    ///@brief the function that returns nothing and has got a double free bug
    void doubleFree(){ 
        /*std::cout<< "the function doubleFree calls a memory using bug"<< std::endl;
        int* spaceFreed = (int*)malloc(10*sizeof(int)); // [BUG] free(); after the using of malloc(); is used twice
        free(spaceFreed);
        free(spaceFreed);*/
       
    //
        int* corretedLeak = (int *)malloc(5*sizeof(int)); //the right way to allocate and free memory 
        free(corretedLeak);
    }
    // [BUG]
    ///@brief the function that returns nothing and has got a memory using bug
    void useAfterFree(){
        std::cout<< "the function useAfterFree() calls a memory using bug"<< std::endl;
        int* spaceFreed3 = new int(15);
        delete spaceFreed3;
    
       std::cout<< *spaceFreed3<< std::endl; //[BUG] the memory is used after being freed
    //
        int* corretedLeak3 = (int *)malloc(5*sizeof(int)); //the right way to allocate and free memory 
        free(corretedLeak3);
    }

    // [BUG]
    ///@brief the function that returns nothing and has got an unitiialized variable k
    void uninitializedVariable(){
       /* std::cout<< "the function uninitializedVariable() has got an unitialized variable"<< std::endl;
        int k;
        std::cout<< k<< std::endl; // [BUG] the faulty attempt to use an unitializied varriable k*/
        //
        int b=5;
        std::cout<< b<< std::endl; // [BUG] the right way to use the variable
    }

    // [BUG]
    ///@brief the function that returns nothing and has got an array using bug
    void outOfBounds(){
        int array[10];
        std::cout<< "the function outOfBounds() has got an array which is out of bounds"<< std::endl;
       
        //array[15]=4; //[BUG] trying to use an array out of its bounds
        //
        array[9]=4;
        std::cout<<array[9]<< std::endl; //the righdelete(ptr4);t way of using the array
    }

    // [BUG]
    ///@brief the function that returns nothing and calls the segmentation fault
    void segmentationFault(){
        /*std::cout<< "the function segmentationFault() calls the segmentation fault"<< std::endl;
        int* tmp = NULL;
        *tmp = 5; //[BUG] trying to use the pointer which is attached to NULL
        std::cout<<*tmp<< std::endl;*/

        //
        int* tmp = NULL;
        tmp = new int(4);
        *tmp = 5; // the corrected version
        std::cout<<*tmp<< std::endl;

    }

    ///@brief the function that returns nothing and handles the bug of an infinite loop 
    // [BUG]
    void infiniteLoop(){
       /* while(true){//[BUG] there is no condition to end the loop
            std::cout<< "the function infiniteLoop() cal delete(ptr1);ls the bug an infinite loop"<< std::endl;
        }
*/
        //
        int x =10;
        while(x>4){ //the right way to define a loop end condition
            x--;
            std::cout<< "the loop is not infinite"<< std::endl;
        }
    }
    ///@brief the function that returns nothing and handles the aliasing problem
    // [BUG]
    void aliasingProblem(){
        std::cout<< "the function aliasingPProblem() calls the aliasing problem"<< std::endl;
        int *ptr1 = new int(1);
        *ptr1=40;
        int *ptr2 = ptr1;
        std::cout<<*ptr1<< std::endl;
        std::cout<<*ptr2<< std::endl;

        delete(ptr1);
        std::cout<<*ptr2<< std::endl; //[BUG] trying to use the space in memory which is already freed

        // the correct version:
        int *ptr3 = new int(1);
        *ptr3=40;
        int *ptr4 = ptr1;
        std::cout<<*ptr3<< std::endl;
        std::cout<<*ptr4<< std::endl;
        delete(ptr3); // with no trying of using the *ptr4
    }