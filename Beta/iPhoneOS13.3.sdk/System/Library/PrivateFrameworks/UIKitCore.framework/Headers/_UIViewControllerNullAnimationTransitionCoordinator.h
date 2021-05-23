/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject

{
    _Bool _transitionIsInFlight;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    UIView *_containerView;
}

@property (nonatomic) UIView *containerView;
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
@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)viewControllerForKey:(id)arg1;
- (_Bool)isRotating;
- (id)viewForKey:(id)arg1;
- (void)_runAlongsideAnimations;
- (void)_runAlongsideCompletionsAfterCommit;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(_Bool)arg2 systemCompletion:(_Bool)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_mainContext;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_runAlongsideCompletions;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_alongsideAnimations:(_Bool)arg1;
- (id)_alongsideCompletions:(_Bool)arg1;
- (void)_runAlongsideCompletionsAndClearAlongsideAnimations;

@end
