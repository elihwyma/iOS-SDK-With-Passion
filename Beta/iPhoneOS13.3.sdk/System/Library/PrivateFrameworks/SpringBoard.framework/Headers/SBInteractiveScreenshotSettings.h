/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBInteractiveScreenshotSettings : PTSettings

{
    _Bool _enabled;
    _Bool _shouldAsynchronouslyRender;
    _Bool _shouldPreheat;
    _Bool _shouldInjectVelocity;
    double _cornerHorizontalEdgeLength;
    double _cornerVerticalEdgeLength;
    double _applicationTouchDelayHysteresis;
    double _cornerRadiusVisibleProgressThreshold;
    double _cropCornersVisibleProgressThreshold;
    double _cropLinesVisibleProgressThreshold;
    double _baseCornerTranslationDegrees;
    double _projectionDecelerationRate;
    double _rubberbandingRange;
    double _normalizedDistanceForCommitThreshold;
    double _horizontalTranslationFactor;
    double _verticalTranslationFactor;
    double _maximumInjectedVelocity;
    double _disabledGestureCancellationDistance;
    double _disabledGestureVelocityScale;
    SBFFluidBehaviorSettings *_contentAnimationSettings;
    SBFFluidBehaviorSettings *_disabledGestureContentAnimationSettings;
    SBFFluidBehaviorSettings *_cropsAnimationSettings;
    SBFFluidBehaviorSettings *_cropLinesAlphaAnimationSettings;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double cornerHorizontalEdgeLength;
@property (nonatomic) double cornerVerticalEdgeLength;
@property (nonatomic) _Bool shouldAsynchronouslyRender;
@property (nonatomic) _Bool shouldPreheat;
@property (nonatomic) double applicationTouchDelayHysteresis;
@property (nonatomic) double cornerRadiusVisibleProgressThreshold;
@property (nonatomic) double cropCornersVisibleProgressThreshold;
@property (nonatomic) double cropLinesVisibleProgressThreshold;
@property (nonatomic) double baseCornerTranslationDegrees;
@property (nonatomic) double projectionDecelerationRate;
@property (nonatomic) double rubberbandingRange;
@property (nonatomic) double normalizedDistanceForCommitThreshold;
@property (nonatomic) double horizontalTranslationFactor;
@property (nonatomic) double verticalTranslationFactor;
@property (nonatomic) _Bool shouldInjectVelocity;
@property (nonatomic) double maximumInjectedVelocity;
@property (nonatomic) double disabledGestureCancellationDistance;
@property (nonatomic) double disabledGestureVelocityScale;
@property (retain, nonatomic) SBFFluidBehaviorSettings *contentAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *disabledGestureContentAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropsAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropLinesAlphaAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
