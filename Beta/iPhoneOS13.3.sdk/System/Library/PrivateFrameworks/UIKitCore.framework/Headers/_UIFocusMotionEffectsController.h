/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusMotionEffectsController : NSObject

{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    struct CGPoint _displayOffset;
    double _displayMovementAdjustment;
    _Bool _displayOffsetAccumulatorEnabled;
    struct CGPoint _currentOffset;
}

@property (nonatomic, readonly) struct CGPoint currentOffset;
@property (nonatomic, readonly) struct CGPoint displayOffset;
@property (nonatomic) _Bool displayOffsetAccumulatorEnabled;

- (id)init;
- (void)reset;
- (void)cancelRollbackAnimation;
- (void)updateCurrentOffset:(struct CGPoint)arg1;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)updateCurrentOffset:(struct CGPoint)arg1 overrideDisplayOffset:(id)arg2;
- (void)startRollbackAnimation;
- (void)startRollbackAnimationFasterConvergence;
- (void)resetDisplayOffsetAccumulationFactor;

@end
