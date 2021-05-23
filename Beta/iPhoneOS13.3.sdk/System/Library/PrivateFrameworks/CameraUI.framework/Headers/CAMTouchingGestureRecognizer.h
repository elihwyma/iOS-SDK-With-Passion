/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIGestureRecognizer.h>

@interface CAMTouchingGestureRecognizer : UIGestureRecognizer

{
    unsigned long long __touchCount;
}

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;

- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cancelGesture;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_updateStateFromTouchCount:(unsigned long long)arg1 toTouchCount:(unsigned long long)arg2;

@end
