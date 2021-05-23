/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSwipeTransitionController : NSObject

{
    struct ViewGestureController *_gestureController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _forwardTransitionController;
    struct WeakObjCPtr<UIView> _gestureRecognizerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id).cxx_construct;
- (void)startInteractiveTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (_Bool)shouldBeginInteractiveTransition:(id)arg1;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (int)directionForTransition:(id)arg1;
- (id)initWithViewGestureController:(struct ViewGestureController *)arg1 gestureRecognizerView:(id)arg2;
- (id)transitionForDirection:(int)arg1;
- (_Bool)isNavigationSwipeGestureRecognizer:(id)arg1;

@end
