/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef ZOOM_FACTOR_H
#define ZOOM_FACTOR_H

/// Zoom factors ordered by zoom level so next one above/below is the next zoom level
enum ZoomFactor {
  ZOOM_16_TO_1,
  ZOOM_16_TO_1_FARTHER,
  ZOOM_8_TO_1_CLOSER,
  ZOOM_8_TO_1,
  ZOOM_8_TO_1_FARTHER,
  ZOOM_4_TO_1_CLOSER,
  ZOOM_4_TO_1,
  ZOOM_4_TO_1_FARTHER,
  ZOOM_2_TO_1_CLOSER,
  ZOOM_2_TO_1,
  ZOOM_2_TO_1_FARTHER,
  ZOOM_1_TO_1_CLOSER,
  ZOOM_1_TO_1,
  ZOOM_1_TO_1_FARTHER,
  ZOOM_1_TO_2_CLOSER,
  ZOOM_1_TO_2,
  ZOOM_1_TO_2_FARTHER,
  ZOOM_1_TO_4_CLOSER,
  ZOOM_1_TO_4,
  ZOOM_1_TO_4_FARTHER,
  ZOOM_1_TO_8_CLOSER,
  ZOOM_1_TO_8,
  ZOOM_1_TO_8_FARTHER,
  ZOOM_1_TO_16_CLOSER,
  ZOOM_1_TO_16,
  ZOOM_FILL,
  NUMBER_ZOOM_FACTORS
};

#endif // ZOOM_FACTOR_H
