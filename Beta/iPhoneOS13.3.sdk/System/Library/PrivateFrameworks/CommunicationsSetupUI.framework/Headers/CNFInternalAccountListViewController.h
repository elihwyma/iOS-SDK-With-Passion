/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class FTRegConnectionHandler, IMServiceImpl;

@interface CNFInternalAccountListViewController : PSListController

{
    IMServiceImpl *_service;
    FTRegConnectionHandler *_connectionHandler;
}

@property (retain, nonatomic) IMServiceImpl *service;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_startListeningForNotifications;
- (id)initWithServiceType:(long long)arg1;
- (id)specifiers;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (id)accountNameForSpecifier:(id)arg1;

@end
