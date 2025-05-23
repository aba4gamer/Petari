#pragma once

#include "JSystem/JGeometry/TVec.hpp"
#include <revolution.h>

class CaptureScreenDirector;
class PlayTimerScene;
class StarCounter;
class StarPieceCounter;
class ResTIMG;

namespace {
    CaptureScreenDirector* getCaptureScreenDirector();
    PlayTimerScene* getPlayTimerScene();
    void appearInformationMessage(bool, bool);
    StarCounter* getStarCounter();
    StarPieceCounter* getStarPieceCounter();
};

namespace MR {
    u16 getViWidth();
    f32 getSafetyVIScreenWidthRatio();
    u16 getScreenWidth();
    u16 getSafetyFrameWidth();
    u16 getSafetyFrameLeft();
    u16 getSafetyFrameRight();
    u16 getFrameBufferWidth();
    u16 getFrameBufferHeight();
    void convertFrameBufferPosToScreenPos(TVec2f*, const TVec2f&);
    void convertScreenPosToFrameBufferPos(TVec2f*, const TVec2f&);
    void startToCaptureScreen(const char*);
    void endToCaptureScreen(const char*);
    void captureScreenIfAllow(const char*);
    const ResTIMG* getScreenResTIMG();
    const u8* getScreenTexImage();
    void closeWipeCircle(s32);
    void forceOpenWipeCircle();
    void forceCloseWipeCircle();
    void closeWipeFade(s32);
    void forceOpenWipeFade();
    void forceCloseWipeFade();
    void closeWipeWhiteFade(s32);
    void forceOpenWipeWhiteFade();
    void forceCloseWipeWhiteFade();
    bool isWipeActive();
    bool isWipeBlank();
    bool isWipeOpen();
    void closeSystemWipeCircle(s32);
    void openSystemWipeFade(s32);
    void closeSystemWipeFade(s32);
    void forceOpenSystemWipeFade();
    void openSystemWipeWhiteFade(s32);
    void closeSystemWipeWhiteFade(s32);
    void forceCloseSystemWipeWhiteFade();
    bool isSystemWipeActive();
    void closeSystemWipeCircleWithCaptureScreen(s32);
    void closeSystemWipeFadeWithCaptureScreen(s32);
    void setWipeCircleCenterPos(const TVec3f&);
    void requestMovementOnImageEffect();
    void setImageEffectControlAuto();
    void turnOffDOFInSubjective();
    void turnOnDOFInSubjective();
    void turnOnNormalBloom();
    void turnOnDepthOfField(bool);
    void turnOffImageEffect();
    void forceOffImageEffect();
    void createNormalBloom();
    bool isNormalBloomOn();
    bool isNormalBloomForEachModel();
    void setNormalBloomIntensity(u8);
    void setNormalBloomThreshold(u8);
    void setNormalBloomBlurIntensity1(u8);
    void setNormalBloomBlurIntensity2(u8);
    void createSimpleBloom();
    void createScreenBlur();
    void createDepthOfFieldBlur();
    void setDepthOfFieldBlurIntensity(f32);
    void createCenterScreenBlur();
    void startCenterScreenBlur(s32, f32, u8, s32, s32);
    void startGlobalTimer();
    void resetGlobalTimer();
    bool isGlobalTimerEnd();
    void startGlobalTimerTimeUp();
    void requestPowerUpHPMeter();
    void requestForceAppearHPMeter();
    void startMissLayout();
    bool isMissLayoutAnimEnd();
    void activateDefaultGameLayout();
    void deactivateDefaultGameLayout();
    bool isActiveDefaultGameLayout();
    void forceAppearDefaultGameLayout();
    void pauseOffLensFlare();
    void tryScreenToFrameCinemaFrame();
    void tryFrameToBlankCinemaFrame();
    void tryBlankToFrameCinemaFrame();
    void tryFrameToScreenCinemaFrame();
    void forceToScreenCinemaFrame();
    void forceToFrameCinemaFrame();
    void forceToBlankCinemaFrame();
    bool isStopCinemaFrame();
    void appearInformationMessage(const char*, bool);
    void appearInformationMessageCenter(const char*, bool);
    void appearInformationMessage(const wchar_t*, bool);
    void setInformationMessageReplaceString(const wchar_t*, s32);
    void disappearInformationMessage();
    bool isDeadInformationMessage();
    void appearYesNoSelector(const char*, const char*, const char*);
    bool isYesNoSelected();
    bool isYesNoSelectedYes();
    void setYesNoSelectorSE(const char*, const char*, const char*);
    void resetYesNoSelectorSE();
    void startMoviePlayer(const char*);
    void stopMoviePlayer();
    bool isActiveMoviePlayer();
    bool isMoviePlayerPlaying();
    s32 getMovieCurrentFrame();
    u32 getMovieTotalFrame();
    void setMovieVolume(f32, s32);
    void appearStarCounter();
    void disappearStarCounter();
    void forceSyncStarPieceCounter();
    void forceAppearStarPieceCounterForTicoFat();
    void disappearStarPieceCounterForTicoFat();
    void createPurpleCoinCounter();
    void validatePurpleCoinCounter();
    void requestCounterLayoutAppearanceForTicoEat(bool);
    void openWipeCircle(s32);
    void openWipeFade(s32);
    void openWipeWhiteFade(s32);
    void startGameOverWipe();
    void startDownWipe();
    void requestOneUp();
};
