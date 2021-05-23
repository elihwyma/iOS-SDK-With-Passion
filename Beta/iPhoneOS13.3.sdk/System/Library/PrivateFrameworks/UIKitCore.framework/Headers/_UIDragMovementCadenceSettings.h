/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDragMovementCadenceSettings : NSObject

{
    double _velocityMagnitudeThreshold;
    double _dwellTimeThreshold;
}

@property (nonatomic) double velocityMagnitudeThreshold;
@property (nonatomic) double dwellTimeThreshold;

+ (id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2;

- (id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2;
- (void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1;
- (id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2;
- (void)_applyImmediateSettings;
- (void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1;

@end
