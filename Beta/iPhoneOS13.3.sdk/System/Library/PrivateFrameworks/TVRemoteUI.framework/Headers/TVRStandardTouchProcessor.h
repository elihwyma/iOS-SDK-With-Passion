/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <TVRemoteUI/TVRTouchProcessor.h>

@class NSTimer, UITapGestureRecognizer;

@interface TVRStandardTouchProcessor : TVRTouchProcessor

{
    long long _clickVirtualizerState;
    struct CGPoint _touchBeganLocation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSTimer *_clickVirtualizerTimer;
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setTouchpadView:(id)arg1;
- (void)_tap:(id)arg1;
- (void)_touchpadClickVirtualizerTimerFired:(id)arg1;

@end
