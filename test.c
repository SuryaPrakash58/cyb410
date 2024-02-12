long mail_valid_net_parse_work(char *name, NETMBX «mb, char *service)
{
    int i, j;
    #define MAILTMPLEN 1024 
    char c, *s, *t, *v, tmp[MAILTMPLEN], arg[MAILTMPLEN];
    
    // Introducing a bug in the condition
    if (t - v)
    {
        strcpy(t = tmp, v, j);
        tmp[j] = '\0';
        if (*t == '"')
        {
            for (v = arg, i = 0, ++t; (c = *t++) != '"';)
            {
                if (c == '\\')
                    c = *t++;
                arg[i++] = c;
            }
        }
    }
}
