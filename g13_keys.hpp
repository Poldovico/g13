//
// Created by khampf on 07-05-2020.
//

#ifndef G13_G13_KEYS_HPP
#define G13_G13_KEYS_HPP

#include <string>
#include <vector>

namespace G13 {
// static std::vector<std::string> G13_KEY_STRINGS;

/*! sequence containing the
 * G13 keys.  The order is very specific, with the position of each
 * item corresponding to a specific bit in the G13's USB message
 * format.  Do NOT remove or insert items in this list.
 */
// clang-format off
static const char* G13_KEY_STRINGS[] = {  // formerly G13_KEY_SEQ
  /* byte 3 */
  "G1", "G2", "G3", "G4", "G5", "G6", "G7", "G8",
  /* byte 4 */
  "G9", "G10", "G11", "G12", "G13", "G14", "G15", "G16",
  /* byte 5 */
  "G17", "G18", "G19", "G20", "G21", "G22", "UNDEF1", "LIGHT_STATE",
  /* byte 6 */
  "BD", "L1", "L2", "L3", "L4", "M1", "M2", "M3",
  /* byte 7 */
  "MR", "LEFT", "DOWN", "TOP", "UNDEF3", "LIGHT", "LIGHT2", "MISC_TOGGLE",
};
// clang-format on

/*! sequence containing the
 * G13 keys that shouldn't be tested input.  These aren't actually keys,
 * but they are in the bitmap defined by G13_KEY_SEQ.
 */
// formerly G13_NONPARSED_KEY_SEQ
static const char *G13_NONPARSED_KEYS[] = {
    "UNDEF1", "LIGHT_STATE", "UNDEF3",     "LIGHT",
    "LIGHT2", "UNDEF3",      "MISC_TOGGLE"};

/*! sequence containing the names of keyboard keys we can send through binding
 * actions. These correspond to KEY_xxx value definitions in <linux/input.h>,
 * i.e. ESC is KEY_ESC, 1 is KEY_1, etc.
 *
 * Note: later found in <linux/input-event-codes.h>
 */
// formerly KB_INPUT_KEY_SEQ
// clang-format off
static const char*  G13_SYMBOLS[] = {
  "ESC", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "MINUS", "EQUAL", "BACKSPACE",
  "TAB", "Q", "W", "E", "R", "T", "Y", "U", "I", "O",
  "P", "LEFTBRACE", "RIGHTBRACE", "ENTER", "LEFTCTRL", "RIGHTCTRL", "A", "S", "D", "F",
  "G", "H", "J", "K", "L", "SEMICOLON",
  "APOSTROPHE", "GRAVE", "LEFTSHIFT", "BACKSLASH", "Z", "X", "C", "V", "B", "N", "M",
  "COMMA", "DOT", "SLASH", "RIGHTSHIFT",
  "KPASTERISK", "LEFTALT", "RIGHTALT", "SPACE", "CAPSLOCK", "F1", "F2", "F3", "F4", "F5",
  "F6", "F7", "F8", "F9", "F10", "F11", "F12",
  "NUMLOCK", "SCROLLLOCK", "KP7", "KP8", "KP9", "KPMINUS", "KP4", "KP5", "KP6", "KPPLUS",
  "KP1", "KP2", "KP3", "KP0", "KPDOT",
  "KPSLASH", "LEFT", "RIGHT", "UP", "DOWN", "PAGEUP", "PAGEDOWN", "HOME", "END", "INSERT",
  "DELETE", "F13", "F14", "F15", "F16",
  "F17", "F18", "F19", "F20", "F21", "F22", "F23", "F24", "NEXTSONG", "PLAYPAUSE",
  "PREVIOUSSONG"
};
// clang-format on

// formerly M_INPUT_BTN_SEQ
/*! m_INPUT_BTN_SEQ is a Boost Preprocessor sequence containing the
 * names of button events we can send through binding actions.
 * These correspond to BTN_xxx value definitions in <linux/input.h>,
 * i.e. LEFT is BTN_LEFT, RIGHT is BTN_RIGHT, etc.
 *
 * The binding names have prefix M to avoid naming conflicts.
 * e.g. LEFT keyboard button and LEFT mouse button
 * i.e. LEFT mouse button is named MLEFT, MIDDLE mouse button is MMIDDLE
 */

// clang-format off
// static const char* G13_BTN_SEQ[] = { "LEFT", "RIGHT", "MIDDLE", "SIDE", "EXTRA" };
// clang-format on

typedef int G13_KEY_INDEX;
typedef int LINUX_KEY_VALUE;
const LINUX_KEY_VALUE BAD_KEY_VALUE = -1;

} // namespace G13
#endif // G13_G13_KEYS_HPP
