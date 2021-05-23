/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UIFocusAnimationConfiguration : NSObject <Swift>

{
    double _focusingBaseDuration;
    double _unfocusingBaseDuration;
    unsigned long long _animationOptions;
    double _focusingDurationScaleFactorLowerBound;
    double _focusingDurationScaleFactorUpperBound;
    double _unfocusingDurationScaleFactorLowerBound;
    double _unfocusingDurationScaleFactorUpperBound;
    double _minimumFocusDuration;
    double _unfocusingRepositionBaseDuration;
    double _unfocusingBackgroundFadeDurationPercentage;
    double _focusingDelay;
}

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double focusingDurationScaleFactorLowerBound;
@property (nonatomic) double focusingDurationScaleFactorUpperBound;
@property (nonatomic) double unfocusingDurationScaleFactorLowerBound;
@property (nonatomic) double unfocusingDurationScaleFactorUpperBound;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) double unfocusingRepositionBaseDuration;
@property (nonatomic) double unfocusingBackgroundFadeDurationPercentage;
@property (nonatomic) double focusingDelay;
@property (nonatomic) double focusingBaseDuration;
@property (nonatomic) double unfocusingBaseDuration;

+ (id)configurationWithStyle:(long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;

@end
