/*
   This file is part of DirectFB.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
*/

#ifndef __FUSIONSOUND_UTIL_H__
#define __FUSIONSOUND_UTIL_H__

#include <fusionsound.h>

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************************************************/

const char *fs_sampleformat_name( FSSampleFormat format );
const char *fs_channelmode_name ( FSChannelMode  mode );

/**********************************************************************************************************************/

FSChannelMode  fs_mode_for_channels ( int         channels );
FSSampleFormat fs_sampleformat_parse( const char *format );
FSChannelMode  fs_channelmode_parse ( const char *mode );

#ifdef __cplusplus
}
#endif

#endif
