/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPBottomBar.h>

@class TPButton;

@interface TPBottomSingleButtonBar : TPBottomBar

{
    id _delegate;
    TPButton *_button;
}

+ (id)_backgroundImage;

- (id)button;
- (double)buttonWidth;
- (void)setButton:(id)arg1 andStyle:(_Bool)arg2;

@end
