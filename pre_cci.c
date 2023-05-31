# 1 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c"
# 1 "F:\\LR21\\include/lrun.h" 1
 
 












 











# 103 "F:\\LR21\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "F:\\LR21\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "F:\\LR21\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "F:\\LR21\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "F:\\LR21\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "F:\\LR21\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "F:\\LR21\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "F:\\LR21\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "F:\\LR21\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "F:\\LR21\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "F:\\LR21\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "F:\\LR21\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "F:\\LR21\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "F:\\LR21\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "F:\\LR21\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "F:\\LR21\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "F:\\LR21\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "F:\\LR21\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "F:\\LR21\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "F:\\LR21\\include/lrun.h"


# 1075 "F:\\LR21\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

# 1 "F:\\LR21\\include/SharedParameter.h" 1



 
 
 
 
# 100 "F:\\LR21\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

# 1 "globals.h" 1



 
 

# 1 "F:\\LR21\\include/web_api.h" 1







# 1 "F:\\LR21\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "F:\\LR21\\include/as_web.h"


# 802 "F:\\LR21\\include/as_web.h"



























# 840 "F:\\LR21\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "F:\\LR21\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "F:\\LR21\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2




 
 




# 3 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

# 1 "Action.c" 1
Action()
{
	lr_start_transaction("00_Login");
	

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_max_html_param_len("1347");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("NCDBC", 
		"URL=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://192.168.0.16:8008/ssdp/device-desc.xml", "Referer=", "ENDITEM", 
		"Url=1158209246/desktopweb/jslib/tparty/widgets/imageUpload/imageUpload.js", "ENDITEM", 
		"Url=1158209246/desktopweb/jslib/konyframework.js", "ENDITEM", 
		"Url=1158209246/desktopweb/images/en_US/loader_loop.gif", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/app.js", "ENDITEM", 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Light.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Regular.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/FontAwesome5Pro-Solid.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/SourceSansPro-Regular.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/resources/strings/en_US.js?ver=2.71.28", "ENDITEM", 
		"Url=1158209246/desktopweb/SourceSansPro-SemiBold.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/Lato-Regular.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/Lato-Light.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/Lato-Medium.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/konydesktop.css", "ENDITEM", 
		"Url=1158209246/desktopweb/Montserrat-Bold.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/Montserrat-Medium.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/Lato-Semibold.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/kvmodules.js", "ENDITEM", 
		"Url=1158209246/desktopweb/resources/strings/es_ES.js?ver=2.71.28", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/CordovaEvents.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AccountsModule/frmAccountsLanding.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/Coliving.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AccountsModule/frmAccountsLandingController.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmInitController.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/ColivingModules.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmInit.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmLoginController.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AuthModule/frmLogin.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/Deeplinking.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/AccessibilityUtil.js", "ENDITEM", 
		"Url=1158209246/desktopweb/appjs/CredicoopLink.js", "ENDITEM", 
		"Url=1158209246/desktopweb/images/imgload.gif", "ENDITEM", 
		"Url=1158209246/desktopweb/images/cvv_tutorial.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/logo_bccl.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/loader_loop.gif", "ENDITEM", 
		"Url=1158209246/desktopweb/images/error.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/image_huella.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/modo_icon.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/chrome_128x128.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/firefox_128x128.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/qrpayment.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/modo_logo.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/tutorial_cm.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/credicoop_logo.png", "ENDITEM", 
		"Url=1158209246/desktopweb/Montserrat-Regular.ttf", "ENDITEM", 
		"Url=1158209246/desktopweb/images/favicon.ico?ver=1158209246", "ENDITEM", 
		"Url=1158209246/desktopweb/images/img_transparent.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/dotimage.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/exclamation.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/dot_3.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/add_icon.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/dots.png", "ENDITEM", 
		"Url=1158209246/desktopweb/images/modo2x.png", "ENDITEM", 
		"Url=1158209246/desktopweb/Lato-Black.ttf", "ENDITEM", 
		"LAST");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=113", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//05bO2g9msxM2pCgYIARAAGAUSNwF-L9IrP6HVURP5PDUH2Konj6o1GPcRuqxBHEoTzpboz325PHZkAokvXvkjyIYs91xbjlRdhzs&scope=https://www.googleapis.com/auth/chromesync", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("unistream-scope", 
		"PRD_L9FZ");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");

	web_url("list", 
		"URL=https://cdn.unistream.io/option/list?scopeId=PRD_L9FZ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"eth_call\",\"params\":[{\"data\":\"0x76671808\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_header("unistream-filter-set", 
		"{\"client\":{\"version\":\"5.2.6\"},\"geo\":{\"cityName\":\"Tandil\",\"country\":\"AR\",\"latitude\":-37.3154,\"longitude\":-59.1579,\"zip\":\"7000\"}}");

	web_add_header("unistream-filter-signature", 
		"$client.version:5.2.6$geo.country:AR$state:undefined");

	web_add_header("unistream-scope", 
		"PRD_L9FZ");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");

	web_url("filtered", 
		"URL=https://cdn.unistream.io/interaction/list/filtered?filterSet=%7B%22client%22%3A%7B%22version%22%3A%225.2.6%22%7D%2C%22geo%22%3A%7B%22cityName%22%3A%22Tandil%22%2C%22country%22%3A%22AR%22%2C%22latitude%22%3A-37.3154%2C%22longitude%22%3A-59.1579%2C%22zip%22%3A%227000%22%7D%7D&scopeId=PRD_L9FZ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_2", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":2,\"method\":\"eth_call\",\"params\":[{\"data\":\"0x135022c20000000000000000000000000000000000000000000000000000000000000013\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_3", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":3,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000058df12150e765cfa08d3d7027ffefe3ebc6a977d\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"EXTRARES", 
		"Url=https://easylist-downloads.adblockplus.org/exceptionrules.txt?addonName=adblockchrome&addonVersion=5.6.0&application=chrome&applicationVersion=113.0.0.0&platform=chromium&platformVersion=113.0.0.0&lastVersion=202305101540&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202302", "Referer=", "ENDITEM", 
		"LAST");

	web_add_auto_header("Origin", 
		"chrome-extension://cmedhionkhpnakcndndgjdbohmhepckk");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("property-id", 
		"UNI-H84HA");

	web_add_header("unistream-uuid", 
		"183c30ca-0423-498a-a803-fb9008dfb0c4");
 
# 259 "Action.c"
	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_4", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":4,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000003e7802ac3428d29d942abe0d967481b36f84023f\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_5", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":5,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000070eaf5a4b5c1e4585283976eef0c7ef0beb7676e\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_6", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":6,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000c1be81db2ec118bb8ca6d0775bbf440a0a1a8312\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_7", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":7,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000006651a20286e600af76d985a4d155db8c31f2c1aa\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_8", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":9,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000564cca5c23a40a9b322d567e5458a1edf3f1457f\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_9", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":8,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb35810000000000000000000000003609c974fe0251fee429da927676163016ab12aa\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_add_cookie("timezoneOffset=-10800,0; DOMAIN=steamcommunity.com");

	web_add_cookie("_ga=GA1.2.2057018461.1676048696; DOMAIN=steamcommunity.com");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("steamcommunity.com", 
		"URL=https://steamcommunity.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"chrome-extension://fhbohimaelbohpjbbldcngcnapndodjp");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_10", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":10,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb358100000000000000000000000065f8296b232afefd295ff4fd854b67f26de15e33\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_custom_request("b8cdb0e4cff24599a286bf8e87ff1c96_11", 
		"URL=https://mainnet.infura.io/v3/b8cdb0e4cff24599a286bf8e87ff1c96", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"jsonrpc\":\"2.0\",\"id\":11,\"method\":\"eth_call\",\"params\":[{\"data\":\"0xbafb3581000000000000000000000000f4cbfad568777ddd64b860b6886241c6b25d2491\",\"to\":\"0x638646503746d5456209e33a2ff5e3226d698bea\"},\"latest\"]}", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Kony-App-Key",
		"a46931ab1216413f9addf1533f7d9f57");

	web_add_auto_header("X-Kony-App-Secret",
		"b5fec71b1638b6f6d3099713505994c0");

	web_add_auto_header("X-Kony-App-Version",
		"2.45");

	web_add_header("X-Kony-Platform-Type", 
		"web");
	 
	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	
	web_add_header("X-Kony-SDK-Type", 
		"js");

	web_add_header("X-Kony-SDK-Version", 
		"9.2.15");

 
	web_reg_save_param_regexp(
		"ParamName=KonyAuth",
		"RegExp=\"claims_token\":\\{\"value\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("login", 
		"Action=https://ncdtesting.bancocredicoop.coop/authService/100000002/login", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("X-Kony-Integrity", 
		"EOOBTCUHNL22;A3B6F9DE9F5C102A4AE444255457A5EBEEA41C28CEAB0ABBE40FAC188962E6E1");

	web_add_header("X-HTTP-Method-Override", 
		"GET");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=reporting_params_header_allowed\"(.*?),",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_custom_request("appconfig", 
		"URL=https://ncdtesting.bancocredicoop.coop/authService/100000002/appconfig", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	(web_remove_auto_header("X-Kony-App-Key", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-App-Secret", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-App-Version", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Kony-Integrity", 
		"XYRBWVSGVPYMJ;38DBFD6DE19D33CB5576BDD926B621F108D85E45AAB55AB750F5B868935E3D86");

	web_custom_request("IST", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/IST", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"Body=konyreportingparams="
		"%7B%22plat%22%3A%22web%22%2C%22chnl%22%3A%22desktop%22%2C%22did%22%3A%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22%2C%22aid%22%3A%22NCDBC%22%2C%22aver%22%3A%222.71.28%22%2C%22aname%22%3A%22NCDBC%22%2C%22mfaid%22%3A%224237d582-f662-4d83-b6f0-bd96c524dce1%22%2C%22mfbaseid%22%3A%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22%2C%22mfaname%22%3A%22DbpLocalServices%22%2C%22atype%22%3A%22spa%22%2C%22os%22%3A%22113%22%2C%22stype%22%3A%22b2c%22%2C%22dm%22%3A%22%22%2C%22ua%22%3A%22Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F113.0.0.0%20Safari%2F537.36%22%2C%22sessiontype%22%3A%22I%22%2C%22kuid%22%3A%22%22%2C%22launchDates%22%3A%5B%5B%221683817330410-2ee8-7a96-e470%22%2C%222023-05-11%2015%3A02%3A10%22%2C%22I%22%5D%5D%2C%22svcid%22%3A%22RegisterKonySession%22%7D", 
		"LAST");

	web_add_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization",
		"{KonyAuth}");

	web_add_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	
	web_custom_request("Application", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/Application", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22AppVersion%22%3A%222.71.28%22%2C%22OSType%22%3A%22thinclient%22%2C%22OSversion%22%3A%22113%22%7D", 
		"EXTRARES", 
		"Url=https://www.google.com/recaptcha/api.js", "Referer=https://ncdtesting.bancocredicoop.coop/", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_url("properties", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/configurations/client/properties", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_custom_request("IdentityManagement", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/IdentityManagement/IdentityManagement", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_submit_data("getImages", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/getImages", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=groups", "Value=1,2", "ENDITEM", 
		"EXTRARES", 
		"Url=https://www.gstatic.com/recaptcha/releases/wqcyhEwminqmAoT8QO_BkXCr/recaptcha__en.js", "Referer=https://ncdtesting.bancocredicoop.coop/", "ENDITEM", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getPasswordRulesAndPolicy", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/IdentityManagement/operations/IdentityManagement/getPasswordRulesAndPolicy", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_submit_data("BcclConfiguration", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/BcclConfiguration", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_custom_request("DynamicContentDbp", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/DynamicContentDbp", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_custom_request("getCustomerTermsAndConditionsPreLoginBccl", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/TermsAndConditions/getCustomerTermsAndConditionsPreLoginBccl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22languageCode%22%3A%22es-ES%22%2C%22termsAndConditionsCode%22%3A%22TyC_Aceptar_Cookies%22%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
		"%7B%22os%22:%22113%22,%22dm%22:%22%22,%22did%22:%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22,%22ua%22:%22Mozilla/5.0%20(Windows%20NT%2010.0;%20Win64;%20x64)%20AppleWebKit/537.36%20(KHTML,%20like%20Gecko)%20Chrome/113.0.0.0%20Safari/537.36%22,%22aid%22:%22NCDBC%22,%22aname%22:%22NCDBC%22,%22chnl%22:%22desktop%22,%22plat%22:%22web%22,%22aver%22:%222.71.28%22,%22atype%22:%22spa%22,%22stype%22:%22b2c%22,%22kuid%22:%22%22,%22mfaid%22:%224237d582-f662-4d83-b6f0-bd96c524dce1%22,%22mfbaseid%22"
		":%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22,%22mfaname%22:%22DbpLocalServices%22,%22sdkversion%22:%229.2.15%22,%22sdktype%22:%22js%22,%22fid%22:%22frmLogin%22,%22sessiontype%22:%22I%22,%22rsid%22:%221683817330410-2ee8-7a96-e470%22,%22svcid%22:%22metadata_Parametros%22%7D");

	web_custom_request("Parametros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_custom_request("getDynamicContent", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DynamicContentDbp/getDynamicContent", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22form%22%3A%22LOGIN%22%2C%22section%22%3A%22RECUPERAR_CLAVE_LEGACY%22%7D", 
		"LAST");

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getParametros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%7D", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTEzLjAuNTY3Mi45MxLiAQl5bGadcmziMRIFDRQmZZwSBQ2bsXNGEgUNZVYclBIFDUH_J-8SBQ0HVasKEgUNx2BkVBIFDWMzAaASBQ1JVgSGEgUNO0UckxIFDf4S1qwSBQ35j2FnEgUNN-svFxIFDQP6eAsSBQ2FwgTdEgUNaAzBaBIFDZaxQMESBQ2HFGAKEgUN_BEW2BIFDc5P-UISBQ145XjfEgUNyHNszhIFDfvFtP0SBQ2IrxSdEgUNlqTvrxIFDUw2Qn8SBQ0tpGvLEgUNDurtaRIFDboMlGYSBQ1jBcf5EgUNh-2FQBIFDYo3OMU=?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Kony-API-Version", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-Authorization", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-DeviceId", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Kony-App-Key",
		"a46931ab1216413f9addf1533f7d9f57");

	web_add_auto_header("X-Kony-App-Secret",
		"b5fec71b1638b6f6d3099713505994c0");

	web_add_auto_header("X-Kony-App-Version",
		"2.45");

	web_add_header("X-Kony-Platform-Type", 
		"web");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_header("X-Kony-SDK-Type", 
		"js");

	web_add_header("X-Kony-SDK-Version", 
		"9.2.15");

	lr_think_time(16);

 
	web_reg_save_param_regexp(
		"ParamName=KonyAuth2",
		"RegExp=\"}}},\"claims_token\":\\{\"value\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("login_2",
		"Action=https://ncdtesting.bancocredicoop.coop/authService/100000002/login?provider=DbxUserLogin",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/",
		"Snapshot=t187.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=UserName", "Value={Username}", "ENDITEM",
		"Name=Password", "Value={Password}", "ENDITEM",
		"Name=DNI", "Value={DNI}", "ENDITEM",
		"Name=loginOptions", "Value={\"isOfflineEnabled\":false,\"enable_refresh_login\"{CorrelationParameter}", "ENDITEM",
		"Name=httpRequestOptions", "Value={\"timeoutIntervalForRequest\":10}", "ENDITEM",
		"Name=provider", "Value=DbxUserLogin", "ENDITEM",
		"LAST");

	web_add_header("X-HTTP-Method-Override", 
		"GET");

	web_add_header("X-Kony-Integrity", 
		"STPVWBOUFMM;C1615D012DE74610997C7CB41F0FF6A9027108D366629A463F3A791D10B0D829");

	web_custom_request("appconfig_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/authService/100000002/appconfig", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	(web_remove_auto_header("X-Kony-App-Key", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-App-Secret", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-App-Version", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization",
		"{KonyAuth2}");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_custom_request("getOperadores", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getOperadores", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTEzLjAuNTY3Mi45MxIbCg0IBRAGGAEiAzAwMTABEOPNEBoCGAqB2rShEhsKDQgBEAYYASIDMDAxMAEQg6MMGgIYCgNh9V4SGwoNCAcQBhgBIgMwMDEwARD06gwaAhgKnFtjLBIZCg0IARAGGAEiAzAwMTADEBQaAhgKXSik7hIaCg0IARAIGAEiAzAwMTAEEPAyGgIYCu-tpFgSGgoNCA8QBhgBIgMwMDEwARD5dBoCGAqbrQQgEhkKDQgKEAgYASIDMDAxMAEQBxoCGApGceYiEhkKDQgJEAYYASIDMDAxMAEQIBoCGAonuqI9EhoKDQgIEAYYASIDMDAxMAEQ2RIaAhgKhx3coBIbCg0IDRAGGAEiAzAwMTABEKroARoCGAo6j-_AEhsKDQgDEAYYASIDMDAxMAEQ0pgMGgIYCjtBRlMSGwoNCA4QBhgBIgMwMDEwARDKgAcaAhgKnIfZ4BIaCg0IEB"
		"AGGAEiAzAwMTABEJIZGgIYCiCme-EaKggBCAMIBQgGCAcICAgJCAoIDQgOCA8IEBABEAgaBgoEV8CisCABIAMgBA==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("SegundoFactor", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/SegundoFactor", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

 
 
# 814 "Action.c"
	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_submit_data("BcclConfiguration_2", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/BcclConfiguration", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("User", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/User", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Kony-API-Version", 
		"1.0");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_submit_data("getImages_2", 
		"Action=https://ncdtesting.bancocredicoop.coop/services/bcclJavaServices/getImages", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=groups", "Value=7,2,4,5", "ENDITEM", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_custom_request("ServicesPay", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/ServicesPay", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("SegundoFactor_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/SegundoFactor", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("Operations", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Operations", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("Investments", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Investments", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id",
		"{CorrelationParameter}");

	web_custom_request("getTarjetasCredito", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Cards/getTarjetasCredito", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("ClaveMovil", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/ClaveMovil", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id",
		"{CorrelationParameter}");

	web_custom_request("getTarjetasCredito_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Cards/getTarjetasCredito", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getPasswordLockoutSettings", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getPasswordLockoutSettings", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getUnreadNotificationCount", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Notifications/getUnreadNotificationCount", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("Notifications", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/objects/Notifications", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_header("bx-trace-id",
		"{CorrelationParameter}");

	web_custom_request("getAccountsListBccl", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Accounts/getAccountsListBccl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("Parametros_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("Parametros_3", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Parametros", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getUserProfileImage", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getUserProfileImage", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		"LAST");

	web_custom_request("getUserProfileImage_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/DbxUser/getUserProfileImage", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%7D", 
		"LAST");

	(web_remove_auto_header("X-Kony-API-Version", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-Authorization", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-DeviceId", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-ReportingParams", "ImplicitGen=Yes", "LAST"));

	web_custom_request("CMS", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/CMS", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t210.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=konyreportingparams=%7B%22os%22%3A%22113%22%2C%22dm%22%3A%22%22%2C%22did%22%3A%2224BD73D7-0BC5-483C-81D6-4D1458B11A78%22%2C%22ua%22%3A%22Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F113.0.0.0%20Safari%2F537.36%22%2C%22aid%22%3A%22NCDBC%22%2C%22aname%22%3A%22NCDBC%22%2C%22chnl%22%3A%22desktop%22%2C%22plat%22%3A%22web%22%2C%22aver%22%3A%222.71.28%22%2C%22atype%22%3A%22spa%22%2C%22stype%22%3A%22b2c%22%2C%22kuid%22%3A%22%22%2C%22mfaid%22%3A%224237d582-f662-4d83-b6f0-bd96c524dce1%22%2C%22mfbaseid%22%3A%22c66355b8-eb0b-4ff6-886b-029b47992a3a%22%2C%22mfaname%22%3A%22DbpLocalServices%22%2C%22sdkversion%22%3A%229.2.15%22%2C%22sdktype%22%3A%22js%22%2C%22fid%22%3A%22frmAccou"
		"ntsLanding%22%2C%22sessiontype%22%3A%22I%22%2C%22events%22%3A%5B%5D%2C%22reportData%22%3A%5B%7B%22ts%22%3A%222023-05-11%2015%3A02%3A35%22%2C%22fid%22%3A%22frmAccountsLanding%22%2C%22metrics%22%3A%7B%22Accessed%20Modules%22%3A%22Accounts%22%2C%22Ages%22%3A%2255-70%22%7D%2C%22rsid%22%3A%221683817330410-2ee8-7a96-e470%22%7D%5D%2C%22rsid%22%3A%221683817330410-2ee8-7a96-e470%22%2C%22svcid%22%3A%22CaptureKonyCustomMetrics%22%7D", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTEzLjAuNTY3Mi45MxKjAQnjQ7_OnhNm3hIFDeK7_WwSBQ3TzD7UEgUN4N8hFRIFDcMZA_kSBQ1ewd6dEgUNhf3JlRIFDS_Vn-4SBQ19cJR8EgUNn8QhcRIFDUngi2ASBQ2nr4nyEgUN9tBLuxIFDRW07skSBQ3Y3jRyEgUN5ngDthIFDbVBB0USBQ1uWZWtEgUNdoHXWBIFDf0YNjkSBQ3wf70IEgUNGeJ7VhIFDdtZht0=?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("X-Kony-API-Version", 
		"2.0");

	web_add_auto_header("X-Kony-Authorization",
		"{KonyAuth2}");

	web_add_auto_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_auto_header("X-Kony-DeviceId", 
		"24BD73D7-0BC5-483C-81D6-4D1458B11A78");

	web_add_auto_header("bx-trace-id",
		"{CorrelationParameter}");

	web_custom_request("getFiltros", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Operations/getFiltros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t211.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getSegundoFactor", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/SegundoFactor/getSegundoFactor", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getCelularSeguro", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/ClaveMovil/getCelularSeguro", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getParametros_2", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%2C%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_custom_request("getParametros_3", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Parametros/getParametros", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22nombreParametro%22%3A%22PERMITIR_SESION_MULTIPLE_CANAL%22%2C%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Kony-CustomParams", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("bx-trace-id", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("Limits", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/metadata/v1/RBObjects/Limits", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_add_auto_header("Origin", 
		"https://ncdtesting.bancocredicoop.coop");

	web_add_auto_header("X-Kony-CustomParams", 
		"%7B%22idOperador%22:%225606%22,%22idAdherente%22:%22105752%22,%22geolocalizacion%22:%22%22,%22canal%22:%22BPI%22,%22appVersion%22:%222.71.28%22%7D");

	web_add_auto_header("bx-trace-id",
		"{CorrelationParameter}");

	web_custom_request("consultaLimitesDisponibles", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Limits/consultaLimitesDisponibles", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idAdherente%22%3A%22105752%22%2C%22idTipoOperacion%22%3A%226%22%2C%22segundoFactorVigente%22%3A%22BYPASS%22%2C%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getInvestments", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/Investments/getInvestments", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");

	web_add_auto_header("X-Kony-ReportingParams", 
	               "{KonyParam}");
	web_custom_request("getProximoVencimiento", 
		"URL=https://ncdtesting.bancocredicoop.coop/services/data/v1/RBObjects/operations/ServicesPay/getProximoVencimiento", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ncdtesting.bancocredicoop.coop/apps/NCDBC/", 
		"Snapshot=t219.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=jsondata=%7B%22idOperador%22%3A%225606%22%7D", 
		"LAST");
	
	lr_end_transaction("00_Login", 2);
	
	
	


	return 0;
}
# 5 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\ivan\\documents\\vugen\\scripts\\loginncd\\\\combined_LoginNCD.c" 2

