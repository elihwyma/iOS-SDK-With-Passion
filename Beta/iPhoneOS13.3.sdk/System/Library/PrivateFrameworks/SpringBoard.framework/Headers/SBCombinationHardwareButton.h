/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableDictionary, NSString, SBBacklightController, SBClickGestureRecognizer, SBCombinationHardwareButtonActions, SBHomeHardwareButton, SBLockHardwareButton, SBLongPressGestureRecognizer, SBPressGestureRecognizer, SBProximitySensorManager, SBSOSClawGestureObserver, SBSOSLockGestureObserver, SBVolumeHardwareButton;

@interface SBCombinationHardwareButton : NSObject <Swift>

{
    NSMutableDictionary *_screenshotDisableAssertions;
    SBCombinationHardwareButtonActions *_buttonActions;
    SBClickGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBProximitySensorManager *_proximitySensorManager;
    SBBacklightController *_backlightController;
    SBPressGestureRecognizer *_sosGestureRecognizer;
    SBSOSClawGestureObserver *_sosClawGestureObserver;
    SBSOSLockGestureObserver *_sosLockGestureObserver;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
}

@property (retain, nonatomic) SBCombinationHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBClickGestureRecognizer *screenshotGestureRecognizer;
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton;
@property (weak, nonatomic) SBLockHardwareButton *lockHardwareButton;
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton;
@property (weak, nonatomic) SBProximitySensorManager *proximitySensorManager;
@property (weak, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBPressGestureRecognizer *sosGestureRecognizer;
@property (retain, nonatomic) SBSOSClawGestureObserver *sosClawGestureObserver;
@property (retain, nonatomic) SBSOSLockGestureObserver *sosLockGestureObserver;
@property (retain, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeHardwareButton:(id)arg3 lockHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 proximitySensorManager:(id)arg6 backlightController:(id)arg7;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (id)preemptablePressGestureRecognizers;
- (void)sosClawAutoCallInteractiveStateChanged:(id)arg1 interacting:(_Bool)arg2;
- (void)sosClawDidBecomeInactive:(id)arg1;
- (void)sosClawDidBecomeActive:(id)arg1;
- (void)sosClawDidTriggerSOS:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureGestureRecognizers;
- (void)_backlightChanged:(id)arg1;
- (void)screenshotGesture:(id)arg1;
- (void)sosGesture:(id)arg1;
- (void)_configureSOSGestureBehaviors;
- (void)shutdownGesture:(id)arg1;
- (void)_setScreenshotDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)sosLockDidTriggerSOS:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sosLockTriggerDidBecomeActive:(id)arg1;
- (void)sosLockTriggerDidBecomeInactive:(id)arg1;
- (void)_sosTriggerMechanismDidChange;

@end
