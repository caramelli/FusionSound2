#  This file is part of DirectFB.
#
#  This library is free software; you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free Software Foundation; either
#  version 2.1 of the License, or (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  License along with this library; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA

alsa_dep = dependency('alsa', required: false)

if not alsa_dep.found()
  warning('Building without ALSA support.')
  subdir_done()
endif

library('fusionsound_alsa',
        'alsa.c',
        include_directories: config_inc,
        dependencies: [alsa_dep, fusionsound_dep],
        install: true,
        install_dir: moduledir / 'snddrivers')

if get_option('default_library') == 'static'
  pkgconfig.generate(filebase: 'fusionsound-snddriver-alsa',
                     variables: 'moduledir=' + moduledir,
                     name: 'FusionSound-snddriver-alsa',
                     description: 'ALSA sound driver',
                     requires_private: 'alsa',
                     libraries_private: ['-L${moduledir}/snddrivers',
                                         '-Wl,--whole-archive -lfusionsound_alsa -Wl,--no-whole-archive'])
endif
