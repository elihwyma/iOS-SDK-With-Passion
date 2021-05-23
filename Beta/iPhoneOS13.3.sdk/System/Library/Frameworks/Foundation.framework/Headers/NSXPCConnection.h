/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCInterface, NSXPCListenerEndpoint;

@protocol NSObject, OS_dispatch_queue;

@interface NSXPCConnection : NSObject

{
    void *_xconnection;
    id _repliesExpected;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned int _state;
    unsigned int _state2;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id _exportInfo;
    id _repliesRequested;
    id _importInfo;
    id <NSObject> _otherInfo;
    id _reserved1;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    id _eCache;
    id _dCache;
    struct os_unfair_lock_s _lock;
}

@property (copy, readonly) NSString *serviceName;
@property (retain, readonly) NSXPCListenerEndpoint *endpoint;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (retain, readonly) id remoteObjectProxy;
@property (copy) CDUnknownBlockType interruptionHandler;
@property (copy) CDUnknownBlockType invalidationHandler;
@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;

+ (id)currentConnection;
+ (id)_currentBoost;
+ (void)beginTransaction;
+ (void)endTransaction;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)_queue;
- (id)userInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)_generationCount;
- (void)resume;
- (id)_unboostingRemoteObjectProxy;
- (void)_setQueue:(id)arg1;
- (CDStruct_4c969caf)auditToken;
- (void)stop;
- (id)initWithMachServiceName:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)start;
- (void)set_additionalInvalidationHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)setUserInfo:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)_xpcConnection;
- (void)_killConnection:(int)arg1;
- (void)suspend;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)setOptions:(unsigned long long)arg1;
- (id)valueForEntitlement:(id)arg1;
- (id)_errorDescription;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)_sendInvocation:(id)arg1 orArguments:(id *)arg2 count:(unsigned long long)arg3 methodSignature:(id)arg4 selector:(SEL)arg5 withProxy:(id)arg6;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (void)_resumeProgress:(unsigned long long)arg1;
- (void)_decodeAndInvokeReplyBlockWithEvent:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;
- (Class)_remoteObjectInterfaceClass;
- (void)_sendDesistForProxy:(id)arg1;
- (void)_decodeAndInvokeMessageWithEvent:(id)arg1 flags:(unsigned long long)arg2;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithEndpoint:(id)arg1;
- (void)scheduleSendBarrierBlock:(CDUnknownBlockType)arg1;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 arg4:(id)arg6;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2;
- (CDUnknownBlockType)_additionalInvalidationHandler;
- (id)_exportTable;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (_Bool)_encodeCacheContainsClass:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (_Bool)_decodeCacheContainsClass:(Class)arg1;
- (void)_addClassToDecodeCache:(Class)arg1;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_addImportedProxy:(id)arg1;
- (void)_removeImportedProxy:(id)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (void)_decodeProgressMessageWithData:(id)arg1 flags:(unsigned long long)arg2;

@end
