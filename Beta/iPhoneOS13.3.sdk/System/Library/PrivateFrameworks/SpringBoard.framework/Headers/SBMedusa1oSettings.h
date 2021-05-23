/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@interface SBMedusa1oSettings : PTSettings

{
    _Bool _debugRotationCenter;
    _Bool _debugColorRotationRegions;
    _Bool _clipRotationRegions;
    _Bool _fencesRotation;
    double _zoomOutRotationFactor;
    double _rotationSlowdownFactor;
    unsigned long long _millisecondsBetweenResizeSteps;
    double _gapSwipeBuffer;
}

@property (nonatomic) _Bool debugRotationCenter;
@property (nonatomic) _Bool debugColorRotationRegions;
@property (nonatomic) _Bool clipRotationRegions;
@property (nonatomic) double zoomOutRotationFactor;
@property (nonatomic) double rotationSlowdownFactor;
@property (nonatomic) _Bool fencesRotation;
@property (nonatomic) unsigned long long millisecondsBetweenResizeSteps;
@property (nonatomic) double gapSwipeBuffer;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
