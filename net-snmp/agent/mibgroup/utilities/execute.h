#ifndef _MIBGROUP_EXECUTE_H
#define _MIBGROUP_EXECUTE_H

int run_shell_command(char *command, char *input,
                      char *output,  int  *out_len);
int run_exec_command( char *command, char *input,
                      char *output,  int  *out_len);

#endif /* _MIBGROUP_EXECUTE_H */
