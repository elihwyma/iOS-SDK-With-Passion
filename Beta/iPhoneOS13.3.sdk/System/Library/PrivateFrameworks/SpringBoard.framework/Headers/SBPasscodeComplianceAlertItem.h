/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem

{
    NSString *_title;
    NSString *_message;
    NSString *_continueButtonTitle;
    NSString *_cancelButtonTitle;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)shouldShowInLockScreen;
- (id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;

@end
