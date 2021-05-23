/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBAppSwitcherOrbGestureAnimationSettings;

@interface SBAppSwitcherOrbGestureSettings : PTSettings

{
    _Bool _useOrbGesture;
    _Bool _canPop;
    _Bool _forceDrivesInitialProgress;
    _Bool _canPlayInitialHaptic;
    _Bool _canPlayCommitHaptic;
    double _orbGestureRegionMax;
    double _maxIconScrollProgressAllowed;
    double _appToAppCurveMinimum;
    double _homeToAppCurveMinimum;
    double _minPanTranslation;
    double _maxPopPanTranslation;
    double _additionalThrowDisplacement;
    double _commitToPreviousAppTranslation;
    double _commitToNextAppTranslation;
    double _dimmingValue;
    double _forcePeekAdjustApex;
    double _forceAdjustMax;
    double _maxAverageBreathingVelocity;
    double _maxBreathingVelocityInterval;
    SBAppSwitcherOrbGestureAnimationSettings *_animationSettings;
}

@property _Bool useOrbGesture;
@property double orbGestureRegionMax;
@property double maxIconScrollProgressAllowed;
@property double appToAppCurveMinimum;
@property double homeToAppCurveMinimum;
@property double minPanTranslation;
@property double maxPopPanTranslation;
@property double additionalThrowDisplacement;
@property double commitToPreviousAppTranslation;
@property double commitToNextAppTranslation;
@property double dimmingValue;
@property double forcePeekAdjustApex;
@property double forceAdjustMax;
@property double maxAverageBreathingVelocity;
@property double maxBreathingVelocityInterval;
@property _Bool canPop;
@property _Bool forceDrivesInitialProgress;
@property _Bool canPlayInitialHaptic;
@property _Bool canPlayCommitHaptic;
@property (retain) SBAppSwitcherOrbGestureAnimationSettings *animationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)valueAlongDefaultForcePressCurveWithMinY:(double)arg1 progress:(double)arg2 fromHomeScreen:(_Bool)arg3;

@end
