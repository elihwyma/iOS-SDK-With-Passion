/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FIUIDeepBreathingPetalRingGLView, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface FIUIDeepBreathingFlowerView : UIView

{
    NSMutableDictionary *_petalRingsByNumberOfPetals;
    FIUIDeepBreathingPetalRingGLView *_currentPetalRing;
    long long _numberOfVisiblePetals;
    _Bool _showBlurTrails;
    UILabel *_congratulationsLabel;
    NSString *_congratulationsText;
    long long _state;
    double _stateStartTime;
    double _stateEndTime;
    double _sessionDuration;
    double _breathsPerMinute;
    double _petalCountOverride;
    NSMutableArray *_trailAlphaKeyFrames;
    NSMutableArray *_trailAlphaKeyValues;
    double _centerVerticalOffsetBeforeTransitionToConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_setState:(long long)arg1;
- (void)_preloadPetalRings;
- (id)_petalRingWithNumberOfShaderPetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)_updateShaderForNumberOfPetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)_setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (id)_currentPetalRing;
- (void)_updateForShrinkToOnRampWithFractionComplete:(double)arg1;
- (void)_updateForOnRampWithTimeInState:(double)arg1;
- (void)_updateForGuidingWithTimeInState:(double)arg1;
- (void)_updateForCongratulationsWithTimeInState:(double)arg1 fractionComplete:(double)arg2;
- (void)_updateForUnwindToCompletedWithFractionComplete:(double)arg1;
- (void)_updateForWindToConfigurationWithFractionComplete:(double)arg1;
- (void)_setWindFraction:(double)arg1 smallRadius:(double)arg2 largeRadius:(double)arg3 windType:(long long)arg4 showBlurTrails:(_Bool)arg5;
- (void)_createCongratulationsLabelIfNeeded;
- (void)_updatePetalsInRange:(struct _NSRange)arg1 radius:(double)arg2 radialDistance:(double)arg3 angleOffset:(double)arg4 clockwise:(_Bool)arg5 alpha:(float)arg6;
- (double)_petalCountForMinutesRemaining:(double)arg1;
- (void)_updateForBreathWithPetalCount:(long long)arg1 petalRadius:(double)arg2 inhaleDuration:(double)arg3 exhaleDuration:(double)arg4 timeInCurrentBreath:(double)arg5 showBlurTrails:(_Bool)arg6 shouldSpin:(_Bool)arg7;
- (double)_curveEaseInValue:(double)arg1;
- (struct CGPoint)_originalRingCenterForWindType:(long long)arg1;
- (void)petalRingGLViewDisplayLinkDidFire:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 congratulationsText:(id)arg2;
- (void)setWelcomeWindFraction:(double)arg1;
- (void)transitionToConfigurationAnimated:(_Bool)arg1;
- (void)setNumberOfConfigurationPetals:(double)arg1;
- (void)startOnRampAtDate:(id)arg1 sessionDuration:(double)arg2;
- (void)startGuidingAtDate:(id)arg1 breathsPerMinute:(double)arg2;
- (void)transitionToCongratulations;
- (void)transitionToCompletedWithDuration:(double)arg1;
- (float)_interpolateWithKeyFrames:(id)arg1 keyValues:(id)arg2 value:(float)arg3;
- (void)_ppt_setPetalCountOverride:(long long)arg1;

@end
