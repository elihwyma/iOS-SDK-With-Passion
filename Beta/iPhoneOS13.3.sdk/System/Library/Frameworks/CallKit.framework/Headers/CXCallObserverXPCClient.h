/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallObserverXPCClient : NSObject

{
    _Bool _clientsShouldConnect;
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableDictionary *_mutableCallUUIDToCallMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableCallUUIDToCallMap;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int clientsShouldConnectToken;
@property (nonatomic) _Bool clientsShouldConnect;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *callUUIDToCallMap;

+ (id)sharedXPCClientSemaphore;
+ (id)sharedXPCClient;
+ (void)releaseSharedXPCClient;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)_init;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
- (oneway void)removeCall:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(_Bool)arg2;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestCalls;
- (void)_removeCall:(id)arg1;
- (void)_addOrUpdateCall:(id)arg1;
- (void)_markAllCallsAsEnded;

@end
