/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIMotionEffect.h>

@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect

{
    NSArray *_motionEffects;
}

@property (copy, nonatomic) NSArray *motionEffects;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;

@end
