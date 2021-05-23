/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation

{
    CDUnknownBlockType _applier;
    NSMutableArray *_animations;
    NSMutableArray *_runningAnimations;
}

@property (copy, nonatomic) NSArray *animations;

- (void)dealloc;
- (_Bool)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAnimation:(id)arg1;
- (void)removeAnimation:(id)arg1;

@end
