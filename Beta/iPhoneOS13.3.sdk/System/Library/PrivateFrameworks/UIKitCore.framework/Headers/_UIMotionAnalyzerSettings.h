/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings

{
    _Bool _showIdleIndicator;
    _Bool _jumpEnabled;
    _Bool _playJumpSound;
    _Bool _directionalLockEnabled;
    _Bool _showDirectionalLockIndicators;
    _Bool _referenceShiftEnabled;
    double _inputSmoothingFactor;
    double _referenceShiftSpeed;
    double _idleLeeway;
    double _delayBeforeIdle;
    double _jumpThreshold;
    double _directionalLockThreshold;
    double _directionalLockStickiness;
    double _directionalLockSharpness;
    double _referenceShiftDistanceDependence;
}

@property double idleLeeway;
@property double delayBeforeIdle;
@property _Bool showIdleIndicator;
@property _Bool jumpEnabled;
@property double jumpThreshold;
@property _Bool playJumpSound;
@property _Bool directionalLockEnabled;
@property double directionalLockThreshold;
@property double directionalLockStickiness;
@property double directionalLockSharpness;
@property _Bool showDirectionalLockIndicators;
@property _Bool referenceShiftEnabled;
@property double referenceShiftDistanceDependence;
@property double inputSmoothingFactor;
@property double referenceShiftSpeed;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setDefaultValues;

@end
