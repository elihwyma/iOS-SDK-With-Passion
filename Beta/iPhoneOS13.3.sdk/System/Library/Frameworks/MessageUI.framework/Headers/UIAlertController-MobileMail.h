/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIAlertController.h>

@interface UIAlertController (MobileMail)

+ (id)mf_notifyMeConfirmationControllerWithHandler:(CDUnknownBlockType)arg1;
+ (id)mf_muteConfirmationControllerWithHandler:(CDUnknownBlockType)arg1;
+ (id)mf_actionSheetWithTitle:(id)arg1 cancellationHandler:(CDUnknownBlockType)arg2;

- (void)mf_addCancelActionWithHandler:(CDUnknownBlockType)arg1;
- (void)mf_presentFromViewController:(id)arg1 withSource:(id)arg2;
- (void)mf_presentConfirmationSheetFromViewController:(id)arg1 withSource:(id)arg2;

@end
