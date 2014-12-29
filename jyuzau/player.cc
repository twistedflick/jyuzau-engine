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

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "jyuzau/player.hh"
#include "jyuzau/character.hh"

using namespace Jyuzau;

Player *
Player::create(Ogre::String name, Scene *scene)
{
	Player *p;
	
	p = new Player(name);
	if(!p->load())
	{
		delete p;
		return NULL;
	}
	if(scene)
	{
		if(!p->attach(scene))
		{
			delete p;
			return NULL;
		}
	}
	return p;
}

Player::Player(Ogre::String name):
	Actor::Actor(name),
	m_character(NULL)
{
}

Player::~Player()
{
}