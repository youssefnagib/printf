#include "main.h"
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	char c;
	const char *s;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				c = (char)va_arg(args, int);
				putchar(c);
				count++;
				break;

				case 's':
				s = va_arg(args, const char *);
				while (*s != '\0')
				{
					putchar(*s);
					s++;
					count++;
				}
				break;

				case '%':
				putchar('%');
				count++;
				break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
