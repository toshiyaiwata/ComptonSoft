/*************************************************************************
 *                                                                       *
 * Copyright (c) 2011 Shin Watanabe, Hirokazu Odaka                      *
 *                                                                       *
 * This program is free software: you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation, either version 3 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                       *
 *************************************************************************/

#ifndef ANLGEANT4_ANLG4RunManager_H
#define ANLGEANT4_ANLG4RunManager_H 1

#include "G4RunManager.hh"

class G4StateManager;


namespace anlgeant4
{
/**
 * ANLG4RunManager : original implemenation came from ANLGeant4 for ANL++.
 *
 * @date 2017-06-21 | Hiro Odaka | add default constructor/desctructor
 */
class ANLG4RunManager : public G4RunManager
{
public:
  ANLG4RunManager() = default;
  virtual ~ANLG4RunManager();

  void ANLbgnrunfunc();
  void ANLanafunc();
  void ANLendrunfunc();
  
private:
  G4StateManager* ANLRunstatManager = nullptr;
  G4bool cond = false;
  G4int i_event = 0;
};

} /* namespace anlgeant4 */

#endif /* ANLGEANT4_ANLG4RunManager_H */
