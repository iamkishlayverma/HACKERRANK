#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100005];
        scanf("%s", s);
        int l = 0;
        int r = strlen(s) - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        if (l >= r)
        {
            printf("-1\n");
            continue;
        }
        int l1 = l;
        int r1 = r;
        l++;
        int f = 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                f = 0;
                break;
            }
        }
        printf("%d\n", f ? l1 : r1 );
    }
    return 0;
}
