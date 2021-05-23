/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/_UIWebHighlightLongPressGestureRecognizer.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer

{
    struct WeakObjCPtr<UIScrollView> _lastTouchedScrollView;
}

@property (weak, nonatomic, readonly) UIScrollView *lastTouchedScrollView;

- (void)reset;
- (id).cxx_construct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
