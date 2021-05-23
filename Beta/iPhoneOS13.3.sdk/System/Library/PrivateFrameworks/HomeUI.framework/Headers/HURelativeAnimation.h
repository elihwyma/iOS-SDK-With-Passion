/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject

{
    HUAnimationApplier *_applier;
    double _relativeStart;
    double _relativeDuration;
}

@property (nonatomic, readonly) HUAnimationApplier *applier;
@property (nonatomic, readonly) double relativeStart;
@property (nonatomic, readonly) double relativeDuration;

- (id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;

@end
