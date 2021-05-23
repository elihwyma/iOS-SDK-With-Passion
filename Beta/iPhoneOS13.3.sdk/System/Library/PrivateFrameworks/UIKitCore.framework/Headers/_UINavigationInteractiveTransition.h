/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class UIScreenEdgePanGestureRecognizer, _UIParallaxTransitionPanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase

{
    _UIParallaxTransitionPanGestureRecognizer *_edgePanRecognizer;
}

@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)startInteractiveTransition;
- (id)initWithViewController:(id)arg1 animator:(id)arg2;
- (void)_setShouldReverseLayoutDirection:(_Bool)arg1;
- (void)setNotInteractiveTransition;
- (id)gestureRecognizerView;
- (void)_configureNavigationGesture;

@end
