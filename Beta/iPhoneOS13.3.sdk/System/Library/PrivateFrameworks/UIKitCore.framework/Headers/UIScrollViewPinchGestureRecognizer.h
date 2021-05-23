/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer

{
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    unsigned int _hasParentScrollView:1;
}

@property (weak, nonatomic) UIScrollView *scrollView;

- (void)setDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)_hysteresis;
- (_Bool)_analyticsIsGestureHandled;

@end
