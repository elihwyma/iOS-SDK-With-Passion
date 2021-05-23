/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class FTRegConnectionHandler, IMAccount;

@interface CNFInternalAccountViewController : PSListController

{
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

@property (retain, nonatomic) IMAccount *account;

- (id)bundle;
- (id)initWithAccount:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_startListeningForNotifications;
- (id)specifiers;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (_Bool)isConnectedToDaemon;
- (id)specifierForAlias:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)accountType:(id)arg1;
- (id)accountDisplayName:(id)arg1;
- (id)registrationFailureReason:(id)arg1;
- (id)accountIsActive:(id)arg1;

@end
