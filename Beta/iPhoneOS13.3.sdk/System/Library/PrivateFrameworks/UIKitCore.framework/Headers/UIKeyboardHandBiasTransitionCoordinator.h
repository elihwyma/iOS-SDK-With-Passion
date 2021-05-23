/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIKeyboardHandBiasTransitionContext, UIKeyboardSquishTransition, UIPanGestureRecognizer;

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <Swift>

{
    _Bool _edgeSwipeDetected;
    _Bool _transitionDidBegin;
    unsigned long long _transitionStartEdge;
    long long _initialBias;
    long long _transitionTargetBias;
    double _initialEdgeTranslation;
    double _edgeSwipeProgress;
    double _edgeSwipeVelocity;
    _Bool _interactive;
    id <UIKeyboardHandBiasTransitionCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIKeyboardSquishTransition *_currentTransition;
    double _swipeWidthRatio;
    UIKeyboardHandBiasTransitionContext *_currentContext;
}

@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIKeyboardSquishTransition *currentTransition;
@property (retain, nonatomic) UIKeyboardHandBiasTransitionContext *currentContext;
@property (weak, nonatomic) id <UIKeyboardHandBiasTransitionCoordinatorDelegate> delegate;
@property (nonatomic) double swipeWidthRatio;
@property (nonatomic, getter=isInteractive) _Bool interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)installGestureRecognizers;
- (void)uninstallGestureRecognizers;
- (void)_handBiasPanGestureRecognizerStateDidChange:(id)arg1;
- (void)beginHandBiasTransitionWithContext:(id)arg1;
- (void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)arg1 withDistance:(double)arg2;
- (void)finishHandBiasTransition;

@end
