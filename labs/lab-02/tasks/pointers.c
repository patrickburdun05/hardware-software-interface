int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while((s1[i] == s2[i])&&(s1[i])&&(s2[i])) {
        i++;
    }
    if(!s1[i] || !s2[i]) {
        if(strlen(s1) > strlen(s2)) {
            return 1;
        } else if (strlen(s1) < strlen(s2)) {
            return -1;
        } else {
            return 0;
        }
    }
    if(s1[i] > s2[i]) {
        return 1;
    } else {
        return -1;
    }
}

void my_strcpy(char *d, char *s)
{ 
    int i = 0;
    while(s[i]) {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *) dest;
	const unsigned char *s = (const unsigned char *) src;

	if (s < d && d < s + n) {
		s += n;
		d += n;

		while (n--)
			*(--d) = *(--s);
	} else {
		while (n--)
			*d++ = *s++;
	}

	return dest;
}