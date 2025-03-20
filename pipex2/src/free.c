#include "pipex.h"

void free_pipex(t_pipex *px)
{
    int i = 0;
    if (px->cmd_args)
    {
        while (px->cmd_args[i])
            free(px->cmd_args[i++]);
        free(px->cmd_args);
    }
    if (px->cmd)
        free(px->cmd);
}
