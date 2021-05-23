/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSSet;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer

{
    _Bool _suspended;
    NSSet *_activeButtons;
    long long _lastActiveButton;
    NSArray *_desiredButtons;
    long long _pressType;
}

@property (nonatomic) long long pressType;
@property (nonatomic) long long lastActiveButton;
@property (copy, nonatomic) NSSet *activeButtons;
@property (copy, nonatomic) NSArray *desiredButtons;
@property (nonatomic, getter=isSuspended) _Bool suspended;

- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updateApplicationButtonStatus;
- (long long)_captureButtonForPressType:(long long)arg1;

@end
