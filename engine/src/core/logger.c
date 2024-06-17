#include "logger.h"

#include "asserts.h"

// TODO: temporary
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

b8 initialize_logging()
{
    // TODO: create log file.
    return TRUE;
}

void shutdown_logging()
{
    // TODO: cleanup logging/write queued entries.
}

KAPI void log_output(log_level level, const char* message, ...)
{
    const char* level_strings[6] = {
        "[FATAL]:", "[ERROR]:", " [WARN]:", " [INFO]:", "[DEBUG]:", "[TRACE]:",
    };

    char out_message[4096];
    memset(out_message, 0, sizeof(out_message));

    __builtin_va_list arg_ptr;
    va_start(arg_ptr, message);
    vsnprintf(out_message, sizeof(out_message), message, arg_ptr);
    va_end(arg_ptr);

    time_t rawtime = time(NULL);
    char* time_str = ctime(&rawtime);
    time_str[strlen(time_str) - 1] = '\0';

    // TODO: platform-specific output.
    printf("%s %s %s\n", time_str, level_strings[level], out_message);
}

void report_assertion_failure(const char* expression, const char* message,
                              const char* file, i32 line)
{
    log_output(LOG_LEVEL_FATAL,
               "Assertion Failure: %s, message: '%s', in file: %s, line: %d",
               expression, message, file, line);
}
