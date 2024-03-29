#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

# include <unistd.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char    *get_next_line(int fd);
char    *extract_line(char *buf, size_t buffer_size);
int     check_empty_buf(char *buf, size_t buffer_size);
size_t  get_line_len(char *buf, size_t buffer_size, size_t index_start);
size_t  get_start_line(char *buf, size_t buffer_size);
char    *sub_line_in_buf(char *s, size_t start, size_t len);
size_t   ft_strlen(const char *s);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strchr(const char *s, int c);
char	*ft_strjoin_free(char *const s1, char *const s2);

#endif 
