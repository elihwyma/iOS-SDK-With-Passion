/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXVoicemailObserverXPCClient : NSObject

{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_mutableVoicemailUUIDToVoicemailMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableVoicemailUUIDToVoicemailMap;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *voicemailUUIDToVoicemailMap;

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
- (void)_requestVoicemails;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(_Bool)arg2;
- (void)_addOrUpdateVoicemails:(id)arg1;
- (void)_removeVoicemails:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)addOrUpdateVoicemails:(id)arg1;
- (oneway void)removeVoicemails:(id)arg1;

@end
