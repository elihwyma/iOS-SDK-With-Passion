/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect

{
    double _maximumHorizontalTiltAngle;
    double _maximumVerticalTiltAngle;
    double _rotatingSphereRadius;
}

@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;

@end
