int ally(long long int n) 
{ 
    int result = 0; 
    for (int i = 1; i <= 9; i++) 
    { 
        stack<long long int> s; 
        if (i <= n) 
        { 
            s.push(i); 
            result++; 
        } 
        while (!s.empty()) 
        { 
            long long int tp = s.top(); 
            s.pop(); 
            for (long long int j = tp%10; j <= 9; j++) 
            { 

                long long int x = tp*10 + j; 
                if (x <= n) 
                { 
                    s.push(x); 
                    result++; 
                }
                else
                    break;
            } 
        } 
    } 
    return result; 
} 
