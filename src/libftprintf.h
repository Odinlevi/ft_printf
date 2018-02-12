#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <limits.h>
# include <stdarg.h>
# define HEXMAJ ("0123456789ABCDEF")
# define HEXMIN ("0123456789abcdef")
# define OXMAJ	("0X000000000000")
# define OXMIN	("0x000000000000")
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
typedef struct		s_tree
{
	void			*content;
	size_t			content_size;
	struct s_tree	*father;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;
t_tree				*ft_treenew(void *content, size_t content_size);
void				ft_nodeaddleft(t_tree *new, t_tree **tree);
void				ft_nodeaddright(t_tree *new, t_tree **tree);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_tolower(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putchar_fd(int c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *s1, const char *s2, size_t size);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
void				*ft_realloc(void *ptr, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t				ft_strlen(const char *s);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_toupper(int c);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstpushback(t_list **alst, t_list *new);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstlast(t_list *begin_list);
size_t				ft_lstsize(t_list *list);
void				*ft_realloc(void *ptr, size_t size);
void				*ft_calloc(size_t nmemb, size_t size);
size_t				ft_nbrlen(int nbr);
void				ft_filler(char c, size_t len);
typedef	struct	s_flags
{
	char		optmin;
	char		optplus;
	char		optzero;
	char		optsharp;
	char		optspace;
	char		optdot;
	char		formf;
	char		formt;
	int			min_size;
	int			prec;
	int			size;
	char		type;
}				t_flags;
int				check_exstr(const char *str);
char			*ft_grep_first_number(const char *str, int *i, char *result);
int				type_cmp(const char c);
void			fill_it(t_flags *flags, int size);
void			print_plus(t_flags *flags, int *i, int c, int *size);
int				ft_wstrlen(wchar_t *str);
int				ft_wnstrlen(wchar_t *str, int n);
int				ft_putwnstr(wchar_t *str, int n);
char			ft_wcharlen(wchar_t c);
int				ft_putwstr(wchar_t *str);
void			ft_linttoct(unsigned long long int nb, char *str);
int				ft_longnbrlen(long int nb);
void			ft_putlongnbr(long int nb);
void			check_flg(const char *str, t_flags *flags, int *i);
void			check_width(const char *str, t_flags *flags, int *i);
void			check_prec(const char *str, t_flags *flags, int *i);
void			check_form(const char *str, t_flags *flags, int *i);
void			check_type(const char *str, t_flags *flags, int *i);
int				found_flags(const char *str, va_list list);
void			ft_arg_sort(const char *str, va_list list, int *i);
void			init_flags(const char *str, t_flags *flags, int *i);
void			ft_type_sort(const char *str, t_flags *flags, \
														va_list list, int *i);
void			arg_is_mod(t_flags *flags, int *i);
void			arg_is_string(t_flags *flags, va_list list, int *i);
void			print_string(t_flags *flags, va_list list, int *i);
void			arg_is_char(t_flags *flags, va_list list, int *i);
void			print_char(t_flags *flags, va_list list, int *i);
void			arg_is_int(t_flags *flags, va_list list, int *i);
void			print_int(t_flags *flags, va_list list, int *i);
int				print_int_fill(t_flags *flags, int *i, int c);
void			print_int_opt(t_flags *flags, int c, int size, int *i);
void			print_int_rev(t_flags *flags, int *i, int size, int c);
void			print_no_min(t_flags *flags, int *i, int c);
void			print_plus(t_flags *flags, int *i, int c, int *size);
void			fill_it(t_flags *flags, int size);
void			cast_int(int *c, va_list list, t_flags *flags);
void			ft_putlongnbr(long int nb);
int				ft_longnbrlen(long int nb);
void			print_longint_opt(t_flags *flags, long int l, int size, int *i);
int				print_lint_fill(t_flags *flags, int *i, long int l);
void			print_longi(t_flags *flags, va_list list, int *i);
void			arg_is_longi(t_flags *flags, va_list list, int *i);

void			ft_linttohexa(unsigned long int nb, char *str, char *hex);
void			arg_is_ptr(t_flags *flags, va_list list, int *i);
void			print_ptr(t_flags *flags, va_list list, int *i);
void			print_rev_ptr(t_flags *flags, va_list list, int *i);
void			cast_hexa(unsigned long long int *c, \
												va_list list, t_flags *flags);
void			ft_inttohexa(unsigned long long int nb, char *str, char *hex);
void			arg_is_x(t_flags *flags, va_list list, int *i);
void			print_x(t_flags *flags, va_list list, int *i);
void			arg_is_octal(t_flags *flags, va_list list, int *i);
void			print_octal(t_flags *flags, va_list list, int *i);
void			ft_linttoct(unsigned long long int nb, char *str);
void			cast_octal(unsigned long long int *c, \
												va_list list, t_flags *flags);
int				max_ul(t_flags *flags);
int				max_l(t_flags *flags);
int				max_uol(t_flags *flags);
int				max_value(t_flags *flags, unsigned long long nb);
void			ft_putlnbr(unsigned long long int nbr);
int				ft_lnbrlen(unsigned long long int nbr);
void			print_unsigned(t_flags *flags, va_list list, int *i);
void			cast_unsigned(unsigned long long int *c, \
												va_list list, t_flags *flags);
void			arg_is_unsigned(t_flags *flags, va_list list, int *i);
void			arg_is_wchar(t_flags *flags, va_list list, int *i);
void			print_wchar(va_list list, int *i);
char			ft_putwchar(wchar_t c);
void			ft_putnchar(unsigned char *f, int size);
void			init_wchar(unsigned char *f, wchar_t c, int mode);
int				ft_putwstr(wchar_t *str);
void			print_wstr(t_flags *flags, va_list list, int *i);
void			arg_is_wstr(t_flags *flags, va_list list, int *i);
void			init_wchar(unsigned char *f, wchar_t c, int mode);
void			ft_putnchar(unsigned char *f, int size);
char			ft_print_w(unsigned char *f, unsigned int e, wchar_t c);
char			ft_putwchar(wchar_t c);
int				ft_printf(const char *format, ...);
#endif