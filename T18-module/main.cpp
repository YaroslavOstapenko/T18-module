#include <iostream>
int main()
{
    setlocale(0, "");
    
    int menu;

    do
    {
        cout << "1 - Добавить автомобиль\n";
        cout << "2 - Удалить автомобиль\n";
        cout << "3 - Вывести всех\n";
        cout << "4 - Редактировать автомобиль\n";
        cout << "5 - Поиск автомобиля\n";
        cout << "0 - EXIT\n";
        cin >> menu;
        cin.ignore();
        switch (menu)
        {
        case 1:ITStep.addItem(); break;
        case 2:ITStep.delItem(); break;
        case 3:ITStep.printItems(); break;
        case 4:ITStep.editItem(); break;
        case 5:ITStep.findItem(); break;
        case 6:ITStep.saveTofile(); break;
        case 7:ITStep.readFromfile(); break;

        default:
            cout << "Ошибка выбора\n";
            break;
        }
    } while (menu!=0);

}
