/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar

{
    TPButton *_button2;
}

- (void)layoutSubviews;
- (double)_buttonWidth;
- (void)_layoutButtons;
- (void)setButton:(id)arg1 andStyle:(_Bool)arg2;
- (void)setButton2:(id)arg1 andStyle:(_Bool)arg2;
- (id)button2;

@end
