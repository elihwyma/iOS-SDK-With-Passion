/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <PrototypeTools/PTSettings.h>

@interface SFMagicHeadSettings : PTSettings

{
    _Bool _showRangingValues;
    _Bool _showSelectionGateLock;
    _Bool _showSelectionMarkers;
    _Bool _selectionDisabled;
    _Bool _rollEnabled;
    _Bool _guidanceEnabled;
    _Bool _rotationGatedSelectionEnabled;
    _Bool _hapticForCozyUpSelectionEnabled;
    _Bool _cozyUpAnimationEnabled;
    _Bool _selectedPulseEnabled;
    double _tapDarkeningAlpha;
    double _circlesFadeInDurationS;
    double _circlesFadeOutDurationS;
    double _rollMaxDegrees;
    double _rollRubberbandingStretchiness;
    double _guidanceGoodAngleThreshold;
    double _guidanceWorstAngleDegreesDelta;
    double _guidanceDipSpeed;
    double _guidanceRubberbandingStretchiness;
    double _guidanceFadeHeadDegrees;
    double _guidanceRestoreHeadDegreesDelta;
    double _guidanceTooFarDegrees;
    double _guidanceRecoveredDegreesDelta;
    double _guidanceTiltedTooFarAlpha;
    double _guidanceSuppressHapticsEnabled;
    double _guidanceSuppressHapticsDurationS;
    double _guidanceContractDotsHapticEnabled;
    double _guidanceExpandDotsHapticEnabled;
    double _rotationGateThresholdDegrees;
    long long _rotationStartGatingResponsiveness;
    long long _rotationStopGatingResponsiveness;
    long long _rotationStartBigHeadGatingResponsiveness;
    long long _rotationStopBigHeadGatingResponsiveness;
    double _selectionScaleFriction;
    double _selectionAlphaFriction;
    double _selectionPositionFriction;
    double _dismissScaleFriction;
    double _dismissAlphaFriction;
    double _dismissPositionFriction;
    double _cozyUpSelectDurationS;
    double _selectedPulseScaleAmount;
    double _selectedPulseDurationS;
}

@property (nonatomic) _Bool showRangingValues;
@property (nonatomic) _Bool showSelectionGateLock;
@property (nonatomic) _Bool showSelectionMarkers;
@property (nonatomic) _Bool selectionDisabled;
@property (nonatomic) double tapDarkeningAlpha;
@property (nonatomic) double circlesFadeInDurationS;
@property (nonatomic) double circlesFadeOutDurationS;
@property (nonatomic) _Bool rollEnabled;
@property (nonatomic) double rollMaxDegrees;
@property (nonatomic) double rollRubberbandingStretchiness;
@property (nonatomic) _Bool guidanceEnabled;
@property (nonatomic) double guidanceGoodAngleThreshold;
@property (nonatomic) double guidanceWorstAngleDegreesDelta;
@property (nonatomic) double guidanceDipSpeed;
@property (nonatomic) double guidanceRubberbandingStretchiness;
@property (nonatomic) double guidanceFadeHeadDegrees;
@property (nonatomic) double guidanceRestoreHeadDegreesDelta;
@property (nonatomic) double guidanceTooFarDegrees;
@property (nonatomic) double guidanceRecoveredDegreesDelta;
@property (nonatomic) double guidanceTiltedTooFarAlpha;
@property (nonatomic) double guidanceSuppressHapticsEnabled;
@property (nonatomic) double guidanceSuppressHapticsDurationS;
@property (nonatomic) double guidanceContractDotsHapticEnabled;
@property (nonatomic) double guidanceExpandDotsHapticEnabled;
@property (nonatomic) _Bool rotationGatedSelectionEnabled;
@property (nonatomic) double rotationGateThresholdDegrees;
@property (nonatomic) long long rotationStartGatingResponsiveness;
@property (nonatomic) long long rotationStopGatingResponsiveness;
@property (nonatomic) long long rotationStartBigHeadGatingResponsiveness;
@property (nonatomic) long long rotationStopBigHeadGatingResponsiveness;
@property (nonatomic) double selectionScaleFriction;
@property (nonatomic) double selectionAlphaFriction;
@property (nonatomic) double selectionPositionFriction;
@property (nonatomic) double dismissScaleFriction;
@property (nonatomic) double dismissAlphaFriction;
@property (nonatomic) double dismissPositionFriction;
@property (nonatomic) _Bool hapticForCozyUpSelectionEnabled;
@property (nonatomic) _Bool cozyUpAnimationEnabled;
@property (nonatomic) double cozyUpSelectDurationS;
@property (nonatomic) _Bool selectedPulseEnabled;
@property (nonatomic) double selectedPulseScaleAmount;
@property (nonatomic) double selectedPulseDurationS;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
