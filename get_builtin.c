#include "main.h"

/**
 *get_builtin - this is builtin that pais the command in the argument
 *@cmd: this is command
 *Return: this is function pointer of the builtin command
 */
int(*get_builtin(char *cmd))(data_shell *)
{
	builtin_t builtin[] = {
		{ "env", _env
		},
		{ "exit", exit_shell
		},
		{ "setenv", _setenv
		},
		{ "unsetenv", _unsetenv
		},
		{ "cd", cd_shell
		},
		{ "help", get_help
		},
		{
			NULL, NULL
		}
	};

	int i;

	for (i = 0; builtin[i].name; i++)
	{
		if (_strcmp(builtin[i].name, cmd) == 0)
			break;
	}

	return (builtin[i].f);
}
