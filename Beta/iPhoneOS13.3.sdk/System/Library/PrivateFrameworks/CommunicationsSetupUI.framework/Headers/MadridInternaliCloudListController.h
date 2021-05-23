/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class NSString;

@interface MadridInternaliCloudListController : PSListController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_startListeningForNotifications;
- (id)specifiers;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)setMessagesOniCloudEnabled:(id)arg1 specifier:(id)arg2;
- (id)messagesOniCloudEnabled:(id)arg1;
- (void)syncToiCloudNow:(id)arg1;
- (void)clearLocalSyncState:(id)arg1;
- (void)clearData:(id)arg1;

@end
