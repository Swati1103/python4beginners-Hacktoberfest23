#include <bits/stdc++.h>
using namespace std;
 

void print_patt(int row, int curr_row, 

                int count)
{

    // If row is less than 0, it 

    // returns return.

    if (row <= 0)

        return;
 

    // The loop maintains the number 

    // of rows.

    for (int i = 1; i <= curr_row; i++) 

    {

        // To print the numbers

        cout << count << " ";
 

        // To keep increasing the count 

        // of numbers

        count += 1;

    }

   

    // To proceed to next line.

    cout << "\n";
 

    // To increasing the current row

    curr_row += 1;
 

    // Calling the function recursively.

    print_patt(row - 1, 

               curr_row, count);
}
 
// Driver Code

int main()
{

    int curr_row = 1;

    int count = 1;

    int row = 5;

    print_patt(row, curr_row, count);

    return 0;
}
