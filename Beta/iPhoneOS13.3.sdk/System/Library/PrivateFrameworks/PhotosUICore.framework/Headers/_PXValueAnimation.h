/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface _PXValueAnimation : NSObject

{
    double _duration;
    double _startTime;
    double _currentMediaTime;
    struct _PXValueAnimationSpec _spec;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct _PXValueAnimationSpec spec;
@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) _Bool completed;
@property (nonatomic) double startTime;
@property (nonatomic) double currentMediaTime;

- (id)init;
- (id)description;
- (double)elapsedTime;
- (double)remainingTime;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;

@end
