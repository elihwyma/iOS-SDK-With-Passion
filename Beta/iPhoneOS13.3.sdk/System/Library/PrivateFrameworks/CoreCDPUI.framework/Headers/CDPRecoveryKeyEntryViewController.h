/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Preferences/PSKeychainSyncSecurityCodeController.h>

@class CDPRecoveryKeyCreateHeaderView, CDPRecoveryKeyEntryViewModel, NSString;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController

{
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)headerView;
- (id)specifiers;
- (id)textEntryCell;
- (id)placeholderText;
- (void)didFinishEnteringText:(id)arg1;
- (_Bool)hidesNextButton;
- (id)initWithRecoveryContext:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)cancelFlow:(id)arg1;
- (id)footerActionButton;
- (void)continueFlow:(id)arg1;
- (id)footerTextLabel;
- (void)_handleRecoveryKeyValidationWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
