/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface _TVNonFocusSwipeUpCapture : NSObject

{
    UIView *_initiallyFocusedView;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    UIPanGestureRecognizer *_gestureRecognizer;
    id _target;
    SEL _action;
}

@property (nonatomic, readonly) UIPanGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_onPan:(id)arg1;

@end
