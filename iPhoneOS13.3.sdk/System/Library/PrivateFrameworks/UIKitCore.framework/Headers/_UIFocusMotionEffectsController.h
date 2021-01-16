//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusMotionEffectsController : NSObject
{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    CGPoint _displayOffset;
    double _displayMovementAdjustment;
    BOOL _displayOffsetAccumulatorEnabled;
    CGPoint _currentOffset;
}

@property(nonatomic) BOOL displayOffsetAccumulatorEnabled; // @synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled;
@property(readonly, nonatomic) CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGPoint displayOffset;
- (void)cancelRollbackAnimation;
- (void)startRollbackAnimationFasterConvergence;
- (void)startRollbackAnimation;
- (void)reset;
- (void)resetDisplayOffsetAccumulationFactor;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)updateCurrentOffset:(CGPoint)arg1 overrideDisplayOffset:(id)arg2;
- (void)updateCurrentOffset:(CGPoint)arg1;
- (id)init;

@end
