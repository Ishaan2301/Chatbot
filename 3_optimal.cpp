#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, a[10], b, c, d, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        c = *max_element(a, a + n);
        d = *min_element(a, a + n);

        replace(a, a + n, c, d);
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] / d;
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
}
