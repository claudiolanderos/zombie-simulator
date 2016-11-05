//
//  SimulationWorld.hpp
//  zombiewx-mac
//
//  Created by Claudio Landeros on 11/3/16.
//  Copyright © 2016 Sanjay Madhav. All rights reserved.
//

#include "Singleton.h"
#include "Machine.h"
#pragma once

class SimulationWorld : public Singleton<SimulationWorld>
{
    DECLARE_SINGLETON(SimulationWorld);

public:
    
    Being GetFacing(Coord coord, int n = 1);
    bool IsWall(Coord coord);
    bool IsOccupied(Coord coord);
    
    void SetBeing(Being being, Coord coord);
    Being GetBeing(Coord coord);
    void MoveState(Coord currLocation, Coord newLocation);
    
    void SetHumanMachine(Machine<HumanTraits> machine);
    void SetZombieMachine(Machine<ZombieTraits> machine);
    // World grid
    MachineState mGrid [20][20];
    
protected:
    SimulationWorld();
};