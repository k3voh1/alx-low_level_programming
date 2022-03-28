unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j;
        unsigned int accp = 0;

        for (i = 0; *(s + i) != '\0'; i++)
        {
                for (j = 0; *(accept + j) != '\0'; j++)
                {
                        if (*(s + i) == *(accept + j))
                        {
                                accp++;
                                break;
                        }
                        if (*(s + i) == '\0' && *(s + i) != *(accept + j))
                        {
                                return (accp);
                        }
                }
        }
        return (accp);
}
