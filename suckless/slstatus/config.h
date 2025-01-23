/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function        format                               argument */
    { run_command,     " %s | ",                           "amixer get Master | awk -F'[][]' '/%/ { print $2; exit }'" }, // Audio volume
	{ cpu_perc,        " %s%% | ",                         NULL }, // CPU usage
	{ ram_perc,        " %s%% | ",                         NULL }, // RAM usage
	{ datetime,        " %s",                              "%a, %d %b %Y  %H:%M:%S" }, // Date and time
};

