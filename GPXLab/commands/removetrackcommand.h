/****************************************************************************
 *   Copyright (c) 2014 Frederic Bourgeois <bourgeoislab@gmail.com>         *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   You should have received a copy of the GNU General Public License      *
 *   along with This program. If not, see <http://www.gnu.org/licenses/>.   *
 ****************************************************************************/
 
#ifndef REMOVETRACKCOMMAND_H
#define REMOVETRACKCOMMAND_H

#include <QUndoCommand>
#include "gpxlab.h"

/**
 * @addtogroup Commands Commands
 * @brief Command functions implementing QUndoCommand
 * @{
 */

/**
 * @class RemoveTrackCommand
 *
 * @brief Remove track command
 *
 * @author Frederic Bourgeois <bourgeoislab@gmail.com>
 * @version 1.0
 * @date 28 Nov 2014
 */
class RemoveTrackCommand : public QUndoCommand
{
public:

    /**
     * @brief Constructor
     * @param gpxlab Pointer to application
     * @param trackNumber Track number to remove
     * @param parent Parent
     */
    RemoveTrackCommand(GPXLab *gpxlab, int trackNumber, QUndoCommand *parent = 0);

    /**
     * @brief Undo the command
     */
    void undo();

    /**
     * @brief Redo the command
     */
    void redo();

private:
    GPXLab *gpxlab;
    int trackNumber;
    GPX_trkType trk;
};

/** @} Commands */

#endif // REMOVETRACKCOMMAND_H