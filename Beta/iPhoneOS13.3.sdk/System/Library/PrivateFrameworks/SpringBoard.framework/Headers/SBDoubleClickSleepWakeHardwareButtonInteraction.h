/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSleepWakeHardwareButtonInteraction.h>

@class SBHIDUILockAssertion;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

{
    SBHIDUILockAssertion *_proxLockAssertion;
}

@property (retain, nonatomic) SBHIDUILockAssertion *proxLockAssertion;

- (void)observeFinalPressUp;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeInitialPressUp;
- (_Bool)consumeSecondPressDown;
- (void)observeSinglePressDidFail;
- (void)_performWake;
- (void)_performSleep;
- (void)_resumeProxForReason:(id)arg1;
- (void)_suspendProx;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg1;
- (void)_cancelPreviousResumeProxRequests;

@end
