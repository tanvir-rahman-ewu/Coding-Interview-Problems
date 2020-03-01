#include<bits/stdc++.h>
using namespace std;

bool check_is_bst(int arr[], int index, int n) /// bfs to check bst or not
{
    queue<int> q;

    q.push(index);

    while(!q.empty())
    {
        int x = q.front();

        q.pop();

        if( (x * 2 + 1) < n && (x * 2 + 2) < n)
        {
            if(arr[x * 2 + 1] < arr[x] && arr[x * 2 + 2] > arr[x])
            {
                q.push(x * 2 + 1);
                q.push(x * 2 + 2);
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, i;

    printf("Enter Number of Nodes: ");

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    cout << check_is_bst(arr, 0, n) << endl;
}
