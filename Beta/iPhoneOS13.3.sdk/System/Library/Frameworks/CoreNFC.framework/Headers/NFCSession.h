/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

@class NFWeakReference, NSLock, NSString, NSXPCConnection, NSXPCInterface;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCSession : NSObject

{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_machServiceName;
    NFWeakReference *_exportedObject;
    NFWeakReference *_delegate;
}

- (void)dealloc;
- (void)_invalidate;
- (id)_connection;
- (id)_connectionLock;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_setConnection:(id)arg1;
- (_Bool)_connectIfNeeded;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5;
- (id)_exportedObjectClassName;

@end
