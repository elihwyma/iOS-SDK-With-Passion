/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, UIKBKeyViewAnimator, UIKBTree, UIView;

@protocol UIKeyboardKeyplaneTransitionDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransition : NSObject

{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_keyboard;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    CDUnknownBlockType _completionBlock;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    _Bool _initiallyAtEnd;
    NSMutableArray *_transitionViews;
    UIKBKeyViewAnimator *_keyViewAnimator;
}

@property (retain, nonatomic) UIKBTree *keyboard;
@property (copy) CDUnknownBlockType completionBlock;
@property (nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> transitionDelegate;
@property (nonatomic) _Bool initiallyAtEnd;
@property (nonatomic, readonly) double nonInteractiveDuration;
@property (retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator;
@property (nonatomic, readonly) double startHeight;
@property (nonatomic, readonly) double endHeight;

- (void)dealloc;
- (void)removeAllAnimations;
- (void)cancelNonInteractiveAnimation;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithProgress:(double)arg1;
- (void)commitTransitionRebuild;
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeTransition;
- (void)transitionToFinalState:(id)arg1;
- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3;
- (_Bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;

@end
