/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMotionEffect.h>

@class UIInterpolatingMotionEffect, UIMotionEffectGroup, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect

{
    UIMotionEffectGroup *_group;
    struct UIOffset _slideMagnitude;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

@property (nonatomic) struct UIOffset slideMagnitude;
@property (nonatomic) double horizontalSlideAccelerationBoostFactor;
@property (nonatomic) double verticalSlideAccelerationBoostFactor;
@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (void)_updateGroupMotionEffect;
- (void)_activateTiltEffectIfNecessary;

@end
