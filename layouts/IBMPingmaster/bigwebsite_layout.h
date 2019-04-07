#include "../../kbd/base.h"

//renamed for convenience
#define LCTRL KEY_LEFT_CTRL
#define RCTRL KEY_RIGHT_CTRL

#define LSHIFT KEY_LEFT_SHIFT
#define RSHIFT KEY_RIGHT_SHIFT

#define LEFT_ALT KEY_LEFT_ALT
#define RIGHT_ALT KEY_RIGHT_ALT

#define LEFT_GUI KEY_LEFT_GUI
#define RIGHT_GUI KEY_RIGHT_GUI

#define PAGE_UP KEY_PAGE_UP
#define PAGE_DOWN KEY_PAGE_DOWN

#define LBRACE KEY_LEFT_BRACE
#define RBRACE KEY_RIGHT_BRACE

#define ENTER KEY_ENTER
#define KEY_SEMI KEY_SEMICOLON
#define PERIOD KEY_PERIOD
#define KP_PERIOD KEYPAD_PERIOD
#define COMMA KEY_COMMA
#define BACKSPACE KEY_BACKSPACE
#define DEL KEY_DELETE
#define BACKSLASH KEY_BACKSLASH
#define NUMLOCK KEY_NUM_LOCK

//new defines
#define VOL_UP 0x05
#define VOL_DOWN 0x06
#define PRTSCN 0x46

#define LAYERS 2//edit this if more layers are added
const struct kblayer PROGMEM kblayer_list[LAYERS] = {
	{
		0,//primary layer
		MATRIX_POS(
			0,//NC = not connected, automatically assigned
			//base matrix layer config
			//0			1			2			3			4			5			6			7<-col		row
									KEY_2,		KEY_W,		KEY_S,		KEY_Z,		KEY_TAB,	KEY_ESC,	//0  {2, w, s, z, tab, esc}
									KEY_3,		KEY_E,		KEY_D,		KEY_X,		KEY_Q,		KEY_1,		//1  {3, e, d, x, q, 1}
									KEY_4,		KEY_R,		KEY_F,		KEY_C,					LCTRL,		//2  {4, r, f, c, NC, ctrl-l}
									KEY_5,		KEY_T,		KEY_G,		KEY_V,		LSHIFT,		KEY_A,		//3  {5, t, g, v, shift-l, a}
									KEY_6,		KEY_Y,		KEY_H,		KEY_B,		LEFT_GUI,	0,			//4  {6, y, h, b, host-l, reset(special)}
									KEY_7,		KEY_U,		KEY_J,		KEY_N,					LEFT_ALT,	//5  {7, u, j, n, NC, alt-l}
									KEY_8,		KEY_I,		KEY_K,		KEY_M,		KEY_SPACE,	0,			//6  {8, i, k, m, space, numpad 00(special)}
									KEY_9,		KEY_O,		KEY_L,		COMMA,		RIGHT_GUI,	RIGHT_ALT,	//7  {9, o, l, ,, host-r, alt-r}
									KEY_0,		KEY_P,		KEY_SEMI,	PERIOD,		KEY_0,		ENTER,		//8  {0, p, ;, ., numpad 0, enter}
									KEY_EQUAL,	KEY_MINUS,	KEY_QUOTE,	KEY_SLASH,	PAGE_UP,	PERIOD,		//9  {=, @, :, /, pgUP, numpad .}
									KEY_TILDE,	LBRACE,		RBRACE,		PRTSCN,		PAGE_DOWN,	0,			//10 {~, [, ], printscreen, pgDN, E16}
									NUMLOCK,	BACKSLASH,	RCTRL,		RSHIFT,		KEY_F11,	0,			//11 {numlock, \, control-r, shift-r, F11, E15}
			0,			KEY_F12,	BACKSPACE,	KEY_LEFT,	KEY_RIGHT,	KEY_DOWN,	KEY_F10,	0,			//12 {E18, F12, backspace, left, right, down, F10, E14}
			KEY_UP,		KEY_5,		KEY_F2,		KEY_F6,		KEY_F9,		KEY_1,		KEY_F7,		KEY_F3,		//13 {up, numpad 5, F2, F6, F9, numpad 1, F7, F3}
			KEY_HOME,	KEY_7,		KEY_F1,		KEY_F5,		KEY_4,		KEY_2,		KEY_F8,		KEY_F4,		//14 {home, numpad 7, F1, F5, numpad 4, numpad 2, F8, F4}
			KEY_END,	KEY_8,		DEL,		KEY_9,		KEY_6,		KEY_3,		0,			0			//15 {end, numpad 8, del, numpad 9, numpad 6, numpad 3, E19, E20}
		)
	},
	
	{
		1,//secondary layer
		MATRIX_POS(
			0,//NC = not connected, automatically assigned
			//base matrix layer config
			//0			1			2			3			4			5			6			7<-col	row
									KEY_2,		KEY_W,		KEY_S,		KEY_Z,		KEY_TAB,	KEY_ESC,	//0
									KEY_3,		KEY_E,		KEY_D,		KEY_X,		KEY_Q,		KEY_1,		//1
									KEY_4,		KEY_R,		KEY_F,		KEY_C,					LCTRL,		//2
									KEY_5,		KEY_T,		KEY_G,		KEY_V,		LSHIFT,		KEY_A,		//3
									KEY_6,		KEY_Y,		KEY_H,		KEY_B,		LEFT_GUI,	0,			//4
									KEY_7,		KEY_U,		KEY_J,		KEY_N,					LEFT_ALT,	//5
									KEY_8,		KEY_I,		KEY_K,		KEY_M,		KEY_SPACE,	0,			//6
									KEY_9,		KEY_O,		KEY_L,		COMMA,		RIGHT_GUI,	RIGHT_ALT,	//7
									KEY_0,		KEY_P,		KEY_SEMI,	PERIOD,		KEYPAD_0,	ENTER,		//8
									KEY_EQUAL,	KEY_MINUS,	KEY_QUOTE,	KEY_SLASH,	PAGE_UP,	KP_PERIOD,	//9
									KEY_TILDE,	LBRACE,		RBRACE,		PRTSCN,		PAGE_DOWN,	0,			//10
									NUMLOCK,	BACKSLASH,	RCTRL,		RSHIFT,		KEY_F11,	0,			//11
			0,			KEY_F12,	BACKSPACE,	KEY_LEFT,	KEY_RIGHT,	KEY_DOWN,	KEY_F10,	0,			//12
			KEY_UP,		KEYPAD_5,	KEY_F2,		KEY_F6,		KEY_F9,		KEYPAD_1,	KEY_F7,		KEY_F3,		//13
			KEY_HOME,	KEYPAD_7,	KEY_F1,		KEY_F5,		KEYPAD_4,	KEYPAD_2,	KEY_F8,		KEY_F4,		//14
			KEY_END,	KEYPAD_8,	DEL,		KEYPAD_9,	KEYPAD_6,	KEYPAD_3,	0,			0			//15
		)
	}
};