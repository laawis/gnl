#include "get_next_line_bonus.h"
#include <stdlib.h>

char *sub_line_in_buf(char *s, size_t index_start, size_t len) 
{
  char *str;
  size_t i;

  if (!s)
    return (NULL);
  str = malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (i < len) 
  {
    str[i] = s[index_start + i];
    s[index_start + i] = '\0';
    i++;
  }
  str[i] = '\0';
  return (str);
}

size_t ft_strlen(const char *s) 
{
  size_t i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}

char *ft_strjoin(char *s1, char *s2) 
{
    char *str;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (0);
    str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL); 
    i = 0;
    while (s1[i]) 
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i++] = s2[j++];
        str[i] = '\0';
    }
  return (str);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*new_s;

	new_s = ft_stroin(s1, s2);

	free(s1);
	free(s2);
	return (new_s);
}

char *ft_strchr(const char *s, int c) 
{
  char *str;

  if (!s)
    return (NULL);
  str = (char *)s;
  while (*str != c) 
  {
    if (*str == '\0')
      return (NULL);
    str++;
  }
  return (str);
}
