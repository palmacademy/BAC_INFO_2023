#include <iostream>

using namespace std;

int binarySearchIterative(int array[100], int start, int end, int x){
    while(start <= end)
    {
        int midPoz = (start + end) / 2;
        if(array[midPoz] == x) return midPoz;
        else if(array[midPoz] < x) start = midPoz+1;
        else end = midPoz - 1;
    }
    return -1;
}
int binarySearchRecursive(int array[100], int start, int end, int x){
    if(start <= end)
    {
        int midPoz = (start + end) / 2;
        if(array[midPoz] == x) return midPoz;
        else if(array[midPoz] < x) return binarySearchRecursive(array, midPoz+1, end, x);
        else return binarySearchRecursive(array, start, midPoz-1, x);
    }
    return -1;
}
int main() {
    int n = 7, array[] = {5, 5, 5, 6, 7, 8, 9};
    cout << "A szamsorozat elemei:";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    int x;
    cout << "Adj meg egy egesz szamot:";
    cin >> x;
    int result = binarySearchIterative(array, 0, n-1, x);
    if(result == -1) {
        cout << "Nincs benne a keresett ertek." << endl;
    }
    else
    {
        cout << "Benne van, a " << result << " pozicion." << endl;
    }
    result = binarySearchRecursive(array, 0, n-1, x);
    if(result == -1) {
        cout << "Nincs benne a keresett ertek." << endl;
    }
    else
    {
        cout << "Benne van, a " << result << " pozicion." << endl;
        int i = result, counter = 0;
        while (array[i] == x && i >= 0)
        {
            counter++;
            i--;
        }
        cout << "Elso elofordulas: " << i + 1 << endl;
        i = result;
        while (array[i] == x && i < n)
        {
            counter++;
            i++;
        }
        cout << "Utolso elofordulas: " << i - 1 << endl;
        counter--;
        cout << "Ennyiszer fordul elo:" << counter << endl;
    }

    return 0;
}
