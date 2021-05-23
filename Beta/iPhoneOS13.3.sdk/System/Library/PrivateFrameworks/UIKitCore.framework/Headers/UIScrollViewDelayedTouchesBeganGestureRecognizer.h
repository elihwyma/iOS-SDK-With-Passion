/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction, UIView;

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer

{
    UIDelayedAction *_touchDelay;
    struct CGPoint _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)sendDelayedTouches;
- (id)_clientView;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;

@end
