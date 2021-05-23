/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIGestureRecognizer.h>

@interface PUTouchingGestureRecognizer : UIGestureRecognizer

{
    unsigned long long __touchCount;
}

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;

@end
