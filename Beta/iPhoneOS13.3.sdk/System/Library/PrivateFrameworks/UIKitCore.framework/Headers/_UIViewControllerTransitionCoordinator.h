/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIView, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinator : NSObject

{
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__systemAlongsideAnimations;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property (nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext;
@property (retain, nonatomic, setter=_setSystemAlongsideAnimations:) NSMutableArray *_systemAlongsideAnimations;
@property (retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations;
@property (retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews;
@property (retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions;
@property (retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) _Bool initiallyInteractive;
@property (nonatomic, readonly) _Bool isInterruptible;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double completionVelocity;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)viewControllerForKey:(id)arg1;
- (_Bool)isRotating;
- (id)viewForKey:(id)arg1;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(_Bool)arg2 systemCompletion:(_Bool)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithMainContext:(id)arg1;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_systemAlongsideAnimations:(_Bool)arg1;
- (id)_alongsideAnimations:(_Bool)arg1;
- (id)_alongsideCompletions:(_Bool)arg1;
- (id)_interactiveChangeHandlers:(_Bool)arg1;
- (_Bool)isCompleting;
- (struct CGAffineTransform)affineTransform;

@end
