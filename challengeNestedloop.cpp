#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input_items{};
    cout << "enter the no. of items to be inserted: ";
    cin >> input_items;

    vector<int> list{};

    char choice;

    do
    {
        cout << "\nenter P or p for display list" << endl;
        cout << "enter A or a for add no. in list" << endl;
        cout << "enter M or m for mean list" << endl;
        cout << "enter S or s for smallest no. in list" << endl;
        cout << "enter L or l for largest no. in list" << endl;
        cout << "enter Q or q for quitting list\n"
             << endl;
        cout << "enter your choice: ";

        cin >> choice;

        switch (choice)
        {

        case 'P':
        case 'p':
            if (list.size() == 0)
            {
                cout << " [] LIst is empty " << endl;
            }
            else
            {

                cout << "[";
                for (int val : list)
                {
                    cout << val << " ";
                }
                cout << "]" << endl;
            }
            break;

        case 'A':
        case 'a':
        {
            int num_to_add{};
            cout << "enter value to add: ";
            cin >> num_to_add;
            list.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        break;

        case 'M':
        case 'm':
        {
            if (list.size() == 0)
            {
                cout << " [] LIst is empty " << endl;
            }
            else
            {
                int total{};
                for (int val : list)
                {
                    total += val;
                }
                cout << "the mean is " << static_cast<double>(total) / list.size() << endl;
            }
        }
        break;

        case 'S':
        case 's':
        {
            if (list.size() == 0)
            {
                cout << " [] LIst is empty " << endl;
            }
            else
            {
                int smallest_no = list.at(0);
                for (int num : list)
                    if (num < smallest_no)
                    {
                        smallest_no = num;
                    }
                cout << "Smallest no. is " << smallest_no << endl;
            }
        }
        break;

        case 'L':
        case 'l':
        {
            if (list.size() == 0)
            {
                cout << " [] LIst is empty " << endl;
            }
            else
            {
                int largest_no = list.at(0);
                for (int num : list)
                    if (num > largest_no)
                    {
                        largest_no = num;
                    }
                cout << "largest no. is " << largest_no << endl;
            }
        }
        break;

        case 'Q':
        case 'q':
            cout << "Goodbye" << endl;
            break;

        default:
            cout << "wrong input " << endl;
            break;
        }
    } while (choice != 'Q' && choice != 'q');
    return 0;
}
