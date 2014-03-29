/* This file is part of Clementine.
   Copyright 2014, David Sansome <me@davidsansome.com>
   
   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "devicefinder.h"

DeviceFinder::DeviceFinder(const QString& gstreamer_sink)
    : gstreamer_sink_(gstreamer_sink) {
}

QString DeviceFinder::GuessIconName(const QString& description) const {
  QString description_lower = description.toLower();
  if (description_lower.contains("headset")) {
    return "audio-headset";
  }

  if (description_lower.contains("headphone")) {
    return "audio-headphones";
  }

  return "audio-card";
}
