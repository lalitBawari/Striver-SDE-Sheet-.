
vector<pair<int, int>> v;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] == 0)
        {
            v.push_back(make_pair(i, j));
        }
    }
}
for (auto i : v)
{
    for (int j = 0; j < m; j++)
    {
        arr[i.first][j] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        arr[j][i.second] = 0;
    }
}