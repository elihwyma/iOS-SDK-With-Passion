/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, UIViewPropertyAnimator;

@protocol SVFullscreenTransitionContext;

@interface SVFullscreenDismissalAnimator : NSObject

{
    UIViewPropertyAnimator *_animator;
    id <SVFullscreenTransitionContext> _context;
    UIView *_toView;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) id <SVFullscreenTransitionContext> context;
@property (retain, nonatomic) UIView *toView;
@property (nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)completeTransition:(_Bool)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateWithContext:(id)arg1;

@end
