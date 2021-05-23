/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContentAnimation.h>

@class CAMediaTimingFunction, NSArray, TSDContentPath;

@interface TSDContentPathAnimation : TSDContentAnimation

{
    NSArray *_contentLocations;
    CAMediaTimingFunction *_timingFunction;
    NSArray *_keyTimes;
    NSArray *_timingFunctions;
    double _duration;
}

@property (copy, nonatomic) NSArray *contentLocations;
@property (copy, nonatomic) TSDContentPath *contentPath;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (copy, nonatomic) NSArray *keyTimes;
@property (copy, nonatomic) NSArray *timingFunctions;

- (void)dealloc;
- (_Bool)i_canProduceAnimation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;

@end
