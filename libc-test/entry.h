#ifdef STATIC
int argv_main(int, char **);
int basename_main(int, char **);
int clocale_mbfuncs_main(int, char **);
int clock_gettime_main(int, char **);
int crypt_main(int, char **);
int dirname_main(int, char **);
int env_main(int, char **);
int fdopen_main(int, char **);
int fnmatch_main(int, char **);
int fscanf_main(int, char **);
int fwscanf_main(int, char **);
int iconv_open_main(int, char **);
int inet_pton_main(int, char **);
int mbc_main(int, char **);
int memstream_main(int, char **);
int pthread_cancel_points_main(int, char **);
int pthread_cancel_main(int, char **);
int pthread_cond_main(int, char **);
int pthread_tsd_main(int, char **);
int qsort_main(int, char **);
int random_main(int, char **);
int search_hsearch_main(int, char **);
int search_insque_main(int, char **);
int search_lsearch_main(int, char **);
int search_tsearch_main(int, char **);
int setjmp_main(int, char **);
int snprintf_main(int, char **);
int socket_main(int, char **);
int sscanf_main(int, char **);
int sscanf_long_main(int, char **);
int stat_main(int, char **);
int strftime_main(int, char **);
int string_main(int, char **);
int string_memcpy_main(int, char **);
int string_memmem_main(int, char **);
int string_memset_main(int, char **);
int string_strchr_main(int, char **);
int string_strcspn_main(int, char **);
int string_strstr_main(int, char **);
int strptime_main(int, char **);
int strtod_main(int, char **);
int strtod_simple_main(int, char **);
int strtof_main(int, char **);
int strtol_main(int, char **);
int strtold_main(int, char **);
int swprintf_main(int, char **);
int tgmath_main(int, char **);
int time_main(int, char **);
int tls_align_main(int, char **);
int udiv_main(int, char **);
int ungetc_main(int, char **);
int utime_main(int, char **);
int wcsstr_main(int, char **);
int wcstol_main(int, char **);
int pleval_main(int, char **);
int daemon_failure_main(int, char **);
int dn_expand_empty_main(int, char **);
int dn_expand_ptr_0_main(int, char **);
int fflush_exit_main(int, char **);
int fgets_eof_main(int, char **);
int fgetwc_buffering_main(int, char **);
int fpclassify_invalid_ld80_main(int, char **);
int ftello_unflushed_append_main(int, char **);
int getpwnam_r_crash_main(int, char **);
int getpwnam_r_errno_main(int, char **);
int iconv_roundtrips_main(int, char **);
int inet_ntop_v4mapped_main(int, char **);
int inet_pton_empty_last_field_main(int, char **);
int iswspace_null_main(int, char **);
int lrand48_signextend_main(int, char **);
int lseek_large_main(int, char **);
int malloc_0_main(int, char **);
int mbsrtowcs_overflow_main(int, char **);
int memmem_oob_read_main(int, char **);
int memmem_oob_main(int, char **);
int mkdtemp_failure_main(int, char **);
int mkstemp_failure_main(int, char **);
int printf_1e9_oob_main(int, char **);
int printf_fmt_g_round_main(int, char **);
int printf_fmt_g_zeros_main(int, char **);
int printf_fmt_n_main(int, char **);
int pthread_robust_detach_main(int, char **);
int pthread_cancel_sem_wait_main(int, char **);
int pthread_cond_smasher_main(int, char **);
int pthread_condattr_setclock_main(int, char **);
int pthread_exit_cancel_main(int, char **);
int pthread_once_deadlock_main(int, char **);
int pthread_rwlock_ebusy_main(int, char **);
int putenv_doublefree_main(int, char **);
int regex_backref_0_main(int, char **);
int regex_bracket_icase_main(int, char **);
int regex_ere_backref_main(int, char **);
int regex_escaped_high_byte_main(int, char **);
int regex_negated_range_main(int, char **);
int regexec_nosub_main(int, char **);
int rewind_clear_error_main(int, char **);
int rlimit_open_files_main(int, char **);
int scanf_bytes_consumed_main(int, char **);
int scanf_match_literal_eof_main(int, char **);
int scanf_nullbyte_char_main(int, char **);
int setvbuf_unget_main(int, char **);
int sigprocmask_internal_main(int, char **);
int sscanf_eof_main(int, char **);
int statvfs_main(int, char **);
int strverscmp_main(int, char **);
int syscall_sign_extend_main(int, char **);
int uselocale_0_main(int, char **);
int wcsncpy_read_overflow_main(int, char **);
int wcsstr_false_negative_main(int, char **);
struct {const char *name; int (*func)(int, char**);} table [] = {
	{"argv", argv_main},
	{"basename", basename_main},
	{"clocale_mbfuncs", clocale_mbfuncs_main},
	{"clock_gettime", clock_gettime_main},
	{"crypt", crypt_main},
	{"dirname", dirname_main},
	{"env", env_main},
	{"fdopen", fdopen_main},
	{"fnmatch", fnmatch_main},
	{"fscanf", fscanf_main},
	{"fwscanf", fwscanf_main},
	{"iconv_open", iconv_open_main},
	{"inet_pton", inet_pton_main},
	{"mbc", mbc_main},
	{"memstream", memstream_main},
	{"pthread_cancel_points", pthread_cancel_points_main},
	{"pthread_cancel", pthread_cancel_main},
	{"pthread_cond", pthread_cond_main},
	{"pthread_tsd", pthread_tsd_main},
	{"qsort", qsort_main},
	{"random", random_main},
	{"search_hsearch", search_hsearch_main},
	{"search_insque", search_insque_main},
	{"search_lsearch", search_lsearch_main},
	{"search_tsearch", search_tsearch_main},
	{"setjmp", setjmp_main},
	{"snprintf", snprintf_main},
	{"socket", socket_main},
	{"sscanf", sscanf_main},
	{"sscanf_long", sscanf_long_main},
	{"stat", stat_main},
	{"strftime", strftime_main},
	{"string", string_main},
	{"string_memcpy", string_memcpy_main},
	{"string_memmem", string_memmem_main},
	{"string_memset", string_memset_main},
	{"string_strchr", string_strchr_main},
	{"string_strcspn", string_strcspn_main},
	{"string_strstr", string_strstr_main},
	{"strptime", strptime_main},
	{"strtod", strtod_main},
	{"strtod_simple", strtod_simple_main},
	{"strtof", strtof_main},
	{"strtol", strtol_main},
	{"strtold", strtold_main},
	{"swprintf", swprintf_main},
	{"tgmath", tgmath_main},
	{"time", time_main},
	{"tls_align", tls_align_main},
	{"udiv", udiv_main},
	{"ungetc", ungetc_main},
	{"utime", utime_main},
	{"wcsstr", wcsstr_main},
	{"wcstol", wcstol_main},
	{"pleval", pleval_main},
	{"daemon_failure", daemon_failure_main},
	{"dn_expand_empty", dn_expand_empty_main},
	{"dn_expand_ptr_0", dn_expand_ptr_0_main},
	{"fflush_exit", fflush_exit_main},
	{"fgets_eof", fgets_eof_main},
	{"fgetwc_buffering", fgetwc_buffering_main},
	{"fpclassify_invalid_ld80", fpclassify_invalid_ld80_main},
	{"ftello_unflushed_append", ftello_unflushed_append_main},
	{"getpwnam_r_crash", getpwnam_r_crash_main},
	{"getpwnam_r_errno", getpwnam_r_errno_main},
	{"iconv_roundtrips", iconv_roundtrips_main},
	{"inet_ntop_v4mapped", inet_ntop_v4mapped_main},
	{"inet_pton_empty_last_field", inet_pton_empty_last_field_main},
	{"iswspace_null", iswspace_null_main},
	{"lrand48_signextend", lrand48_signextend_main},
	{"lseek_large", lseek_large_main},
	{"malloc_0", malloc_0_main},
	{"mbsrtowcs_overflow", mbsrtowcs_overflow_main},
	{"memmem_oob_read", memmem_oob_read_main},
	{"memmem_oob", memmem_oob_main},
	{"mkdtemp_failure", mkdtemp_failure_main},
	{"mkstemp_failure", mkstemp_failure_main},
	{"printf_1e9_oob", printf_1e9_oob_main},
	{"printf_fmt_g_round", printf_fmt_g_round_main},
	{"printf_fmt_g_zeros", printf_fmt_g_zeros_main},
	{"printf_fmt_n", printf_fmt_n_main},
	{"pthread_robust_detach", pthread_robust_detach_main},
	{"pthread_cancel_sem_wait", pthread_cancel_sem_wait_main},
	{"pthread_cond_smasher", pthread_cond_smasher_main},
	{"pthread_condattr_setclock", pthread_condattr_setclock_main},
	{"pthread_exit_cancel", pthread_exit_cancel_main},
	{"pthread_once_deadlock", pthread_once_deadlock_main},
	{"pthread_rwlock_ebusy", pthread_rwlock_ebusy_main},
	{"putenv_doublefree", putenv_doublefree_main},
	{"regex_backref_0", regex_backref_0_main},
	{"regex_bracket_icase", regex_bracket_icase_main},
	{"regex_ere_backref", regex_ere_backref_main},
	{"regex_escaped_high_byte", regex_escaped_high_byte_main},
	{"regex_negated_range", regex_negated_range_main},
	{"regexec_nosub", regexec_nosub_main},
	{"rewind_clear_error", rewind_clear_error_main},
	{"rlimit_open_files", rlimit_open_files_main},
	{"scanf_bytes_consumed", scanf_bytes_consumed_main},
	{"scanf_match_literal_eof", scanf_match_literal_eof_main},
	{"scanf_nullbyte_char", scanf_nullbyte_char_main},
	{"setvbuf_unget", setvbuf_unget_main},
	{"sigprocmask_internal", sigprocmask_internal_main},
	{"sscanf_eof", sscanf_eof_main},
	{"statvfs", statvfs_main},
	{"strverscmp", strverscmp_main},
	{"syscall_sign_extend", syscall_sign_extend_main},
	{"uselocale_0", uselocale_0_main},
	{"wcsncpy_read_overflow", wcsncpy_read_overflow_main},
	{"wcsstr_false_negative", wcsstr_false_negative_main},
	{0, 0}
};
#endif

#ifdef DYNAMIC
int argv_main(int, char **);
int basename_main(int, char **);
int clocale_mbfuncs_main(int, char **);
int clock_gettime_main(int, char **);
int crypt_main(int, char **);
int dirname_main(int, char **);
int dlopen_main(int, char **);
int env_main(int, char **);
int fdopen_main(int, char **);
int fnmatch_main(int, char **);
int fscanf_main(int, char **);
int fwscanf_main(int, char **);
int iconv_open_main(int, char **);
int inet_pton_main(int, char **);
int mbc_main(int, char **);
int memstream_main(int, char **);
int pthread_cancel_points_main(int, char **);
int pthread_cancel_main(int, char **);
int pthread_cond_main(int, char **);
int pthread_tsd_main(int, char **);
int qsort_main(int, char **);
int random_main(int, char **);
int search_hsearch_main(int, char **);
int search_insque_main(int, char **);
int search_lsearch_main(int, char **);
int search_tsearch_main(int, char **);
int sem_init_main(int, char **);
int setjmp_main(int, char **);
int snprintf_main(int, char **);
int socket_main(int, char **);
int sscanf_main(int, char **);
int sscanf_long_main(int, char **);
int stat_main(int, char **);
int strftime_main(int, char **);
int string_main(int, char **);
int string_memcpy_main(int, char **);
int string_memmem_main(int, char **);
int string_memset_main(int, char **);
int string_strchr_main(int, char **);
int string_strcspn_main(int, char **);
int string_strstr_main(int, char **);
int strptime_main(int, char **);
int strtod_main(int, char **);
int strtod_simple_main(int, char **);
int strtof_main(int, char **);
int strtol_main(int, char **);
int strtold_main(int, char **);
int swprintf_main(int, char **);
int tgmath_main(int, char **);
int time_main(int, char **);
int tls_init_main(int, char **);
int tls_local_exec_main(int, char **);
int udiv_main(int, char **);
int ungetc_main(int, char **);
int utime_main(int, char **);
int wcsstr_main(int, char **);
int wcstol_main(int, char **);
int daemon_failure_main(int, char **);
int dn_expand_empty_main(int, char **);
int dn_expand_ptr_0_main(int, char **);
int fflush_exit_main(int, char **);
int fgets_eof_main(int, char **);
int fgetwc_buffering_main(int, char **);
int fpclassify_invalid_ld80_main(int, char **);
int ftello_unflushed_append_main(int, char **);
int getpwnam_r_crash_main(int, char **);
int getpwnam_r_errno_main(int, char **);
int iconv_roundtrips_main(int, char **);
int inet_ntop_v4mapped_main(int, char **);
int inet_pton_empty_last_field_main(int, char **);
int iswspace_null_main(int, char **);
int lrand48_signextend_main(int, char **);
int lseek_large_main(int, char **);
int malloc_0_main(int, char **);
int mbsrtowcs_overflow_main(int, char **);
int memmem_oob_read_main(int, char **);
int memmem_oob_main(int, char **);
int mkdtemp_failure_main(int, char **);
int mkstemp_failure_main(int, char **);
int printf_1e9_oob_main(int, char **);
int printf_fmt_g_round_main(int, char **);
int printf_fmt_g_zeros_main(int, char **);
int printf_fmt_n_main(int, char **);
int pthread_robust_detach_main(int, char **);
int pthread_cond_smasher_main(int, char **);
int pthread_condattr_setclock_main(int, char **);
int pthread_exit_cancel_main(int, char **);
int pthread_once_deadlock_main(int, char **);
int pthread_rwlock_ebusy_main(int, char **);
int putenv_doublefree_main(int, char **);
int regex_backref_0_main(int, char **);
int regex_bracket_icase_main(int, char **);
int regex_ere_backref_main(int, char **);
int regex_escaped_high_byte_main(int, char **);
int regex_negated_range_main(int, char **);
int regexec_nosub_main(int, char **);
int rewind_clear_error_main(int, char **);
int rlimit_open_files_main(int, char **);
int scanf_bytes_consumed_main(int, char **);
int scanf_match_literal_eof_main(int, char **);
int scanf_nullbyte_char_main(int, char **);
int setvbuf_unget_main(int, char **);
int sigprocmask_internal_main(int, char **);
int sscanf_eof_main(int, char **);
int statvfs_main(int, char **);
int strverscmp_main(int, char **);
int syscall_sign_extend_main(int, char **);
int tls_get_new_dtv_main(int, char **);
int uselocale_0_main(int, char **);
int wcsncpy_read_overflow_main(int, char **);
int wcsstr_false_negative_main(int, char **);
struct {const char *name; int (*func)(int, char**);} table [] = {
	{"argv", argv_main},
	{"basename", basename_main},
	{"clocale_mbfuncs", clocale_mbfuncs_main},
	{"clock_gettime", clock_gettime_main},
	{"crypt", crypt_main},
	{"dirname", dirname_main},
	{"dlopen", dlopen_main},
	{"env", env_main},
	{"fdopen", fdopen_main},
	{"fnmatch", fnmatch_main},
	{"fscanf", fscanf_main},
	{"fwscanf", fwscanf_main},
	{"iconv_open", iconv_open_main},
	{"inet_pton", inet_pton_main},
	{"mbc", mbc_main},
	{"memstream", memstream_main},
	{"pthread_cancel_points", pthread_cancel_points_main},
	{"pthread_cancel", pthread_cancel_main},
	{"pthread_cond", pthread_cond_main},
	{"pthread_tsd", pthread_tsd_main},
	{"qsort", qsort_main},
	{"random", random_main},
	{"search_hsearch", search_hsearch_main},
	{"search_insque", search_insque_main},
	{"search_lsearch", search_lsearch_main},
	{"search_tsearch", search_tsearch_main},
	{"sem_init", sem_init_main},
	{"setjmp", setjmp_main},
	{"snprintf", snprintf_main},
	{"socket", socket_main},
	{"sscanf", sscanf_main},
	{"sscanf_long", sscanf_long_main},
	{"stat", stat_main},
	{"strftime", strftime_main},
	{"string", string_main},
	{"string_memcpy", string_memcpy_main},
	{"string_memmem", string_memmem_main},
	{"string_memset", string_memset_main},
	{"string_strchr", string_strchr_main},
	{"string_strcspn", string_strcspn_main},
	{"string_strstr", string_strstr_main},
	{"strptime", strptime_main},
	{"strtod", strtod_main},
	{"strtod_simple", strtod_simple_main},
	{"strtof", strtof_main},
	{"strtol", strtol_main},
	{"strtold", strtold_main},
	{"swprintf", swprintf_main},
	{"tgmath", tgmath_main},
	{"time", time_main},
	{"tls_init", tls_init_main},
	{"tls_local_exec", tls_local_exec_main},
	{"udiv", udiv_main},
	{"ungetc", ungetc_main},
	{"utime", utime_main},
	{"wcsstr", wcsstr_main},
	{"wcstol", wcstol_main},
	{"daemon_failure", daemon_failure_main},
	{"dn_expand_empty", dn_expand_empty_main},
	{"dn_expand_ptr_0", dn_expand_ptr_0_main},
	{"fflush_exit", fflush_exit_main},
	{"fgets_eof", fgets_eof_main},
	{"fgetwc_buffering", fgetwc_buffering_main},
	{"fpclassify_invalid_ld80", fpclassify_invalid_ld80_main},
	{"ftello_unflushed_append", ftello_unflushed_append_main},
	{"getpwnam_r_crash", getpwnam_r_crash_main},
	{"getpwnam_r_errno", getpwnam_r_errno_main},
	{"iconv_roundtrips", iconv_roundtrips_main},
	{"inet_ntop_v4mapped", inet_ntop_v4mapped_main},
	{"inet_pton_empty_last_field", inet_pton_empty_last_field_main},
	{"iswspace_null", iswspace_null_main},
	{"lrand48_signextend", lrand48_signextend_main},
	{"lseek_large", lseek_large_main},
	{"malloc_0", malloc_0_main},
	{"mbsrtowcs_overflow", mbsrtowcs_overflow_main},
	{"memmem_oob_read", memmem_oob_read_main},
	{"memmem_oob", memmem_oob_main},
	{"mkdtemp_failure", mkdtemp_failure_main},
	{"mkstemp_failure", mkstemp_failure_main},
	{"printf_1e9_oob", printf_1e9_oob_main},
	{"printf_fmt_g_round", printf_fmt_g_round_main},
	{"printf_fmt_g_zeros", printf_fmt_g_zeros_main},
	{"printf_fmt_n", printf_fmt_n_main},
	{"pthread_robust_detach", pthread_robust_detach_main},
	{"pthread_cond_smasher", pthread_cond_smasher_main},
	{"pthread_condattr_setclock", pthread_condattr_setclock_main},
	{"pthread_exit_cancel", pthread_exit_cancel_main},
	{"pthread_once_deadlock", pthread_once_deadlock_main},
	{"pthread_rwlock_ebusy", pthread_rwlock_ebusy_main},
	{"putenv_doublefree", putenv_doublefree_main},
	{"regex_backref_0", regex_backref_0_main},
	{"regex_bracket_icase", regex_bracket_icase_main},
	{"regex_ere_backref", regex_ere_backref_main},
	{"regex_escaped_high_byte", regex_escaped_high_byte_main},
	{"regex_negated_range", regex_negated_range_main},
	{"regexec_nosub", regexec_nosub_main},
	{"rewind_clear_error", rewind_clear_error_main},
	{"rlimit_open_files", rlimit_open_files_main},
	{"scanf_bytes_consumed", scanf_bytes_consumed_main},
	{"scanf_match_literal_eof", scanf_match_literal_eof_main},
	{"scanf_nullbyte_char", scanf_nullbyte_char_main},
	{"setvbuf_unget", setvbuf_unget_main},
	{"sigprocmask_internal", sigprocmask_internal_main},
	{"sscanf_eof", sscanf_eof_main},
	{"statvfs", statvfs_main},
	{"strverscmp", strverscmp_main},
	{"syscall_sign_extend", syscall_sign_extend_main},
	{"tls_get_new_dtv", tls_get_new_dtv_main},
	{"uselocale_0", uselocale_0_main},
	{"wcsncpy_read_overflow", wcsncpy_read_overflow_main},
	{"wcsstr_false_negative", wcsstr_false_negative_main},
	{0, 0}
};
#endif

