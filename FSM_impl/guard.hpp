#pragma once

#include <tinyfsm.hpp>
#include "events.hpp"

class GuardFSM : public tinyfsm::Fsm<GuardFSM>
{
public:
    void            react(const tinyfsm::Event&) { };

    virtual void    react(const NewTick&);

    virtual void    react(const NextPatrolSide&);
    virtual void    react(const CamerasChecked&);
    virtual void    react(const NoiseChecked&);
    virtual void    react(const IntruderArrested&);
    virtual void    react(const IntruderLost&);
    virtual void    react(const EyeContact&);
    virtual void    react(const Noise&);

    void            entry() { };
    void            exit()  { };
};
