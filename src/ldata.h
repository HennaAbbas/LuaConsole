/* MIT License
 * 
 * Copyright (c) 2017-2019 Cody Tilkins
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */


#pragma once

#include "lang.h"

#include "lua.h"
#include "luadriver.h"



#define LUA_CONSOLE_COPYRIGHT	"LuaConsole Copyright (C) 2017-2019, Cody Tilkins"


#if defined(_WIN32) || defined(_WIN64)
#	define LUA_BIN_EXT_NAME 		".exe"
#	define LUA_DLL_SO_NAME 			".dll"
#else
#	define LUA_BIN_EXT_NAME 		""
#	define LUA_DLL_SO_NAME 			".so"
#endif



lua_State* L;
LC_ARGS ARGS;
LangCache* lang;


// usage message
const char HELP_MESSAGE[];



#if LUA_VERSION_NUM <= 501
	void luaL_traceback (lua_State *L, lua_State *L1, const char *msg, int level);
#endif


LC_LD_API int luacon_loaddll(LC_ARGS _ARGS, LangCache* _lang);

