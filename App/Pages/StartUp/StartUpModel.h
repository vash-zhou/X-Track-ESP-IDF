#ifndef __STARTUP_MODEL_H
#define __STARTUP_MODEL_H

#include "DataProc.h"
#include "HAL.h"

namespace Page
{

class StartupModel
{
public:
    void Init();
    void Deinit();
    void PlayMusic(const char* music);
    void SetEncoderEnable(bool en)
    {
        HAL::Encoder_SetEnable(en);
    }
    void SetStatusBarAppear(bool en);

private:
    Account* account;
};

}

#endif
