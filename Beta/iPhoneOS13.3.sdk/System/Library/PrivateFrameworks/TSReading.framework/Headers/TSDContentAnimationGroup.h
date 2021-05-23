/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContentAnimation.h>

@class CAMediaTimingFunction, NSArray;

@interface TSDContentAnimationGroup : TSDContentAnimation

{
    NSArray *_animations;
    CAMediaTimingFunction *_timingFunction;
    double _duration;
}

@property (copy, nonatomic) NSArray *animations;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void)dealloc;
- (_Bool)i_canProduceAnimation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;

@end
