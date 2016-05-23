/*
* This file is part of the OregonCore Project. See AUTHORS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OREGON_M2STORES_H
#define OREGON_M2STORES_H

#include "SharedDefines.h"
#include "Common.h"

struct FlyByCamera
{
    uint32 timeStamp;
    G3D::Vector4 locations;
};

typedef std::vector<FlyByCamera> FlyByCameraCollection;

extern std::unordered_map<uint32, FlyByCameraCollection> sFlyByCameraStore;

void LoadM2Cameras(std::string const& dataPath);

#endif