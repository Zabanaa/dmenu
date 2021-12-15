static int topbar = 1;
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 700;                    /* minimum width when centered */

static const char *fonts[] = {
	"Liberation Mono:pixelsize=15",
	"NotoColorEmoji:pixelsize=11:antialias=true:autohint=true",
	"monospace:pixelsize=13",
};
static const char *prompt      = NULL;


static const char *colors[SchemeLast][2] = {
									/*    fg     bg       */
	[SchemeNorm]	=				{ "#F2E4F3", "#201b2d" },
	[SchemeSel]		=				{ "#FFFFFF", "#5a4b81" },
	[SchemeSelHighlight] =			{ "#F2E4F3", "#ff79c6" },
	[SchemeNormHighlight] =			{ "#010618", "#939ede" },
	[SchemeOut] =					{ "#000000", "#00ffff" },
	[SchemeHp] =					{ "#bbbbbb", "#333333" }
};

static unsigned int lines      = 10;
static unsigned int lineheight = 30; 
static const char worddelimiters[] = " ";
static const unsigned int border_width = 4;
