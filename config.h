/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Product Sans:size=13",
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char nord_fg[]         = "#D8DEE9";
static const char nord_bg[]         = "#2E3440";
static const char nord_blue[]       = "#81A1C1";

static const char gruv_fg[]         = "#282828";
static const char gruv_bg[]         = "#f2e5bc";
static const char gruv_yellow[]     = "#d79921";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { gruv_fg, gruv_bg     },
	[SchemeSel] =  { gruv_bg, gruv_yellow },
	[SchemeOut] =  { gruv_fg, gruv_bg     },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 6;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static const unsigned int border_width = 3; /* Size of the window border */

static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
