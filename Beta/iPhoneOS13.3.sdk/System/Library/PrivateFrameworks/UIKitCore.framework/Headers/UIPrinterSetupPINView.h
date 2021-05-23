/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSString, UIImageView, UILabel, UIPasscodeField, UITextField;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINView : UIControl

{
    UILabel *_titleLabel;
    UILabel *_enterLabel;
    UIPasscodeField *_passcodeField;
    UITextField *_textEntryField;
    UILabel *_failedLabel;
    UIImageView *_failedBackground;
    long long _failedAttemptCount;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIPasscodeField *passcodeField;
@property (retain, nonatomic) UITextField *textEntryField;
@property (retain, nonatomic) UILabel *failedLabel;
@property (retain, nonatomic) UIImageView *failedBackground;
@property (nonatomic) long long failedAttemptCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)textDidChange:(id)arg1;
- (id)initWithPrinterName:(id)arg1;
- (void)startPINInput;
- (void)stopPINInput;
- (id)PIN;
- (void)showSuccess:(_Bool)arg1;

@end
