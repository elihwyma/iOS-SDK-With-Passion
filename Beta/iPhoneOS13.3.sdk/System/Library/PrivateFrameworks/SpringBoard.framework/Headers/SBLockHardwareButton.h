/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMonotonicReferenceTime, NSString, SBClickGestureRecognizer, SBHardwareButtonGestureParameters, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBPressGestureRecognizer, SBVolumeHardwareButton, UIGestureRecognizer;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <Swift>

{
    unsigned long long _aggdStartTime;
    BSMonotonicReferenceTime *_lastPressDownReferenceTime;
    SBLockHardwareButtonActions *_buttonActions;
    SBHardwareButtonGestureParameters *_buttonGestureParameters;
    SBPressGestureRecognizer *_buttonDownGestureRecognizer;
    SBClickGestureRecognizer *_singlePressGestureRecognizer;
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;
    SBClickGestureRecognizer *_doublePressGestureRecognizer;
    SBClickGestureRecognizer *_triplePressGestureRecognizer;
    SBClickGestureRecognizer *_quadruplePressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    long long _homeButtonType;
    unsigned long long _configuredMaximumPressCount;
    unsigned long long _currentPressCount;
}

@property (retain, nonatomic) SBLockHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer;
@property (retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer;
@property (retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (weak, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer;
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton;
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned long long configuredMaximumPressCount;
@property (nonatomic) unsigned long long currentPressCount;
@property (nonatomic, readonly) _Bool isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)longPress:(id)arg1;
- (void)buttonDown:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6;
- (void)forceResetSequenceDidBegin;
- (id)hardwareButtonGestureParameters;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (_Bool)reverseFadeOutIfNeeded;
- (void)_createGestureRecognizers;
- (id)preemptablePressGestureRecognizers;
- (void)SOSTriggerMechanismDidChange;
- (void)cancelLongPress;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(_Bool)arg8;
- (void)singlePress:(id)arg1;
- (void)doublePress:(id)arg1;
- (void)triplePress:(id)arg1;
- (void)quadruplePress:(id)arg1;
- (void)_reconfigureButtonGestureRecognizers;
- (void)_updatePressCountForDownEvent;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(_Bool)arg1;

@end
