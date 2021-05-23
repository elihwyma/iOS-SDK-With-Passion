/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer

{
    struct RetainPtr<UITouch> _touch;
}

- (void)reset;
- (id).cxx_construct;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_processTouches:(id)arg1 state:(long long)arg2;

@end
