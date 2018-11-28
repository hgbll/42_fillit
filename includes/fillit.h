#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 32

typedef	unsigned short 	t_short;

typedef struct			s_field
{
	t_short				tab[16];
	int					size;
}						t_field;

//DEBUG -------------------

void					print_field(t_field *field);
void 					print_tetro(t_short tetro);

//-------------------------

int						get_next_line(const int fd, char **line);

t_short					convert_tetro(char *s);
int						move_tetros_pilot(t_short *tetro);
int						move_tetros(t_short *tetro, t_field *field, int size);
int						fill_result(t_short *tetro, int pos, int size);

#endif
