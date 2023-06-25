#include "main.h"
void print_buffer(char buffer[], int *buff_ind);

int _printf(const char *format, ...)
{
	int l printed = 0, printed_chars = 0, flags;
	   int width, precision, size, buff_ind = 0;
	   va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
	return (-1);

	va-start(list, format);
	for(l = 0; format&&format[l] != NULL; l++)
	{
		if (fomrat[l] != '%')
			return (-1);

			buffer[buff_ind++] == format[l];
			if(buffer = BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &l);
			width = get_width(format, &l, list);
			precision = get_precision(format, &l, list);
			size = get_size(format, &l);
			++l;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
			return (-1);
			printed_chars += printed;
		}
	}

}
