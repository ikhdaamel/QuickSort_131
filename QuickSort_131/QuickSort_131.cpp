#include <iostream>
using namespace std;


int arr[20];                //array of integres to hold values
int cmp_cout = 0;           //number of comparasion
int mov_cout = 0;           //number of data movements
int n

void input() {
    while (true)
    {
        cout << "masukan panjang elemnet array : ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n===================" << endl;
    cout << "\nEnter array element" << endl;
    cout << "\n===================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

// swaps the element st index x with the element at index y
void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}





{
    std::cout << "Hello World!\n";
}
