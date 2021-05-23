/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@interface AVTMorpherWeightThresholdState : NSObject

{
    _Bool _isAnimating;
    _Bool _isFadingOutAnimation;
    float _currentValue;
    float _target;
    double _t0;
}

@property (nonatomic) _Bool isAnimating;
@property (nonatomic) _Bool isFadingOutAnimation;
@property (nonatomic) double t0;
@property (nonatomic) float currentValue;
@property (nonatomic) float target;

@end
