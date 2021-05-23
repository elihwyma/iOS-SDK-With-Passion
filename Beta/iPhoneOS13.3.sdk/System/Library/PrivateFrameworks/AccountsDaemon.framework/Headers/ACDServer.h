/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDDatabaseBackupActivity, ACDDataclassOwnersManager, ACRemoteDeviceProxy, NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;

@protocol ACDClientProviderProtocol, ACDDatabaseProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACDServer : NSObject

{
    struct os_unfair_lock_s _propertyLock;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_clientsByConnection;
    NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
    NSXPCListener *_accountStoreListener;
    NSXPCListener *_oauthSignerListener;
    NSXPCListener *_authenticationDialogListener;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACDAccountNotifier *_accountNotifier;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
    id <ACDClientProviderProtocol> _clientProvider;
    id <ACDDatabaseProtocol> _database;
    ACDDatabaseBackupActivity *_databaseBackupActivity;
}

@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager;
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier;
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (retain, nonatomic) id <ACDClientProviderProtocol> clientProvider;
@property (retain, nonatomic) id <ACDDatabaseProtocol> database;
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (nonatomic, readonly) NSXPCListener *accountStoreListener;
@property (nonatomic, readonly) NSXPCListener *oauthSignerListener;
@property (nonatomic, readonly) NSXPCListener *authenticationDialogListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)shutdown;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (void)accountStore:(id)arg1 didSaveAccount:(id)arg2;
- (id)initWithAccountStoreListener:(id)arg1 oauthSignerListener:(id)arg2 authenticationDialogListener:(id)arg3;
- (void)_beginObservingMigrationDidFinishDarwinNotifications;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_endObservingLanguageChangeNotification;
- (void)_endObservingMigrationDidFinishDarwinNotifications;
- (id)createClientForConnection:(id)arg1;
- (id)_keyForConnection:(id)arg1;
- (id)createDatabaseConnection;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)_newOAuthSignerForClient:(id)arg1;
- (id)clientForConnection:(id)arg1;
- (void)_handleLanguageChangedDarwinNotification;

@end
