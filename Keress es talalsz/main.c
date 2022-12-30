#include <stdio.h>


/**
 *
 * @param array - amiben keresunk
 * @param n - az elemek szama
 * @param key - amit keresunk
 * @return - pozicio, ahol megtalaltuk, vagy -1, ha nincs benne
 */
int linearSearch(int array[], int n, int key);

/**
 *
 * @param array - amiben keresunk
 * @param key - amit keresunk
 * @param start - kezdopont
 * @param end - vegpont
 * @return - a pozicio ahol megtalaltuk, vagy -1, ha nincs benne
 */
int binarySearchIterative(int array[], int key, int start, int end);

/**
 *
 * @param array - amiben keresunk
 * @param key - amit keresunk
 * @param start - kezdopont
 * @param end - vegpont
 * @return - a pozicio ahol megtalaltuk, vagy -1, ha nincs benne
 */
int binarySearchRecursive(int array[], int key, int start, int end);


int main() {
    ///Linear search and binary search

    //Elements
    int array[] = {2, 5, 1, 6, 8, 3, 4};
    int n = sizeof(array)/sizeof(array[0]);
    int numberToFind = 6;
    int result = linearSearch(array, n, numberToFind);
    if(result == -1) {
        printf("Nincs benne a keresett elem a szamsorozatban\n");
    }
    else {
        printf("Benne van: %i. pozicion\n", result);
    }


    //binaris kereses -> rendezett tomb!!
    int array2[] = {2, 5, 6, 8, 10, 13, 14};
    int n2 = sizeof(array2)/sizeof(array2[0]);
    int numberToFind2 = 13;
    result = binarySearchRecursive(array2, numberToFind2, 0, n2-1);
    if(result == -1) {
        printf("Nincs benne a keresett elem a szamsorozatban\n");
    }
    else {
        printf("Benne van: %i. pozicion\n", result);
    }

    return 0;
}

int linearSearch(int array[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if(array[i] == key)
        {
            //megtalaltuk az i. pozicion
            return i;
        }
    }
    return -1;
}

//iterative version
int binarySearchIterative(int array[], int key, int start, int end) {
    //addig keresunk, amig az eleje a vege elott van, vagy pont ugyanott
    while(start <= end) {
        int mid = (start + end)/2;
        if(array[mid] == key) {
            return mid;
        }
        if(array[mid] < key) {
            //jobbra
            start = mid + 1;
        }
        else {
            //balra
            end = mid - 1;
        }
    }
    return -1;
}

//recursive version
int binarySearchRecursive(int array[], int key, int start, int end) {
    if(start <= end) {
        int mid = (start + end)/2;
        if(array[mid] == key) {
            return mid;
        }
        if(array[mid] < key) {
            //jobbra
            return binarySearchRecursive(array, key, mid + 1, end);
        }
        //balra
        return binarySearchRecursive(array, key, start, mid - 1);
    }
    return -1;
}

