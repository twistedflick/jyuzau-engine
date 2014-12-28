/* Copyright 2014 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef JYUZAU_HH_
# define JYUZAU_HH_                    1

# include <OGRE/OgrePlatform.h>

# include "jyuzau/core.hh"
# include "jyuzau/loadable.hh"
# include "jyuzau/prop.hh"
# include "jyuzau/actor.hh"
# include "jyuzau/scene.hh"

# ifdef __OBJC__
#  include "jyuzau/delegate.hh"
# endif

namespace Jyuzau {
	int main(int argc, char **argv, Jyuzau::Core *app);
	
# if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
	INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd, Jyuzau::Core *app);
# endif
};

#endif /*!JYUZAU_HH_*/