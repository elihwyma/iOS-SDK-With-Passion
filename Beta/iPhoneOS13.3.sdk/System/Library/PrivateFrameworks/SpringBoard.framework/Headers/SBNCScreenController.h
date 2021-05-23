/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CMPocketStateManager, DNDEventBehaviorResolutionService, NSString, SBBacklightController, SBLockScreenManager, SBLockStateAggregator;

@interface SBNCScreenController : NSObject

{
    _Bool _turnOnScreenForOutOfPocketEvent;
    unsigned int _powerAssertionID;
    SBBacklightController *_backlightController;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    CMPocketStateManager *_pocketStateManager;
    NSString *_powerAssertionName;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (retain, nonatomic) SBBacklightController *backlightController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (nonatomic) _Bool turnOnScreenForOutOfPocketEvent;
@property (copy, nonatomic) NSString *powerAssertionName;
@property (nonatomic) unsigned int powerAssertionID;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)_releasePowerAssertion;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)turnOnScreenForNotificationRequest:(id)arg1;
- (void)turnOnScreenIfPossibleForNotificationRequest:(id)arg1;
- (_Bool)_isDeviceUILocked;
- (void)_turnOnScreenForPocketMode;
- (void)_turnOnScreen;
- (_Bool)canTurnOnScreenForNotificationRequest:(id)arg1;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1;
- (void)_createOrResetPowerAssertionWithTimeout:(double)arg1;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (id)initWithBackLightController:(id)arg1 lockScreenManager:(id)arg2 lockStateAggregator:(id)arg3;

@end
