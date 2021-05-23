/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIViewAnimationState;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject

{
    _Bool _didBeginBlockAnimation;
    _Bool _allowUserInteraction;
    _Bool _isZeroDuration;
    _Bool _allowsUserInteractionToCutOffEndOfAnimation;
    _Bool _allowsHitTesting;
    _Bool _animationDidStopSent;
    CDUnknownBlockType _start;
    CDUnknownBlockType _completion;
    NSMutableArray *_systemPostAnimationActions;
    _Bool __forcingImmediateCompletion;
    UIViewAnimationState *_animationState;
}

@property (nonatomic, readonly) _Bool _allowsUserInteraction;
@property (nonatomic, setter=_setForcingImmediateCompletion:) _Bool _forcingImmediateCompletion;
@property (weak, nonatomic) UIViewAnimationState *_animationState;

+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (_Bool)_allowsHitTesting;
- (void)_sendDeferredCompletion:(id)arg1;

@end
