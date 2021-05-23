/*
 Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface IOSurfaceRemoteRemoteClient : NSObject

{
    int _pid;
    NSMapTable *_ioSurfaceClients;
    NSObject<OS_xpc_object> *_remoteConnection;
    NSObject<OS_dispatch_queue> *_disconnectedQueue;
    CDUnknownBlockType _disconnectedHandler;
}

@property (nonatomic) int pid;
@property (retain, nonatomic) NSMapTable *ioSurfaceClients;
@property (retain, nonatomic) NSObject<OS_xpc_object> *remoteConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectedQueue;
@property (copy, nonatomic) CDUnknownBlockType disconnectedHandler;

- (void)dealloc;
- (id)description;
- (void)_handleMessage:(id)arg1;
- (_Bool)_removeClient:(unsigned int)arg1;
- (void)_handleError:(id)arg1;
- (id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(CDUnknownBlockType)arg3;
- (struct __IOSurfaceClient *)_getClient:(unsigned int)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id *)arg3;
- (void)_addClient:(struct __IOSurfaceClient *)arg1 extraData:(id)arg2;

@end
