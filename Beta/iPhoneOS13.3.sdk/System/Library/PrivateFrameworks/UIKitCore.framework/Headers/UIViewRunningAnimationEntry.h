/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIViewAnimationState;

@protocol OS_dispatch_queue, UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIViewRunningAnimationEntry : NSObject

{
    id <UIIntervalAnimating> _animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    CDUnknownBlockType _completionCallback;
    _Bool _invalidated;
    _Bool _running;
    UIViewAnimationState *_animationState;
    id <UIViewAnimationComposing> _composer;
}

@property (nonatomic) _Bool invalidated;
@property (nonatomic) _Bool running;
@property (weak, nonatomic) UIViewAnimationState *animationState;
@property (retain, nonatomic) id <UIViewAnimationComposing> composer;

- (void)performWithoutLock:(CDUnknownBlockType)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (id)initWithAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2 composer:(id)arg3;
- (void)performCompletionCallbackFinished:(_Bool)arg1;
- (void)setCompletionCallback:(CDUnknownBlockType)arg1;

@end
