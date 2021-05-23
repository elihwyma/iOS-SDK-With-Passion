/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;

__attribute__((visibility("hidden")))
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer

{
    id <_UIFocusEnginePanGestureTouchObserver> _touchObserver;
}

@property (weak, nonatomic) id <_UIFocusEnginePanGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id <_UIFocusEnginePanGestureTouchObserver> touchObserver;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
