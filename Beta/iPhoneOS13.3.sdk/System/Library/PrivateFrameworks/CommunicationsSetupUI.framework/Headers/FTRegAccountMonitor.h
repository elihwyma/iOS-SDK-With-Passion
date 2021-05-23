/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class FTRegConnectionHandler, IMServiceImpl, NSArray;

@interface FTRegAccountMonitor : NSObject

{
    long long _serviceType;
    IMServiceImpl *_service;
    NSArray *_accounts;
    FTRegConnectionHandler *_connectionHandler;
    CDStruct_34e8bc21 _monitorFlags;
}

@property (nonatomic) long long serviceType;
@property (retain, nonatomic) IMServiceImpl *service;
@property (retain, nonatomic, readonly) NSArray *activeAccounts;

- (void)dealloc;
- (void)_startListeningForNotifications;
- (id)initWithServiceType:(long long)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (id)logName;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (void)_updateAccountState:(_Bool)arg1;
- (id)_activeAccounts;
- (_Bool)_shouldHandleAccountNofication:(id)arg1;

@end
