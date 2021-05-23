/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSystemGestureManager.h>

@class SBGestureDefaults, SBHomeGestureParticipant;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager

{
    SBGestureDefaults *_gestureDefaults;
    _Bool _multitaskingGesturesEnabled;
    SBHomeGestureParticipant *_accessibilityHomeGestureParticipant;
}

@property (retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setSystemGesturesDisabledForAccessibility:(_Bool)arg1;
- (void)_evaluateEnablement;
- (id)_initWithDisplayIdentity:(id)arg1;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (void)_updateUserPreferences;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (_Bool)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint)arg1;

@end
