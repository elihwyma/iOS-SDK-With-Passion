/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

@class NSString, SBHardwareButtonActionList, SBHardwareButtonGestureParameters, SBHardwareButtonService, SBNotificationBannerDestination, SBProximitySensorManager;

@protocol SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase

{
    _Bool _screenWasDimOnMenuDown;
    _Bool _dontUnlockOnButtonUp;
    long long _homeButtonType;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldStartAbsoluteTime;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
    id <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    _Bool _buttonDown;
    double _currentLongPressDuration;
    SBNotificationBannerDestination *_bannerDestination;
}

@property (nonatomic, getter=isButtonDown) _Bool buttonDown;
@property (nonatomic) double currentLongPressDuration;
@property (weak, nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performSinglePressUpActions;
- (void)performInitialButtonDownActions;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(CDUnknownBlockType)arg1;
- (void)performFinalButtonUpActions;
- (id)hardwareButtonGestureParameters;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)performInitialButtonUpActions;
- (void)performLongPressActions;
- (void)performLongPressCancelledActions;
- (_Bool)_shouldIgnorePressesDueToProxOrIdle:(id *)arg1;
- (_Bool)_performButtonPreflightActions;
- (void)_logMenuButtonHoldTime;
- (id)initWitHomeButtonType:(long long)arg1;
- (void)configureForwardingToLockButtonActions:(id)arg1;
- (void)performDoublePressDownActions;
- (void)performTriplePressUpActions;
- (void)performDoubleTapUpActions;
- (void)performWhenMenuButtonIsUpUsingBlock:(CDUnknownBlockType)arg1;

@end
