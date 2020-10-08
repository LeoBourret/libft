#ifndef __LIBFT_H__
# define __LIBFT_H__

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

void		ft_bzero(void*, size_t n);


int			ft_memcmp(const void*, const void*, size_t);
void		*ft_memchr(const void*, int, size_t);
void		*ft_memset(void*, int, size_t);
void		*ft_memcpy(void*, const void*, size_t);
void		*ft_memccpy(void*, const void*, int, size_t);
void		*ft_memmove(void*, const void*, size_t );
void		*ft_calloc(size_t, size_t);


void		ft_putchar(char);
void		ft_putchar_fd(char, int);
void		ft_putstr(char*);
void		ft_putstr_fd(char*, int);
void		ft_putendl_fd(char*, int);
void		ft_putnbr(int);
void		ft_putnbr_fd(int, int);

int			ft_isalpha(int);
int			ft_isdigit(int);
int			ft_isalnum(int);
int			ft_isascii(int);


size_t		ft_strlcat(char*, char const*, size_t);
size_t		ft_strlcpy(char*, char const*, size_t);
size_t		ft_strlen(char const*);
char		*ft_strdup(const char*);
char		*ft_strchr(char const*, int);
char		*ft_strrchr(char const*, int);
char		*ft_strcpy(char*, char const*);
char		*ft_strtrim(char const*, char const*);
char		*ft_strjoin(char const*, char const*);
char		*ft_strmapi(char const*, char (*f)(unsigned int, char));
char		*ft_strnstr(char const*, char const*, size_t);
int			ft_strncmp(char const*, char const*, size_t);

char		*ft_substr(char const *, unsigned int, size_t);

char		**ft_split(char const*, char);

int			ft_atoi(const char*);
char		*ft_itoa(int);

int			ft_toupper(int);
int			ft_tolower(int);


#endif
