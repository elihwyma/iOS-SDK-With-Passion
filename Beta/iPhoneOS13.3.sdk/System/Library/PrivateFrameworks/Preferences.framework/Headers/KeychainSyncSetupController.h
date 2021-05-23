/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSKeychainSyncManager;

@interface KeychainSyncSetupController

{
    PSKeychainSyncManager *_manager;
}

- (id)initWithManager:(id)arg1;
- (void)showController:(id)arg1;
- (void)cancelPressed;

@end
