/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 700;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Liberation Mono:pixelsize=15",
	"monospace:pixelsize=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* dark blue - #010618*/
/* light pink - #EE7ED4 */
/* white - #FFFFFF */
/* whitepink - #F2E4F3 */
/* salmon - #EE7C74 */


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#F2E4F3", "#010618" },
	[SchemeSel] = { "#FFFFFF", "#EE7ED4" },
	[SchemeSelHighlight] = {"#010618", "#42Aff8" },
	[SchemeNormHighlight] = {"#010618", "#42Aff8" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeHp] = { "#bbbbbb", "#333333" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 8;
static unsigned int lineheight = 30;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
