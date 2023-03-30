#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int ROW = 9 ;
    const int COLUMN = 10;
    int arr[ROW][COLUMN] =
    {
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {10, 10, 20, 20, 20, 20, 20, 20, 10, 10},
        {20, 20, 30, 30, 40, 40, 30, 30, 20, 20},
        {20, 30, 30, 40, 50, 50, 40, 30, 30, 20},
        {30, 40, 50, 50, 50, 50, 50, 50, 40, 30}
    };
    while(true)
    {
    cout << "Choose seat or price (s for seat and p for price)" << endl;
    string c;
    cin >> c;
    if(c == "s")
    {
        int row;
        int column;
        int seatNumber;
        cout << "Enter the seat number: ";
        cin >> seatNumber;
        if(seatNumber > 10)
        {
            row = seatNumber / 10;
            column = (seatNumber%10) - 1;
        }
        else
        {
            row = 0;
            column = seatNumber - 1;
        }
        arr[row][column] = 0;
        for(int i = 0; i < ROW; i++)
        {
            for(int j = 0; j < COLUMN; j++)
            {
                cout << setw(3) << arr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        int price;
        cout << "Enter the price: ";
        cin >> price;
        int row;
        int column;
        bool flag = false;
        for(int i = 0; i < ROW; i++)
        {
            for(int j = 0; j < COLUMN; j++)
            {
                if(arr[i][j]==price)
                {
                    row = i;
                    column = j;
                    flag = true;
                    break;
                }
            }
            if (flag){
                break;
            }
        }
        int place = (row*10) + (column+1);
        cout << "the available seat is " << place << endl;
    }
}
}