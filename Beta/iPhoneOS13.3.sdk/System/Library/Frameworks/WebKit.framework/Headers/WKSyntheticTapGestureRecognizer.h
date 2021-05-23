/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITapGestureRecognizer.h>

@class NSNumber, UIScrollView, UIWebTouchEventsGestureRecognizer;

__attribute__((visibility("hidden")))
@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer

{
    id _gestureIdentifiedTarget;
    SEL _gestureIdentifiedAction;
    id _gestureFailedTarget;
    SEL _gestureFailedAction;
    id _resetTarget;
    SEL _resetAction;
    struct RetainPtr<NSNumber> _lastActiveTouchIdentifier;
    struct WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
    UIWebTouchEventsGestureRecognizer *_supportingWebTouchEventsGestureRecognizer;
}

@property (weak, nonatomic) UIWebTouchEventsGestureRecognizer *supportingWebTouchEventsGestureRecognizer;
@property (nonatomic, readonly) NSNumber *lastActiveTouchIdentifier;
@property (weak, nonatomic, readonly) UIScrollView *lastTouchedScrollView;

- (void)reset;
- (id).cxx_construct;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2;
- (void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2;
- (void)setResetTarget:(id)arg1 action:(SEL)arg2;

@end
