/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBUIBackgroundView;

@protocol SBUIPasscodeLockView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView

{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    SBUIBackgroundView *_backgroundView;
}

@property (nonatomic, readonly) UIView<SBUIPasscodeLockView> *passcodeView;

- (void)layoutSubviews;
- (void)setBlurEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(CDUnknownBlockType)arg3;

@end
