/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDefaultProximityBacklightPolicy.h>

@class NSString, SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, SBProximitySettings, _SBProximityTouchHandlingViewController, _SBProximityTouchHandlingWindow;

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy

{
    _Bool _objectInProximity;
    _SBProximityTouchHandlingWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    unsigned long long _timesEnabledWithObjectInProximity;
    unsigned long long _touchesReceivedWithObjectInProximity;
    SBProximitySettings *_lazy_proximitySettings;
}

@property (retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didHitAllowedRegion:(struct CGPoint)arg1;
- (id)initWithBacklightController:(id)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (id)_createNewEnablementCondition;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(_Bool)arg1;
- (void)_setHandleTouchesIfNecessary:(_Bool)arg1;
- (void)condition:(id)arg1 enablementDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;

@end
