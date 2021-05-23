/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIView.h>

@class NSString, TVRCPINEntryAttributes, UILabel, UIVisualEffectView, _TVRMAlertButton, _TVRPasscodeField;

@protocol _TVRAlertViewDelegate;

@interface _TVRAlertView : UIView

{
    id <_TVRAlertViewDelegate> _delegate;
    UIView *_blendModeView;
    UIVisualEffectView *_effectView;
    UIView *_hairlineView;
    UILabel *_titleLabel;
    _TVRPasscodeField *_passcodeField;
    _TVRMAlertButton *_cancelButton;
}

@property (retain, nonatomic) UIView *blendModeView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *hairlineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _TVRPasscodeField *passcodeField;
@property (retain, nonatomic) _TVRMAlertButton *cancelButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (weak, nonatomic) id <_TVRAlertViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_cancelButton:(id)arg1;
- (void)_pinTextDidChange:(id)arg1;
- (void)_passcodeFieldTapped;

@end
