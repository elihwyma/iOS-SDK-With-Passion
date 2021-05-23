/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSKeychainSyncManager, UIButton;

@interface KeychainSyncSMSVerificationController

{
    UIButton *_footerButton;
    NSString *_phoneNumber;
    NSString *_dialingPrefix;
    NSString *_countryCode;
    PSKeychainSyncManager *_keychainSyncManager;
}

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *dialingPrefix;
@property (retain, nonatomic) NSString *countryCode;
@property (weak, nonatomic) PSKeychainSyncManager *keychainSyncManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)specifiers;
- (void)dismissAlerts;
- (void)showSupportVerification;

@end
