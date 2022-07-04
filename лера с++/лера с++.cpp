// лера с++.cpp 
#include <iostream>
#include <cstdlib>
int input = 0;
int main()
{//#1
    
    std::cout << "Task_1" << "\n";
    const int X = 10;
    std::cout << "enter: ";
    std::cin >> input;

    std::cout << "constanta: " << X << "\n";
    std::cout << X << "-" << input << "=" << X - input << "\n";
    std::cout << X << "+" << input << "=" << X + input << "\n";
//#2
    double xx, yy;
    std::cout << "Task_2" << "\n";
    std::cout << "x = ";
    std::cin >> xx;
    std::cout << "y = ";
    std::cin >> yy;
    if ((xx - 1.0) * (xx - 1.0) + yy * yy <= 1.0)
        std::cout << "Point A falls into the area !" << std::endl;
    else
        std::cout << "Point A does not fall into the area!" << std::endl;
    
    
//3
    int kolvo,q;
    double suma = 0;
    int counter = 0;

    std::cout << "Task_3" << "\n";
    std::cout << "enter the kolvo of students = ";
    std::cin >> kolvo;
    for (q = 0; q < kolvo; q++) {
        std::cin >> input;
        suma = suma + input;
        counter++;

    }
    std::cout << "value: "<<suma / counter << "\n";
    //4
    std::cout << "Task_4" << "\n";
    const int nmax = 100;
    int i, j, n, m, arr[nmax][nmax], c, k, l, max, min;
    setlocale(0, "");
    srand(time(NULL));
    std::cout << "enter kolvo of string :";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "enter kolvo of kolumn: ";
    std::cin >> m;
    std::cout << std::endl;
    std::cout << "first massive :" << std::endl;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            arr[i][j] = rand() % 50;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (i = 0; i < n; ++i)
    {
        c = 0;
        max = 0;
        min = 0;
        for (j = 0; j < m; ++j)
        {
            if (arr[i][min] > arr[i][j])
            {
                min = j;
            }
            else if (arr[i][max] < arr[i][j])
            {
                max = j;
            }
        }
        c = arr[i][min];
        arr[i][min] = arr[i][max];
        arr[i][max] = c;
    }
    std::cout << std::endl;
    std::cout << "the last massiv: " << std::endl;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    //5
    std::cout << "Task_5" << "\n";
    system("calc");   
}


