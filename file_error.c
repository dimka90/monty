#include "monty.h"

void file_access_denied(char *filename)
{
dprintf(globe->standard_err, "Error: Can't open file <%s>\n", filename);
exit(EXIT_FAILURE);
}
