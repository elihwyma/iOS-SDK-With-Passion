/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamics : NSObject

{
    _Bool _shouldRoundCalculations;
    struct CGSize _tolerance;
    struct CGPoint _decelerationTarget;
    struct CGPoint _initialContentOffset;
    struct CGVector _initialVelocity;
    struct CGPoint _contentOrigin;
    struct CGSize _viewSize;
    struct CGRect _contentFrame;
}

@property (nonatomic) _Bool shouldRoundCalculations;
@property (nonatomic, readonly) struct CGSize tolerance;
@property (nonatomic) struct CGPoint decelerationTarget;
@property (nonatomic) struct CGPoint initialContentOffset;
@property (nonatomic) struct CGVector initialVelocity;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) struct CGPoint contentOrigin;
@property (nonatomic) struct CGSize viewSize;
@property (nonatomic, readonly) double durationUntilStop;

- (id)init;
- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (id)initWithInitialContentOffset:(struct CGPoint)arg1 velocity:(struct CGVector)arg2 contentFrame:(struct CGRect)arg3 viewSize:(struct CGSize)arg4 screenScale:(double)arg5;
- (double)speedAfterDuration:(double)arg1;
- (struct CGVector)velocityAfterDuration:(double)arg1;
- (struct CGPoint)positionAfterDuration:(double)arg1;
- (_Bool)isRubberBandingAfterDuration:(double)arg1;
- (void)recalculateForDecelerationTarget:(struct CGPoint)arg1;

@end
