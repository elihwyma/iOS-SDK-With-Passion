/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject

{
    CDUnknownBlockType _devicePasscodeVerificationCompletionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType devicePasscodeVerificationCompletionHandler;

+ (id)labelTextForAccountSummaryCell;
+ (id)titleForAccountSummaryGroup;
+ (id)deleteAccountGroupFooterText;
+ (id)warningTextForAccountDeletion;

- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)preflightsAccountDeletion:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_verifyDevicePasscodeWithPresentingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
