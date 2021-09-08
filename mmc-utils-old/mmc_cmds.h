int do_SMART_buffer_dump(int nargs, char **argv); //Show SMART raw buffer
int show_SMART_info(int nargs, char **argv); //Show SMART info
int show_Health_info(int nargs, char **argv); //Show SMART info
int CMD56_data_in(int fd, int argCmd56, char *block_data_buff); //Sub function
void dump_smart_data(char *block_data_buff); //Sub function
void is_transcend_card(char *block_data_buff, char function);
void parsing_SMART_info(char *block_data_buff);
void parsing_Health_info(char *block_data_buff);
char *grabString(char* data, int start_pos, int length);
char *grabHex(char* data, int start_pos, int length);
double hexArrToDec(char *data, int start_pos, int length);
