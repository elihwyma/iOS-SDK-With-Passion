/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Preferences/PSKeychainSyncSecurityCodeController.h>

@interface CDPSingleICSCEntryViewController : PSKeychainSyncSecurityCodeController

- (void)viewDidDisappear:(_Bool)arg1;
- (void)forgotSecurityCode;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;

@end
