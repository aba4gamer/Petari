#pragma once

#include "Game/LiveActor/LiveActor.hpp"

class MovieStarter : public LiveActor {
public:
    MovieStarter(const char *);

    virtual ~MovieStarter();
    virtual void init(const JMapInfoIter &);
    virtual void appear();
    virtual void kill();
    virtual void control();

    s32 mMovieIdx;          // 0x8C
};
