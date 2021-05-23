/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BKSButtonHapticsDefinition, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, SBHardwareButtonGestureParameters, SBHomeHardwareButtonActions, SBHomeHardwareButtonGestureRecognizerConfiguration, SBNotificationBannerDestination, UIGestureRecognizer;

@protocol BSInvalidatable;

@interface SBHomeHardwareButton : NSObject <Swift>

{
    id <BSInvalidatable> _fingerDetectEnabledAssertion;
    NSMutableSet *_hintSuppressionAssertions;
    NSMutableOrderedSet *_longPressDurationAssertions;
    _Bool _longPressDidOccur;
    SBNotificationBannerDestination *_bannerDestination;
    SBHomeHardwareButtonActions *_buttonActions;
    SBHardwareButtonGestureParameters *_buttonGestureParameters;
    SBHomeHardwareButtonGestureRecognizerConfiguration *_gestureRecognizerConfiguration;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    long long _homeButtonType;
    long long _maximumPressCount;
    long long _maximumTapCount;
    NSMutableDictionary *_emulatedPerSenderDownCount;
    BKSButtonHapticsDefinition *_buttonDefinition;
}

@property (retain, nonatomic) SBHomeHardwareButtonActions *buttonActions;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (retain, nonatomic) SBHomeHardwareButtonGestureRecognizerConfiguration *gestureRecognizerConfiguration;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) long long maximumTapCount;
@property (nonatomic) _Bool longPressDidOccur;
@property (retain, nonatomic) NSMutableDictionary *emulatedPerSenderDownCount;
@property (retain, nonatomic) BKSButtonHapticsDefinition *buttonDefinition;
@property (weak, nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (nonatomic, readonly, getter=isButtonDown) _Bool buttonDown;
@property (nonatomic, readonly) _Bool supportsAcceleratedAppDismiss;
@property (nonatomic) long long hapticType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)longPress:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2;
- (void)configureForwardingToLockButton:(id)arg1;
- (_Bool)emulateHomeButtonEventsIfNeeded:(struct __IOHIDEvent *)arg1;
- (void)removeLongPressDurationAssertion:(id)arg1;
- (void)addLongPressDurationAssertion:(id)arg1;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(CDUnknownBlockType)arg1;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)cancelLongPress;
- (void)performWhenMenuButtonIsUpUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeHintSuppressionAssertion:(id)arg1;
- (void)addHintSuppressionAssertion:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2 buttonActions:(id)arg3 gestureRecognizerConfiguration:(id)arg4;
- (void)_createGestureRecognizersWithConfiguration:(id)arg1;
- (void)_reconfigureHomeButton;
- (void)_startObservingReconfigurationTriggers;
- (void)_setFingerDetectionEnabled:(_Bool)arg1;
- (void)_reconfigureGestureRecognizersForNewMaximumTapCount:(long long)arg1 oldMaximumTapCount:(long long)arg2;
- (void)_reconfigureGestureRecognizersForNewMaximumPressCount:(long long)arg1 oldMaximumPressCount:(long long)arg2;
- (void)initialButtonDown:(id)arg1;
- (void)initialButtonUp:(id)arg1;
- (void)singlePressUp:(id)arg1;
- (void)acceleratedSinglePressUp:(id)arg1;
- (void)doublePressDown:(id)arg1;
- (void)doublePressUp:(id)arg1;
- (void)triplePressUp:(id)arg1;
- (void)doubleTapUp:(id)arg1;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (_Bool)_acceleratedSinglePressRecognizerShouldBegin;
- (_Bool)_isMenuDoublePressAllowed:(id *)arg1;
- (_Bool)_longPressGestureRecognizerShouldBegin:(id)arg1;
- (void)_terminateHomeButtonEventAtCount:(long long)arg1;
- (void)_singlePressUp:(id)arg1;
- (void)_cancelGestureRecognizer:(id)arg1;
- (_Bool)_processDoubleDownAndDoubleUpSimultaneously;
- (_Bool)_isMenuDoublePressDisabled;

@end
