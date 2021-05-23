/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBacklightController, SBBannerController, SBHIDInterface, SBLockScreenManager, SBScreenWakeAnimationController, SBSoundController, SpringBoard;

@protocol BSInvalidatable;

@interface SBSleepWakeHardwareButtonInteraction : NSObject

{
    _Bool _inhibitNextSinglePressUp;
    _Bool _SOSGestureActive;
    _Bool _fadeOutInProgressFromLockButtonWhileUnlocked;
    _Bool _undidFadeOutFromLockButton;
    _Bool _didPlayLockSound;
    SBBacklightController *_backlightController;
    SBBannerController *_bannerController;
    SBLockScreenManager *_lockScreenManager;
    SBScreenWakeAnimationController *_screenWakeAnimationController;
    SBSoundController *_soundController;
    SBHIDInterface *_HIDInterface;
    SpringBoard *_SBApp;
    double _multiplePressTimeInterval;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBBannerController *bannerController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (retain, nonatomic) SBSoundController *soundController;
@property (retain, nonatomic) SBHIDInterface *HIDInterface;
@property (retain, nonatomic) SpringBoard *SBApp;
@property (nonatomic) double multiplePressTimeInterval;
@property (nonatomic) _Bool fadeOutInProgressFromLockButtonWhileUnlocked;
@property (nonatomic) _Bool undidFadeOutFromLockButton;
@property (nonatomic) _Bool didPlayLockSound;
@property (retain, nonatomic) id <BSInvalidatable> deferOrientationUpdatesAssertion;
@property (nonatomic) _Bool inhibitNextSinglePressUp;
@property (nonatomic, getter=isSOSGestureActive) _Bool SOSGestureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)reverseSleepIfNeededAndPossible;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeSinglePressUp;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)_performWake;
- (void)_performSleep;
- (void)_playLockSound;

@end
