/*
  OpenMW - The completely unofficial reimplementation of Morrowind
  Copyright (C) 2008-2010  Nicolay Korslund
  Email: < korslund@gmail.com >
  WWW: http://openmw.sourceforge.net/

  This file (cpp_bsaarchive.h) is part of the OpenMW package.

  OpenMW is distributed as free software: you can redistribute it
  and/or modify it under the terms of the GNU General Public License
  version 3, as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  version 3 along with this program. If not, see
  http://www.gnu.org/licenses/ .

 */

#ifndef _BSA_ARCHIVE_H_
#define _BSA_ARCHIVE_H_

/** Insert the archive manager for .bsa files into the OGRE resource
    loading system. You only need to call this function once.

    After calling it, you can do:

    ResourceGroupManager::getSingleton().
      addResourceLocation("Morrowind.bsa", "BSA", "General");

    or add BSA files to resources.cfg, etc. You can also use the
    shortcut addBSA() below, which will call insertBSAFactory() for
    you.
*/
void insertBSAFactory();

/// Add the given BSA file to the Ogre resource system.
void addBSA(const char* file, const char* group="General");

#endif
