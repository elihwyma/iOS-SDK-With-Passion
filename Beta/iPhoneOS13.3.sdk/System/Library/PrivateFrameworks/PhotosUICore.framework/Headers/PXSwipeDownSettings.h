/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXSwipeDownSettings : PXSettings

{
    _Bool _rotationOnHorizontalMotion;
    _Bool _rotationOnVerticalMotion;
    double _downGestureToleranceAngle;
    double _upGestureToleranceAngle;
    long long _horizontalMotionType;
    double _horizontalResistanceDistance;
    long long _downMotionType;
    double _downResistanceDistance;
    long long _upMotionType;
    double _upResistanceDistance;
    double _scaleDownFactor;
    double _scaleDownDistance;
    double _rotationHorizontalMotionFactor;
    double _rotationHorizontalMotionHysteresisDistance;
    double _rotationVerticalMotionAngle;
    double _rotationVerticalMotionResistanceDistance;
    double _rotationMaximumAngle;
    double _transitionDistance;
}

@property (nonatomic) double downGestureToleranceAngle;
@property (nonatomic) double upGestureToleranceAngle;
@property (nonatomic) long long horizontalMotionType;
@property (nonatomic) double horizontalResistanceDistance;
@property (nonatomic) long long downMotionType;
@property (nonatomic) double downResistanceDistance;
@property (nonatomic) long long upMotionType;
@property (nonatomic) double upResistanceDistance;
@property (nonatomic) double scaleDownFactor;
@property (nonatomic) double scaleDownDistance;
@property (nonatomic) _Bool rotationOnHorizontalMotion;
@property (nonatomic) double rotationHorizontalMotionFactor;
@property (nonatomic) double rotationHorizontalMotionHysteresisDistance;
@property (nonatomic) _Bool rotationOnVerticalMotion;
@property (nonatomic) double rotationVerticalMotionAngle;
@property (nonatomic) double rotationVerticalMotionResistanceDistance;
@property (nonatomic) double rotationMaximumAngle;
@property (nonatomic) double transitionDistance;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
