#include <iostream>
using namespace std;
void zadanie2(int*v, int*g) {
    int c;
    c = *v;
    *v = *g;
    *g = c;
}
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    return 1;
}
    
int main()
{  
    int vibor;
    cout << "vvedite nomer zadachi";
    cin >> vibor;
    int a;
    int sum = 0;
    switch (vibor) {
    case 1:
        cout << "vvedite 5 chisel v masiv";
        int mas[5];
        for (int i = 0; i < 5;i++)
        {
            cin >> a;
            mas[i] = a;
        }
        for (int i = 0; i < 5; i++)
        {
            sum += mas[i];
        }
        cout << sum;
        return 0;
    case 2:
        cout << "vvedite 2 chisla, kotorie hotite pomenyat mestami";
        int v;
        cin >> v;
        int g;
        cin >> g;
        zadanie2(&v, &g);
        cout << v << "  " << g;
        return 0;
    case 3:
        cout << "vvedite chislo, factorial kotorogo hotite naity";
        int n;
        cin >> n;
        int rezult = factorial(n);
        cout << "factorial: " << rezult;
        return 0;
    }

}


