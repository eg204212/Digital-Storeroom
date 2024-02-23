#include "Header.h"

int main()
{
    Product_List Pl;
    cout << "////////////////////////////" << endl;
    cout << "///Name of the story room///" << endl;
    cout << "////////////////////////////\n" << endl;
    int Select = 1;
    int key=NULL;
    string Name;
    int qty = NULL;
    while (Select!=0) {
        cout << "\nSelect a number which corresponding to what you want to do\n" << endl;
        cout << "1 - Print all the products with keys" << endl;
        cout << "2 - Print all the products with key and qty." << endl;
        cout << "3 - Search qty. of a product." << endl;
        cout << "4 - Edit the name of the product." << endl;
        cout << "5 - Add new product" << endl;
        cout << "6 - Delete a product" << endl;
        cout << "7 - Product in" << endl;
        cout << "8 - Product out" << endl;
        cout << "9 - Number of produts" << endl;
        cout << "10 - Clear the screen" << endl;
        cout << "0 - Exit\n" << endl;
        cin >> Select;
        switch (Select)
        {
        case 0:
            break;
        case 1:
            Pl.Print_List();
            break;
        case 2:
            Pl.Print_List_With_Qty();
            break;
        case 3:
            cout << "Please enter the KEY of the product : " ;
            cin >> key;
            Pl.Search_Product_Qty(key);
            break;
        case 4:
            cout << "Please enter the KEY of the product : ";
            cin >> key;
            cout << "Please enter the New name :";
            cin >> Name;
            Pl.Edit_Product_Name(key, Name);
            break;
        case 5:
            cout << "Please enter the ptoduct name : " ;
            cin >> Name;
            cout << "Please enter the qty. : ";
            cin >> qty;
            Pl.Add_Product(Name, qty);
            break;
        case 6:
            cout << "Please enter the KEY of the product : ";
            cin >> key;
            Pl.Delete_Product(key);
            break;
        case 7:
            cout << "Please enter the KEY of the product : ";
            cin >> key;
            cout << "Please enter the qty. : ";
            cin >> qty;
            Pl.Product_In(key, qty);
            break;
        case 8:
            cout << "Please enter the KEY of the product : ";
            cin >> key;
            cout << "Please enter the qty. : ";
            cin >> qty;
            Pl.Product_Out(key, qty);
            break;
        case 9:
            Pl.NumberOfProducts();
            break;
        case 10:
            system("cls");
            cout << "////////////////////////////" << endl;
            cout << "///Name of the story room///" << endl;
            cout << "////////////////////////////\n" << endl;
        default:
            cout << "something wrong please try again" << endl;
            break;
        }

    }
    


}

