/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class CADDatabaseInitializationOptions, NSMutableDictionary, NSXPCConnection;

@protocol CADInterface, EKDaemonConnectionDelegate, OS_dispatch_queue;

@interface EKDaemonConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_connectionLock;
    id <CADInterface> _remoteOperationProxy;
    id <CADInterface> _syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    _Bool _registeredForStartNote;
    _Bool _wasAbortedDueToExcessiveConnctions;
    _Bool _hasEverConnected;
    NSXPCConnection *_xpcConnection;
    id <EKDaemonConnectionDelegate> _delegate;
    CADDatabaseInitializationOptions *_initializationOptions;
}

@property (nonatomic) _Bool hasEverConnected;
@property (retain, nonatomic, readonly) NSXPCConnection *xpcConnection;
@property (retain, nonatomic, readonly) id <CADInterface> CADOperationProxy;
@property (retain, nonatomic, readonly) id <CADInterface> CADOperationProxySync;
@property (weak) id <EKDaemonConnectionDelegate> delegate;
@property (retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions;

+ (_Bool)_tryRegisterNewConnection;
+ (void)_unregisterConnection;
+ (unsigned long long)maxNumberOfOpenConnections;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (_Bool)_connectToServer;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)_finishAllRepliesOnServerDeath;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(_Bool)arg3;
- (void)_daemonRestarted;
- (void)cancelRemoteOperation:(unsigned int)arg1;

@end
