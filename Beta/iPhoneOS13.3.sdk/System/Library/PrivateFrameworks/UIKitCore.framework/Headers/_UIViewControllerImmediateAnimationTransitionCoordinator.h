/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewControllerImmediateAnimationTransitionCoordinator : NSObject

{
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *containerView;
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
- (id)initWithContainerView:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;

@end
