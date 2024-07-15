/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",			/* CapsLock on */
};

/* Xresources preferences to load at startup */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 3;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "shutdown";

/* enable or disable (1 means enable, 0 disable) bell sound when password is incorrect */
static const int xbell = 0;
