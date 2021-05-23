/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer

{
    _Bool _suspended;
    long long _activeButton;
    NSArray *_desiredButtons;
    long long _physicalButtonType;
}

@property (nonatomic) long long physicalButtonType;
@property (nonatomic) long long activeButton;
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
- (long long)_captureButtonForPhysicalButtonType:(long long)arg1;

@end
