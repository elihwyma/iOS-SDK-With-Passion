/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupDisplayPINView : UIView

{
    UILabel *_titleLabel;
    UIButton *_nextButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1 showButton:(_Bool)arg2;

@end
