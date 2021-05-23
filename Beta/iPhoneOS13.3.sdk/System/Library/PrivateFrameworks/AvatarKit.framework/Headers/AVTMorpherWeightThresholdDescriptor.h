/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@interface AVTMorpherWeightThresholdDescriptor : NSObject

{
    _Bool _animateAbove;
    _Bool _isAnimatingUp;
    _Bool _animateBelow;
    _Bool _isAnimatingDown;
    float _thresholdWeight;
    float _animationDuration;
}

@property (nonatomic) float thresholdWeight;
@property (nonatomic) float animationDuration;
@property (nonatomic) _Bool animateAbove;
@property (nonatomic) _Bool isAnimatingUp;
@property (nonatomic) _Bool animateBelow;
@property (nonatomic) _Bool isAnimatingDown;

@end
