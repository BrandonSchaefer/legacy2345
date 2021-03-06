/**
 * @file legacy/character/nameconfig.cpp
 * @brief part of the Legacy character name submodule.
 */
/*
 * Copyright 2015-2016 Stephen M. Webb <stephen.webb@bregmasoft.ca>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "legacy/character/nameconfig.h"


std::string Legacy::Character::NameConfig::
generator_type() const
{
  return "static";
}


std::string Legacy::Character::NameConfig::
data_file_path() const
{
  return "";
}


