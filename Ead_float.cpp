/*
 * EadFloat.cpp
 *
 * Adapted from: ead.c  -  exponential attack decay envelope
 * Copyright (c) 2000-2003 by Tom Schouten
 *
 * Copyright 2012 unbackwards@gmail.com, 2000-2003 Tom Schouten
 *
 * This file is part of Cuttlefish.
 *
 * Cuttlefish is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cuttlefish is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cuttlefish.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "Ead_float.h"



EadFloat::EadFloat(const unsigned int update_rate) : UPDATE_RATE(update_rate)
{
	;
}

//const unsigned char EadFloatFloat::ENVELOPE_RANGE  = 1; // smallest fraction of 8n8
//const unsigned int EadFloatFloat::ENVELOPE_MAX    = (Q8n8_FIX1 - ENVELOPE_RANGE);

const float EadFloat::ENVELOPE_RANGE  = 0.001f;
const float EadFloat::ENVELOPE_MAX    = (1.0f - ENVELOPE_RANGE);
const float EadFloat::NUMERATOR = 1000.0f * log(ENVELOPE_RANGE);