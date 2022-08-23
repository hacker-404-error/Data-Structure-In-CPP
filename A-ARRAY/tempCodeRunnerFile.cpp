    int min2 = a[0];
    for(int i = 0;i<n;i++)
    {
        if(a[i] == min)
        {
            continue;
        }
        if(min2>a[i])
        {
            min2 = a[i]; 
        }
    }