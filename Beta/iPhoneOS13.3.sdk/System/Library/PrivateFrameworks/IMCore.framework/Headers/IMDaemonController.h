/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMDaemonListener, IMLocalObject, IMRemoteObject, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSRecursiveLock, NSString;

@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;

@interface IMDaemonController : NSObject

{
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource *_runLoopSource;
    NSLock *_blockingLock;
    _Bool _hasCheckedForDaemon;
    _Bool _preventReconnect;
    _Bool _inBlockingConnect;
    _Bool _acquiringDaemonConnection;
    _Bool _autoReconnect;
    _Bool _blocksConnectionAtResume;
    _Bool _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
    _Bool _requestingConnection;
    NSMutableDictionary *_requestQOSClassCompletionBlocks;
    CDUnknownBlockType _prewarmingBlock;
}

@property (setter=__setCapabilities:) unsigned int _capabilities;
@property (setter=_setAutoReconnect:) _Bool _autoReconnect;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_remoteMessageQueue;
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow;
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny;
@property (retain, nonatomic, setter=_setListenerID:) NSString *_listenerID;
@property (weak, nonatomic) id delegate;
@property (nonatomic, setter=_setBlocksConnectionAtResume:) _Bool _blocksConnectionAtResume;
@property (nonatomic, readonly) _Bool isConnecting;
@property (nonatomic, readonly, getter=isRequestingConnection) _Bool requestingConnection;
@property (retain, nonatomic) NSMutableDictionary *requestQOSClassCompletionBlocks;
@property (copy, nonatomic) CDUnknownBlockType prewarmingBlock;
@property (nonatomic, readonly) IMDaemonListener *listener;
@property (nonatomic, readonly) _Bool isConnected;
@property (nonatomic, readonly) unsigned int capabilities;

+ (id)sharedInstance;
+ (id)sharedController;
+ (void)_blockUntilSendQueueIsEmpty;
+ (_Bool)_applicationWillTerminate;
+ (void)_setApplicationWillTerminate;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidResume;
- (void)_localObjectCleanup;
- (void)_remoteObjectCleanup;
- (_Bool)remoteObjectExists;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (_Bool)localObjectExists;
- (void)_disconnectFromDaemonWithForce:(_Bool)arg1;
- (_Bool)_makeConnectionWithLaunch:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
- (void)disconnectFromDaemon;
- (_Bool)hasListenerForID:(id)arg1;
- (void)_listenerSetUpdated;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (_Bool)connectToDaemon;
- (void)_handleDaemonException:(id)arg1;
- (_Bool)removeListenerID:(id)arg1;
- (void)blockUntilConnected;
- (void)_noteSetupComplete;
- (void)_agentDidLaunchNotification:(id)arg1;
- (id)_remoteObject;
- (_Bool)_acquiringDaemonConnection;
- (void)killDaemon;
- (_Bool)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;
- (void)_addressBookChanged:(id)arg1;
- (double)_connectionTimeout;
- (void)sendABInformationToDaemon;
- (void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg1;
- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;
- (_Bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)_connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2;
- (_Bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)requestQOSClassOfAgentWhileServicingRequests:(CDUnknownBlockType)arg1;
- (void)disconnectFromDaemonWithForce:(_Bool)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)setDaemonTerminatesWithoutListeners:(_Bool)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(_Bool)arg1;

@end
