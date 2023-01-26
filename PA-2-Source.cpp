// Daniel Forbes
// Donald Moor
// Michael Zuppardo


#include <iostream>
#include <cstdlib> // for generating random numbers and finding array size
#include <fstream> // for operating on csv and txt files
#include <chrono> // for measuring time intervals


std::ofstream fout;
std::chrono::steady_clock::time_point t1; // start time
std::chrono::steady_clock::time_point t2; // end time
int Array_1[1000];
int Array_2[2000];
int Array_3[3000];
int Array_4[4000];
int Array_5[5000];
int Array_6[6000];
int Array_7[7000];
int Array_8[8000];
int Array_9[9000];

int* merge(int*, int*); // combines two int arrays of size 1 in ascending order
int* mergeSort(int*, int*); // combines and sorts two unsorted int arrays of equal size in ascending order
int tDelta(); // returns the time difference between t1 and t2
void populateArray(int*); // populates input int array with random numbers ranged -16383 to 16384
void printArray(int*);


int main()
{
    int test[5];
    populateArray(test);
    printArray(test);
    std::cout << sizeof(test) / sizeof(int) << "\n";
    std::cout << test[0] << " " << test[1] << " " << test[2] << " " << test[3] << " " << test[4] << "\n";
}


/********************* methods *********************/

// combines two int arrays of equal size in ascending order
int* merge(int* arr1, int* arr2)
{
    int test[1] = { -1 };
    return test;
}

// combines and sorts two unsorted int arrays of equal size in ascending order
int* mergeSort(int* arr1, int* arr2)
{
    int test[1] = { -1 };
    return test;
}


void populateArray(int* arr)
{
    int size = 5;
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() - (RAND_MAX / 2);
    }
}

void printArray(int* arr)
{
    int size = sizeof(*arr) / sizeof(int);
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Element " << i << ": " << arr[i] << "\n";
    }
}