#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file and writes text into it.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len = 0;

	if (filename == NULL)
		return (-1);

	/* حساب طول النص إذا لم يكن فارغاً */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* فتح الملف: إنشاؤه إذا لم يوجد، مسحه إذا وجد، وبصلاحيات 0600 */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
